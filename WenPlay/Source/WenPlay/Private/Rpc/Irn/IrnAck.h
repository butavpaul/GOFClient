// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "WenPlayLog.h"

#include "JsonObjectConverter.h"

#include "Rpc/JsonSerializerFixup.h"

#include "IrnAck.generated.h"

USTRUCT()
struct FIrnAck
{
	GENERATED_BODY()

	FIrnAck() {}

	FIrnAck(int64 Id) 
		: id(Id)
	{
	}

	FString GetJson()
	{
		FString ObjectJson;

		if (!FJsonObjectConverter::UStructToJsonObjectString(FIrnAck::StaticStruct(),
			this, ObjectJson, 0, 0, 0, nullptr, false))
		{
			UE_LOG(LogWenPlay, Error, TEXT("FIrnAck::Can't convert into json"));
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
	bool result = true;
};
