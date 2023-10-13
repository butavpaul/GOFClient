// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Containers/Map.h"

#include "SessionRequiredNamespaces.h"
#include "SessionProtocol.h"
#include "SessionProposer.h"

#include "SessionProposeParams.generated.h"

USTRUCT()
struct FSessionProposeParams
{
	GENERATED_BODY()

	UPROPERTY()
	FSessionRequiredNamespaces requiredNamespaces;

	UPROPERTY()
	TArray<FSessionProtocol> relays;

	UPROPERTY()
	FSessionProposer proposer;
};
