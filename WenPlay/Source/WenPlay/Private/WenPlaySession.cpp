// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#include "WenPlaySession.h"

#include "WenPlayLog.h"

#include "Encryption/Cipher.h"
#include "Misc/Base64.h"

#include "MultiversX/TransactionState.h"
#include "MultiversX/TransactionSigned.h"

void AWenPlaySession::CreateWenPlaySession(FString const& InProjectID,
	FClientMetadata const& InMetadata, TEnumAsByte<ENetworkType> InNetworkType, 
	FString const& InMainNetEndPoint)
{
	Metadata = InMetadata;
	NetworkType = InNetworkType;
	MainNetEndpoint = InMainNetEndPoint;
	ProjectID = InProjectID;

	Transport = MakeShared<WalletConnectProtocol>();
	URI = Transport->Open(ProjectID, Metadata, NetworkType);

	FUpdateSessionCallback UpdateSessionCallback;
	UpdateSessionCallback.BindUObject(this, &AWenPlaySession::UpdateSession);
	Transport->RegisterUpdateSessionCallback(UpdateSessionCallback);

	UE_LOG(LogWenPlay, Display, TEXT("WalletConnectProtocol:: URI for connection: %s"), *URI);
};

void AWenPlaySession::UpdateSessionURI()
{
	Transport->Close();

	URI = Transport->Open(ProjectID, Metadata, NetworkType);

	UE_LOG(LogWenPlay, Display, TEXT("WalletConnectProtocol:: URI for connection: %s"), *URI);
}

FString AWenPlaySession::SignTransaction(FTransactionData const& Transaction)
{
	// First send HTTP request to endpoint to get nonce value
	// After trigger request method
	TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();

	FString ApiAddress = (NetworkType == ENetworkType::DevNet)
		? DevNetEndpoint
		: MainNetEndpoint;

	ApiAddress += FString("/accounts/") + Transport->GetAccountAddress();

	HttpRequest->SetURL(ApiAddress);
	HttpRequest->OnProcessRequestComplete().BindUObject(this,
		&AWenPlaySession::HandleGetNonceHttpRequestComplete);
	HttpRequest->ProcessRequest();

	HttpRequestsToData.Add(HttpRequest, Transaction);

	FTransactionState TransactionState;

	TransactionState.id = FGuid::NewGuid().ToString(EGuidFormats::DigitsWithHyphensLower);

	HttpRequestsToTransactionsState.Add(HttpRequest, TransactionState);
	Transactions.Add(TransactionState);

	return TransactionState.id;
}

FTransactionState AWenPlaySession::GetTransactionState(FString const& TransactionId)
{
	for (int32_t i = 0; i < Transactions.Num(); i++)
	{
		if ((Transactions[i].id == TransactionId))
		{
			return Transactions[i];
		}
	}

	return FTransactionState();
}

void AWenPlaySession::CloseSession()
{
	Transport->CloseSession();
}

void AWenPlaySession::UpdateSession()
{
	Connected = false;

	if (Transport != nullptr)
	{
		Account = Transport->GetAccountAddress();
		Connected = Transport->IsWalletConnected();
	}
}

void AWenPlaySession::Tick(float DeltaSeconds)
{
	for (int32_t i = 0; i < Transactions.Num(); i++)
	{
		if ((Transactions[i].status == ETransactionStatus::Failed) ||
			(Transactions[i].status == ETransactionStatus::Successful) ||
			(Transactions[i].checkingState == true))
		{
			continue;
		}

		Transactions[i].checkingState = true;

		TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();

		FString ApiAddress = (NetworkType == ENetworkType::DevNet)
			? DevNetEndpoint
			: MainNetEndpoint;

		ApiAddress += "/transactions/";
		ApiAddress += Transactions[i].txHash + "?fields=status";

		HttpRequest->SetURL(ApiAddress);
		HttpRequest->OnProcessRequestComplete().BindUObject(this,
			&AWenPlaySession::HandleCheckTransactionStatusHttpRequestComplete);
		HttpRequest->ProcessRequest();

		HttpRequestsToTransactionId.Add(HttpRequest, Transactions[i].id);
	}
}

