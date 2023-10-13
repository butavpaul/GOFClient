// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Rpc/JsonRpcRequest.h"

#include "IrnSubscribe.generated.h"

USTRUCT() 
struct FIrnSubscribe : public FJsonRpcRequest
{
	GENERATED_BODY()
	
	FIrnSubscribe() : FJsonRpcRequest() {};

	FIrnSubscribe(FString const& Topic)
		: FJsonRpcRequest()
	{
		params.Add("topic", Topic);
		method = "irn_subscribe";
	}

	UPROPERTY()
	TMap<FString, FString> params;
};
