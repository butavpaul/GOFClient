// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

namespace JsonSerializer
{
	FString ReplaceBrokenJsonFields(FString const& JsonObject)
	{
		FString ReturnJsonObject = JsonObject;

		// Unreal json converted makes field names case correction in packaged build. Fix them up.
		ReturnJsonObject = ReturnJsonObject.Replace(TEXT("\"iD\""), TEXT("\"id\""));
		ReturnJsonObject = ReturnJsonObject.Replace(TEXT("\"metaData\""), TEXT("\"metadata\""));
		ReturnJsonObject = ReturnJsonObject.Replace(TEXT("\"uRL\""), TEXT("\"url\""));

		return ReturnJsonObject;
	}
}
