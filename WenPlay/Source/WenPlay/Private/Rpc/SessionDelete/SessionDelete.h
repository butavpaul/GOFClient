// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Rpc/JsonRpcRequest.h"

#include "SessionDeleteParams.h"

#include "SessionDelete.generated.h"

USTRUCT() 
struct FSessionDelete : public FJsonRpcRequest
{
	GENERATED_BODY()

	FSessionDelete() : FJsonRpcRequest()
	{
		method = "wc_sessionDelete";
	}

	UPROPERTY()
	FSessionDeleteParams params;
};
