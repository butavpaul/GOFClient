// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "MultiversX/Transaction.h"

#include "SessionRequestTransactionParams.generated.h"

USTRUCT()
struct FSessionRequestTransactionParams
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<FTransaction> transactions;
};
