// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "TransactionSigned.generated.h"

USTRUCT()
struct FTransactionSigned
{
	GENERATED_BODY()

	UPROPERTY()
	int nonce;

	UPROPERTY()
	FString sender;

	UPROPERTY()
	FString receiver;

	UPROPERTY()
	FString value;

	UPROPERTY()
	int gasPrice;

	UPROPERTY()
	int gasLimit;

	UPROPERTY()
	FString data;

	UPROPERTY()
	FString chainID;

	UPROPERTY()
	int version;

	UPROPERTY()
	FString signature;
};
