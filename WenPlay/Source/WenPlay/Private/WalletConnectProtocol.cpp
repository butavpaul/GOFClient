// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#include "WalletConnectProtocol.h"

#include "WenPlayLog.h"

#include "WebSocketsModule.h"

#include "Policies/CondensedJsonPrintPolicy.h"
#include "JsonObjectConverter.h"
#include "EncryptionContextOpenSSL.h"

#include "PlatformCryptoTypes.h"

#include "ClientMetadata.h"

#include "Encryption/Cipher.h"

#include "Rpc/SessionRequest/SessionRequest.h"
#include "Rpc/SessionPropose/SessionPropose.h"
#include "Rpc/SessionDelete/SessionDelete.h"

#include "Rpc/Irn/IrnSubscribe.h"
#include "Rpc/Irn/IrnPublish.h"
#include "Rpc/Irn/IrnAck.h"

WalletConnectProtocol::~WalletConnectProtocol()
{
	Close();
}

void WalletConnectProtocol::OnConnected()
{
	UE_LOG(LogWenPlay, Display, TEXT("WebSocket is Connected"));

	Subscribe(Topic);
}

void WalletConnectProtocol::OnConnectionError(const FString& ErrorMsg)
{
	UE_LOG(LogWenPlay, Error, TEXT("Websocket Error: %s"), *ErrorMsg);
}

void WalletConnectProtocol::OnClosed(int32 StatusCode, const FString& Reason, bool bWasClean)
{
	UE_LOG(LogWenPlay, Display, TEXT("Websocket closed, StatusCode: %d, Reason: %s, "),
		StatusCode, *Reason);
}

