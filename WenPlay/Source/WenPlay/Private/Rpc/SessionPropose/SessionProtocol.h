// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "SessionProtocol.generated.h"

USTRUCT()
struct FSessionProtocol
{
	GENERATED_BODY()

	UPROPERTY()
	FString publicKey;

	UPROPERTY()
	FClientMetadata metadata;
};
