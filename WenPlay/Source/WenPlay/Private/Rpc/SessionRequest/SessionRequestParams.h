// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "SessionRequestTransactionParams.h"

#include "SessionRequestParams.generated.h"

USTRUCT()
struct FSessionRequestParams
{
	GENERATED_BODY()

	UPROPERTY()
	FString method;

	UPROPERTY()
	FSessionRequestTransactionParams params;
};