void WalletConnectProtocol::OnMessage(const FString& Msg)
{
	UE_LOG(LogWenPlay, Display, TEXT("OnMessage: %s"), *Msg);

	TSharedPtr<FJsonObject> ResponseJson;
	FJsonSerializer::Deserialize(TJsonReaderFactory<>::Create(Msg), ResponseJson);

	// Deserializer messes-up id field in packaged builds by replacing it as an "iD"
	FString Id = ResponseJson->HasTypedField<EJson::Number>("id") ? "id" : "iD";

	//Send Ack that we got the message from relay server
	FIrnAck IrnAck(ResponseJson->GetNumberField(Id));

	WebSocket->Send(IrnAck.GetJson());
	UE_LOG(LogWenPlay, Display, TEXT("IrnAck: %s"), *IrnAck.GetJson());

	if (ResponseJson->HasTypedField<EJson::String>("result"))
	{
		if (!bIsWalletConnected)
		{
			FCipher::GetKeyPair(KeyPairType::X25519, PublicKeyRaw, PrivateKeyRaw);
			
			PublicKey = BytesToHex(PublicKeyRaw.GetData(), PublicKeyRaw.Num()).ToLower();
			PrivateKey = BytesToHex(PrivateKeyRaw.GetData(), PrivateKeyRaw.Num()).ToLower();
			
			FSessionPropose SessionPropose(Metadata, PublicKey, NetworkType);

			FString EncrypedMessage;
			FCipher::EncryptWithKey(KeyRaw, SessionPropose.GetJson<FSessionPropose>(), 
				EncrypedMessage);

			bool bPrompt = true;
			FIrnPublish IrnPublish(Topic, EncrypedMessage, bPrompt, 1100);

			FString IrnObjectJson = IrnPublish.GetJson<FIrnPublish>();
			WebSocket->Send(IrnObjectJson);

			UE_LOG(LogWenPlay, Display, TEXT("IrnPublish: %s"), *IrnObjectJson);
		}
	}
	else if (ResponseJson->HasTypedField<EJson::String>("method"))
	{
		ResponseJson = ResponseJson->GetObjectField("params");

		if (ResponseJson == nullptr)
		{
			return;
		}

		ResponseJson = ResponseJson->GetObjectField("data");

		if (ResponseJson == nullptr || 
			!ResponseJson->HasTypedField<EJson::String>("message"))
		{
			return;
		}
		
		auto const& JsonEncryptedMessage = ResponseJson->GetStringField("message");

		FString DecryptedMessage;

		if (FCipher::DecryptWithKey(KeyRaw, JsonEncryptedMessage, DecryptedMessage))
		{
			UE_LOG(LogWenPlay, Log, TEXT("DecryptedMessage: %s"), *DecryptedMessage);

			if (!OnMessageCallbacks.IsEmpty())
			{
				for (auto it : OnMessageCallbacks)
				{
					FOnMessageCallback* Callback = &it.Value;

					if (Callback != nullptr)
					{
						Callback->ExecuteIfBound(DecryptedMessage);
					}
				}

				OnMessageCallbacks.Empty();
			}

			TSharedPtr<FJsonObject> JsonObject;
			if (!FJsonSerializer::Deserialize(TJsonReaderFactory<>::Create(DecryptedMessage), JsonObject))
			{
				UE_LOG(LogWenPlay, Error, TEXT("DecryptedMessage is Invalid"), *DecryptedMessage);
				return;
			}

			if (JsonObject->HasTypedField<EJson::String>("method"))
			{
				FString Method = JsonObject->GetStringField("method");
				
				if (Method == "wc_sessionSettle")
				{
					if (!JsonObject->HasTypedField<EJson::Object>("params"))
					{
						return;
					}

					TSharedPtr<FJsonObject> JsonParams = JsonObject->GetObjectField("params");

					if (!JsonParams->HasTypedField<EJson::Object>("namespaces"))
					{
						return;
					}
					
					TSharedPtr<FJsonObject> JsonNamespaces = JsonParams->GetObjectField("namespaces");

					if (!JsonNamespaces->HasTypedField<EJson::Object>("elrond"))
					{
						return;
					}
							
					TSharedPtr<FJsonObject> JsonElrond = JsonNamespaces->GetObjectField("elrond");
					TArray<TSharedPtr<FJsonValue>> Accounts = JsonElrond->GetArrayField("accounts");
					
					if (!Accounts.IsEmpty())
					{
						AccountAddress = Accounts[0]->AsString().RightChop(9);

						UpdateSessionCallback.ExecuteIfBound();

						UE_LOG(LogWenPlay, Display, TEXT("Wallet Connected, Account Address: %s"),
							*AccountAddress);
					}

					return;
				}

				if (Method == "wc_sessionDelete")
				{
					Close();

					return;
				}
			}

			if (JsonObject->HasTypedField<EJson::Object>("result"))
			{
				JsonObject = JsonObject->GetObjectField("result");

				if (JsonObject != nullptr && JsonObject->HasTypedField<EJson::String>("responderPublicKey"))
				{
					FString PeerPublicKey = JsonObject->GetStringField("responderPublicKey");

					Key = FCipher::ExchangeKeys(PrivateKeyRaw, PeerPublicKey);
					HexToBytes(Key, KeyRaw.GetData());

					Topic = FCipher::DigestKey(KeyRaw);

					Subscribe(Topic);

					bIsWalletConnected = true;
					UpdateSessionCallback.ExecuteIfBound();

					return;
				}
			}
		}
	}
}

FString WalletConnectProtocol::GeneratePairingURI()
{
	// https://docs.walletconnect.com/2.0/specs/clients/core/pairing/pairing-uri

	return "wc:" + Topic + "@" + ProtocolVersion + "?relay-protocol=irn&symKey=" + Key;
}

