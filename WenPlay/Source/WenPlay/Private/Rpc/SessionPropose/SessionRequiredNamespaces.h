// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "SessionRequiredNamespaceParams.h"

#include "SessionRequiredNamespaces.generated.h"

USTRUCT()
struct FSessionRequiredNamespaces
{
	GENERATED_BODY()

	UPROPERTY()
	FSessionRequiredNamespaceParams elrond;
};
