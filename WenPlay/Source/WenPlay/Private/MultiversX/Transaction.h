// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Transaction.generated.h"

USTRUCT()
struct FTransaction
{
	GENERATED_BODY()

	UPROPERTY()
	FString chainID;

	UPROPERTY()
	int nonce;

	UPROPERTY()
	FString value;

	UPROPERTY()
	FString receiver;

	UPROPERTY()
	FString sender;

	UPROPERTY()
	int gasPrice;

	UPROPERTY()
	int gasLimit;

	UPROPERTY()
	FString data;

	UPROPERTY()
	int version;
};
