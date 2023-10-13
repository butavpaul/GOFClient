// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Rpc/JsonRpcRequest.h"

#include "SessionParams.h"
#include "SessionRequestParams.h"
#include "SessionRequestTransactionParams.h"

#include "MultiversX/Transaction.h"

#include "SessionRequest.generated.h"

USTRUCT() 
struct FSessionRequest : public FJsonRpcRequest
{
	GENERATED_BODY()
	
	FSessionRequest() : FJsonRpcRequest()
	{}


	FSessionRequest(FTransaction const& Transaction)
		: FJsonRpcRequest()
	{
		method = "wc_sessionRequest";

		FSessionRequestTransactionParams TransactionParams;

		TransactionParams.transactions.Add(Transaction);

		FSessionRequestParams Request;
		Request.method = "erd_signTransactions";
		Request.params = TransactionParams;

		params.chainId = "elrond:" + Transaction.chainID;
		params.request = Request;
	}

	UPROPERTY()
	FSessionParams params;
};
