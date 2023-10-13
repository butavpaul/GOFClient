// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "SessionRequiredNamespaceParams.generated.h"

USTRUCT()
struct FSessionRequiredNamespaceParams
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<FString> methods;

	UPROPERTY()
	TArray<FString> chains;

	UPROPERTY()
	TArray<FString> events;
};
