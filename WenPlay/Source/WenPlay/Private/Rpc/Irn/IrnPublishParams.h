// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "IrnPublishParams.generated.h"

USTRUCT() 
struct FIrnPublishParams
{
	GENERATED_BODY()
	
	UPROPERTY()
	FString topic;

	UPROPERTY()
	FString message;

	UPROPERTY()
	int ttl;

	UPROPERTY()
	int tag;

	UPROPERTY()
	bool prompt;
};
