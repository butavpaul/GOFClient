// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "SessionRequestParams.h"

#include "SessionParams.generated.h"

USTRUCT()
struct FSessionParams
{
	GENERATED_BODY()

	UPROPERTY()
	FSessionRequestParams request;

	UPROPERTY()
	FString chainId;
};
