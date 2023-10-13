// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Rpc/JsonRpcRequest.h"

#include "IrnPublishParams.h"

#include "IrnPublish.generated.h"

USTRUCT() 
struct FIrnPublish : public FJsonRpcRequest
{
	GENERATED_BODY()
	
	FIrnPublish() : FJsonRpcRequest() {};

	FIrnPublish(FString const& Topic, FString const& Message, bool bPrompt, int Tag)
		: FJsonRpcRequest()
	{
		method = "irn_publish";

		params.topic = Topic;
		params.message = Message;
		params.ttl = 300;
		params.prompt = bPrompt;
		params.tag = Tag;
	}

	UPROPERTY()
	FIrnPublishParams params;
};
