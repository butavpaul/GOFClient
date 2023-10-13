// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "NetworkType.h"

#include "Rpc/JsonRpcRequest.h"

#include "SessionProposeParams.h"
#include "SessionRequiredNamespaceParams.h"

#include "SessionPropose.generated.h"

USTRUCT() 
struct FSessionPropose : public FJsonRpcRequest
{
	GENERATED_BODY()
	
	FSessionPropose() : FJsonRpcRequest()
	{}

	FSessionPropose(FClientMetadata const& Metadata, FString const& PublicKey, ENetworkType NetworkType)
		: FJsonRpcRequest()
	{
		FString Chain = (NetworkType == ENetworkType::DevNet) ? "elrond:D" : "elrond:1";

		FSessionRequiredNamespaceParams Params;

		Params.chains = { Chain };
		Params.methods =
		{ 
			"erd_signLoginToken",
			"erd_signTransaction",
			"erd_signTransactions",
			"erd_cancelAction",
			"erd_signMessage" 
		};

		params.proposer = { PublicKey, Metadata };
		params.relays = { {"irn"} };
		params.requiredNamespaces = { Params };

		method = "wc_sessionPropose";
	}

	UPROPERTY()
	FSessionProposeParams params;
};