FString WalletConnectProtocol::GenerateRelayURL(FString const& ProjectID)
{
	// https://docs.walletconnect.com/2.0/specs/clients/push/push-authentication

	// Header
	FString Header = FString("{\"alg\":\"EdDSA\",\"typ\":\"JWT\"}");
	Header = FBase64::Encode(Header);

	// Payload
	TArray<uint8> SubKeyRaw;
	SubKeyRaw.Init(0, 32);

	FEncryptionContext EncryptionContext;

	if (EncryptionContext.CreateRandomBytes(SubKeyRaw) == EPlatformCryptoResult::Failure)
	{
		UE_LOG(LogWenPlay, Error, TEXT("Can't create key for encryption"));
		return "";
	}

	FString SubKey = BytesToHex(SubKeyRaw.GetData(), SubKeyRaw.Num()).ToLower();

	const int64 PushRequestTTL = 86400;
	const int64 CurrentTime = FDateTime::UtcNow().ToUnixTimestamp();

	FString Iss = "did:key:z" + FCipher::EncodeBase58("ed01" + PublicKey);

	FString BaseRelayURL = "wss://relay.walletconnect.com";

	TSharedRef<FJsonObject> AuthenticationJson = MakeShared<FJsonObject>();
	AuthenticationJson->SetStringField("iss", Iss);
	AuthenticationJson->SetStringField("sub", SubKey);
	AuthenticationJson->SetStringField("aud", BaseRelayURL);
	AuthenticationJson->SetNumberField("iat", CurrentTime);
	AuthenticationJson->SetNumberField("exp", CurrentTime + PushRequestTTL);

	FString Payload;
	
	auto WriterFactory = TJsonWriterFactory<TCHAR, TCondensedJsonPrintPolicy<TCHAR>>::Create(&Payload);
	FJsonSerializer::Serialize(AuthenticationJson, WriterFactory);

	UE_LOG(LogWenPlay, Display, TEXT("Payload: %s"), *Payload);

	Payload = FBase64::Encode(Payload);
	Payload = Payload.Replace(TEXT("="), TEXT(""));

	// Sign
	FString Message = Header + "." + Payload;
	FString Signature = FCipher::Sign(Message, PrivateKeyRaw);

	// Generate final URL
	return BaseRelayURL + "/?auth=" + Message + "." + Signature + "&projectId=" + ProjectID;
}

FString WalletConnectProtocol::Open(FString const& ProjectID, FClientMetadata const& ClientMetadata,
	ENetworkType InNetworkType)
{
	if ((WebSocket != nullptr) && (WebSocket->IsConnected()))
	{
		UE_LOG(LogWenPlay, Error, TEXT("Can't open websocket - previous instance was not closed"));
	}

	NetworkType = InNetworkType;
	Metadata = ClientMetadata;

	// Init keys
	KeyRaw.Init(0, 32);

	FEncryptionContext EncryptionContext;

	if (EncryptionContext.CreateRandomBytes(KeyRaw) == EPlatformCryptoResult::Failure)
	{
		UE_LOG(LogWenPlay, Error, TEXT("Can't create key for encryption"));
	}

	FCipher::GetKeyPair(KeyPairType::Ed25519, PublicKeyRaw, PrivateKeyRaw);

	Key = BytesToHex(KeyRaw.GetData(), KeyRaw.Num()).ToLower();
	PublicKey = BytesToHex(PublicKeyRaw.GetData(), PublicKeyRaw.Num()).ToLower();
	PrivateKey = BytesToHex(PrivateKeyRaw.GetData(), PrivateKeyRaw.Num()).ToLower();

	Topic = FCipher::DigestKey(KeyRaw);
	
	// Connect to Relay server, bind websocket callbacks
	FString RelayURL = GenerateRelayURL(ProjectID);

	UE_LOG(LogWenPlay, Display, TEXT("Relay URL: %s"), *RelayURL);

	WebSocket = FWebSocketsModule::Get().CreateWebSocket(RelayURL);

	WebSocket->OnConnected().AddLambda([this]()
	{
		OnConnected();
	});

	WebSocket->OnClosed().AddLambda([this](int32 StatusCode, const FString& Reason, bool bWasClean)
	{
		OnClosed(StatusCode, Reason, bWasClean);
	});

	WebSocket->OnConnectionError().AddLambda([this](const FString& ErrorMsg)
	{
		OnConnectionError(ErrorMsg);
	});

	WebSocket->OnMessage().AddLambda([this](const FString& Msg)
	{
		OnMessage(Msg);
	});

	UE_LOG(LogWenPlay, Display, TEXT("WebSocketTransport: Connecting to %s"), *RelayURL);

	WebSocket->Connect();

	// return QR Uri
	return GeneratePairingURI();
}

