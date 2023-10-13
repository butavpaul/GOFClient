// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"

#include "Engine/Texture2D.h"
#include "TextureResource.h"

#include "qrcodegen.hpp"

#include "QRCodeGenerator.generated.h"

UCLASS()
class WENPLAY_API UQRCodeGenerator : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "QRCode")
	static UTexture2D* GenerateQRCode(FString const& URI)
	{
		qrcodegen::QrCode Qr = qrcodegen::QrCode::encodeText(TCHAR_TO_UTF8(*URI), qrcodegen::QrCode::Ecc::MEDIUM);
		uint8 Size = Qr.getSize();

		UTexture2D* Texture = UTexture2D::CreateTransient(Size, Size, EPixelFormat::PF_B8G8R8A8, "QRCode");
		Texture->Filter = TextureFilter::TF_Nearest;

		UpdateQRCode(URI, Texture);

		return Texture;
	};

	UFUNCTION(BlueprintCallable, Category = "QRCode")
	static void UpdateQRCode(FString const& URI, UTexture2D* Texture)
	{
		qrcodegen::QrCode Qr = qrcodegen::QrCode::encodeText(TCHAR_TO_UTF8(*URI), qrcodegen::QrCode::Ecc::MEDIUM);
		uint8 Size = Qr.getSize();

		TArray<FColor> Pixels;
		Pixels.SetNumZeroed(Size * Size);

		for (uint8 x = 0; x < Size; x++)
		{
			for (uint8 y = 0; y < Size; y++)
			{
				Pixels[x + y * Size] = Qr.getModule(x, y) ? FColor::Black : FColor::White;
			}
		}

		void* Data = Texture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
		FMemory::Memcpy(Data, Pixels.GetData(), Size * Size * 4);
		Texture->GetPlatformData()->Mips[0].BulkData.Unlock();
		Texture->UpdateResource();
	};
};
