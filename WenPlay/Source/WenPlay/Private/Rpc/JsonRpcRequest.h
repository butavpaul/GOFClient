// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Rpc/JsonSerializerFixup.h"

#include "JsonRpcRequest.generated.h"

USTRUCT() 
struct FJsonRpcRequest
{
	GENERATED_BODY()

	FJsonRpcRequest()
	{
		const FDateTime UnixEpoch = FDateTime(1970, 1, 1);
		
		int64 Date = (FDateTime::UtcNow() - UnixEpoch).GetTotalMilliseconds() * (10L * 10L * 10L);
		int64 Extra = (int64)FMath::Floor(FMath::FRandRange(0.0f, 1.0f) * (10.0 * 10.0 * 10.0));

		id = Date + Extra;
	}

	template<typename T>
	FString GetJson()
	{
		FString ObjectJson;

		if (!FJsonObjectConverter::UStructToJsonObjectString(T::StaticStruct(),
			this, ObjectJson, 0, 0, 0, nullptr, false))
		{
			UE_LOG(LogWenPlay, Error, TEXT("FJsonRpcRequest::Can't convert into json"));
			return "";
		}
		
		ObjectJson = JsonSerializer::ReplaceBrokenJsonFields(ObjectJson);

		return ObjectJson;
	}

	UPROPERTY()
	int64 id;

	UPROPERTY()
	FString jsonrpc = "2.0";

	UPROPERTY()
	FString method;
};