void WalletConnectProtocol::Close()
{
	OnMessageCallbacks.Empty();
	SubscribedTopics.Empty();

	if (WebSocket && WebSocket->IsConnected())
	{
		if (bIsWalletConnected)
		{
			FSessionDelete SessionDelete;

			FString EncryptedMessage;
			FCipher::EncryptWithKey(KeyRaw, SessionDelete.GetJson<FSessionDelete>(), 
				EncryptedMessage);

			bool bPrompt = false;
			int Tag = 1112;
			FIrnPublish IrnPublish(Topic, EncryptedMessage, bPrompt, Tag);

			WebSocket->Send(IrnPublish.GetJson<FIrnPublish>());

			bIsWalletConnected = false;
		}

		WebSocket->Close();
		WebSocket = nullptr;
	}
}

int64 WalletConnectProtocol::SignTransaction(FTransactionData const& TransactionData)
{
	FTransaction Transaction;

	Transaction.nonce = TransactionData.nonce;
	Transaction.receiver = TransactionData.to;
	Transaction.sender = TransactionData.from;
	Transaction.value = TransactionData.amount;
	Transaction.gasPrice = TransactionData.gasPrice;
	Transaction.gasLimit = TransactionData.gasLimit;
	Transaction.data = FBase64::Encode(TransactionData.data);
	Transaction.chainID = TransactionData.chainId;
	Transaction.version = TransactionData.version;

	FSessionRequest SignTransaction(Transaction);

	FString Message = SignTransaction.GetJson<FSessionRequest>();

	// Fix-up for UE serializator (produces chainID with small 'D' for some reason)
	ensure(Message[88] == 'd');
	Message[88] = 'D';

	FString EncryptedMessage;

	FCipher::EncryptWithKey(KeyRaw, Message, EncryptedMessage);

	bool bPrompt = true;
	int Tag = 1108;

	FIrnPublish IrnPublish(Topic, EncryptedMessage, bPrompt, Tag);
	
	FString IrnMessage = IrnPublish.GetJson<FIrnPublish>();

	UE_LOG(LogWenPlay, Display, TEXT("Decrypted message for IrnPublish: %s"),
		*Message);
	UE_LOG(LogWenPlay, Display, TEXT("IrnPublish: %s"), *IrnMessage);

	WebSocket->Send(IrnMessage);

	return SignTransaction.id;
}

void WalletConnectProtocol::CloseSession()
{
	if (bIsWalletConnected)
	{
		FSessionDelete SessionDelete;

		FString EncryptedMessage;
		FCipher::EncryptWithKey(KeyRaw, SessionDelete.GetJson<FSessionDelete>(),
			EncryptedMessage);

		bool bPrompt = false;
		int Tag = 1112;
		FIrnPublish IrnPublish(Topic, EncryptedMessage, bPrompt, Tag);

		WebSocket->Send(IrnPublish.GetJson<FIrnPublish>());

		bIsWalletConnected = false;

		UpdateSessionCallback.ExecuteIfBound();
	}
}

void WalletConnectProtocol::Subscribe(FString const& InTopic)
{
	FIrnSubscribe IrnSubscribe(InTopic);

	FString IrnObjectJson = IrnSubscribe.GetJson<FIrnSubscribe>();
	WebSocket->Send(IrnObjectJson);

	if (!SubscribedTopics.Contains(InTopic))
	{
		SubscribedTopics.Add(InTopic);
	}

	UE_LOG(LogWenPlay, Display, TEXT("IrnSubscribe %s"), *IrnObjectJson);
}
