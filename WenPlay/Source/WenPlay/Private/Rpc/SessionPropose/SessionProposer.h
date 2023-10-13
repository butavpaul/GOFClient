// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "ClientMetadata.h"

#include "SessionProposer.generated.h"

USTRUCT()
struct FSessionProposer
{
	GENERATED_BODY()

	UPROPERTY()
	FString publicKey;

	UPROPERTY()
	FClientMetadata metadata;
};
