// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "SessionDeleteParams.generated.h"

USTRUCT()
struct FSessionDeleteParams
{
	GENERATED_BODY()

	UPROPERTY()
	int64 code = 6000;

	UPROPERTY()
	FString message = "User disconnected";
};
