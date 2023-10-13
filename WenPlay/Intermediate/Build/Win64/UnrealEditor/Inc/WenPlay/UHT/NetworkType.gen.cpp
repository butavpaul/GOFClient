// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WenPlay/Public/NetworkType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkType() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WenPlay();
	WENPLAY_API UEnum* Z_Construct_UEnum_WenPlay_ENetworkType();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENetworkType;
	static UEnum* ENetworkType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENetworkType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENetworkType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WenPlay_ENetworkType, (UObject*)Z_Construct_UPackage__Script_WenPlay(), TEXT("ENetworkType"));
		}
		return Z_Registration_Info_UEnum_ENetworkType.OuterSingleton;
	}
	template<> WENPLAY_API UEnum* StaticEnum<ENetworkType>()
	{
		return ENetworkType_StaticEnum();
	}
	struct Z_Construct_UEnum_WenPlay_ENetworkType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WenPlay_ENetworkType_Statics::Enumerators[] = {
		{ "DevNet", (int64)DevNet },
		{ "MainNet", (int64)MainNet },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WenPlay_ENetworkType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevNet.DisplayName", "DevNet" },
		{ "DevNet.Name", "DevNet" },
		{ "MainNet.DisplayName", "MainNet" },
		{ "MainNet.Name", "MainNet" },
		{ "ModuleRelativePath", "Public/NetworkType.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WenPlay_ENetworkType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WenPlay,
		nullptr,
		"ENetworkType",
		"ENetworkType",
		Z_Construct_UEnum_WenPlay_ENetworkType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WenPlay_ENetworkType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WenPlay_ENetworkType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WenPlay_ENetworkType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_WenPlay_ENetworkType()
	{
		if (!Z_Registration_Info_UEnum_ENetworkType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENetworkType.InnerSingleton, Z_Construct_UEnum_WenPlay_ENetworkType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENetworkType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_NetworkType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_NetworkType_h_Statics::EnumInfo[] = {
		{ ENetworkType_StaticEnum, TEXT("ENetworkType"), &Z_Registration_Info_UEnum_ENetworkType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1060841154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_NetworkType_h_3470908246(TEXT("/Script/WenPlay"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_NetworkType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_NetworkType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