void AWenPlaySession::HandleCheckTransactionStatusHttpRequestComplete(FHttpRequestPtr Request,
	FHttpResponsePtr Response, bool bWasSuccessful)
{
	FString HttpResponse = Response->GetContentAsString();

	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(HttpResponse);

	FString* TransactionId = HttpRequestsToTransactionId.Find(Request);

	if (TransactionId == nullptr)
	{
		return;
	}

	if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
	{
		FString StatusString = JsonObject->GetStringField("status");

		TEnumAsByte<ETransactionStatus> Status = ETransactionStatus::None;

		if (StatusString == "pending")
		{
			Status = ETransactionStatus::Pending;
		}
		else if (StatusString == "fail")
		{
			Status = ETransactionStatus::Failed;
		}
		else if (StatusString == "success")
		{
			Status = ETransactionStatus::Successful;
		}

		for (int32_t i = 0; i < Transactions.Num(); i++)
		{
			if (Transactions[i].id == *TransactionId)
			{
				Transactions[i].status = Status;
				Transactions[i].checkingState = false;
			}
		}
	}

	HttpRequestsToTransactionId.Remove(Request);
}

void AWenPlaySession::HandleGetNonceHttpRequestComplete(FHttpRequestPtr Request,
	FHttpResponsePtr Response, bool bWasSuccessful)
{
	FTransactionData* Transaction = HttpRequestsToData.Find(Request);
	FTransactionState* TransactionState = HttpRequestsToTransactionsState.Find(Request);

	if ((Transaction == nullptr) || (TransactionState == nullptr))
	{
		return;
	}

	FString httpResponse = Response->GetContentAsString();

	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(httpResponse);

	if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
	{
		FString NonceString = JsonObject->GetStringField("nonce");
		int Nonce = FCString::Atoi(*NonceString);

		FTransactionData TransactionData = *Transaction;
		TransactionData.nonce = Nonce;
		TransactionData.chainId = (NetworkType == ENetworkType::DevNet) ? "D" : "1";
		TransactionData.version = 1;

		int64 RequestId = Transport->SignTransaction(TransactionData);

		FOnMessageCallback OnMessageCallback;
		OnMessageCallback.BindUObject(this, &AWenPlaySession::HandleSignTransaction);
		Transport->RegisterOnMessageCallback(RequestId, OnMessageCallback);

		TransactionToSign.Add(RequestId, TransactionData);
		IdToTransactionsState.Add(RequestId, *TransactionState);

		LastTransactionToSign = RequestId;
	}

	HttpRequestsToData.Remove(Request);
	HttpRequestsToTransactionsState.Remove(Request);
}

void AWenPlaySession::HandleSignTransaction(FString const& Response)
{
	// No transaction was registered - quit
	if (LastTransactionToSign == -1)
	{
		return;
	}

	int64 Id = LastTransactionToSign;
	LastTransactionToSign = -1;

	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(Response);

	if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
	{
		if (JsonObject->HasTypedField<EJson::Object>("error"))
		{
			TSharedPtr<FJsonObject> ErrorResponse = JsonObject->GetObjectField("error");
			
			if (ErrorResponse->HasTypedField<EJson::String>("message"))
			{
				FString ErrorMessage = ErrorResponse->GetStringField("message");

				UE_LOG(LogWenPlay, Error, TEXT("Error Response: %s"), *ErrorMessage);
			}
		}

		if (JsonObject->HasTypedField<EJson::Object>("result"))
		{
			TSharedPtr<FJsonObject> ResultResponse = JsonObject->GetObjectField("result");

			FTransactionData* TransactionToSignEntry = TransactionToSign.Find(Id);
			FTransactionState* TransactionState = IdToTransactionsState.Find(Id);

			if (TransactionToSignEntry == nullptr)
			{
				return;
			}

			auto const& Signatures = ResultResponse->GetArrayField("signatures");

			for (auto const& SignatureValue : Signatures)
			{
				TSharedPtr<FJsonObject> SignatureObject = SignatureValue->AsObject();

				FString Signature = SignatureObject->GetStringField("signature");

				FTransactionSigned TransactionSigned;
				TransactionSigned.nonce = TransactionToSignEntry->nonce;
				TransactionSigned.receiver = TransactionToSignEntry->to;
				TransactionSigned.sender = TransactionToSignEntry->from;
				TransactionSigned.value = TransactionToSignEntry->amount;
				TransactionSigned.gasPrice = TransactionToSignEntry->gasPrice;
				TransactionSigned.gasLimit = TransactionToSignEntry->gasLimit;
				TransactionSigned.data = FBase64::Encode(TransactionToSignEntry->data);
				TransactionSigned.chainID = TransactionToSignEntry->chainId;
				TransactionSigned.version = TransactionToSignEntry->version;
				TransactionSigned.signature = Signature;

				FString ApiAddress = (NetworkType == ENetworkType::DevNet)
					? DevNetEndpoint
					: MainNetEndpoint;

				ApiAddress += FString("/transactions");

				FString RequestObjectJson;
				if (!FJsonObjectConverter::UStructToJsonObjectString(FTransactionSigned::StaticStruct(),
					&TransactionSigned, RequestObjectJson, 0, 0, 0, nullptr, false))
				{
					UE_LOG(LogWenPlay, Error, TEXT("Can't convert into json"));
					return;
				}

				TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();

				HttpRequest->SetVerb("POST");
				HttpRequest->SetHeader("Content-Type", "application/json");
				HttpRequest->SetURL(ApiAddress);
				HttpRequest->SetContentAsString(RequestObjectJson);
				HttpRequest->OnProcessRequestComplete().BindUObject(this,
					&AWenPlaySession::HandleSignTransactionHttpRequestComplete);
				HttpRequest->ProcessRequest();

				HttpRequestsToTransactionsState.Add(HttpRequest, *TransactionState);

				TransactionToSign.Remove(Id);
				IdToTransactionsState.Remove(Id);
			}
		}
	}
}

void AWenPlaySession::HandleSignTransactionHttpRequestComplete(FHttpRequestPtr Request,
	FHttpResponsePtr Response, bool bWasSuccessful)
{
	FTransactionState* TransactionState = HttpRequestsToTransactionsState.Find(Request);

	if (TransactionState == nullptr)
	{
		return;
	}

	FString HttpResponse = Response->GetContentAsString();

	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(HttpResponse);

	if (JsonObject.IsValid() && FJsonSerializer::Deserialize(JsonReader, JsonObject))
	{
		// Got transaction status - process
		if (JsonObject->HasTypedField<EJson::String>("txHash"))
		{
			FString TxHash = JsonObject->GetStringField("txHash");
			FString StatusString = JsonObject->GetStringField("status");

			TEnumAsByte<ETransactionStatus> Status = ETransactionStatus::None;

			if (StatusString == "Pending")
			{
				Status = ETransactionStatus::Pending;
			}
			else if (StatusString == "Fail")
			{
				Status = ETransactionStatus::Failed;
			}
			else if (StatusString == "Success")
			{
				Status = ETransactionStatus::Successful;
			}

			for (int32_t i = 0; i < Transactions.Num(); i++)
			{
				if (Transactions[i].id == TransactionState->id)
				{
					Transactions[i].txHash = TxHash;
					Transactions[i].status = Status;
					Transactions[i].checkingState = false;
				}
			}

			HttpRequestsToTransactionsState.Remove(Request);
		}

		if (JsonObject->HasTypedField<EJson::Number>("statusCode"))
		{
			if (JsonObject->HasTypedField<EJson::String>("message"))
			{
				FString Message = JsonObject->GetStringField("message");
				
				UE_LOG(LogWenPlay, Warning, TEXT("Response Message: %s"), *Message);
			}
		}
	}
}
