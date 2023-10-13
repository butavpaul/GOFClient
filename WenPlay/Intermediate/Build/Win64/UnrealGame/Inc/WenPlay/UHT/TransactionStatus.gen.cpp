// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WenPlay/Public/MultiversX/TransactionStatus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransactionStatus() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WenPlay();
	WENPLAY_API UEnum* Z_Construct_UEnum_WenPlay_ETransactionStatus();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransactionStatus;
	static UEnum* ETransactionStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETransactionStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETransactionStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WenPlay_ETransactionStatus, (UObject*)Z_Construct_UPackage__Script_WenPlay(), TEXT("ETransactionStatus"));
		}
		return Z_Registration_Info_UEnum_ETransactionStatus.OuterSingleton;
	}
	template<> WENPLAY_API UEnum* StaticEnum<ETransactionStatus>()
	{
		return ETransactionStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_WenPlay_ETransactionStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WenPlay_ETransactionStatus_Statics::Enumerators[] = {
		{ "None", (int64)None },
		{ "Pending", (int64)Pending },
		{ "Failed", (int64)Failed },
		{ "Successful", (int64)Successful },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WenPlay_ETransactionStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failed.DisplayName", "Failed" },
		{ "Failed.Name", "Failed" },
		{ "ModuleRelativePath", "Public/MultiversX/TransactionStatus.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "None" },
		{ "Pending.DisplayName", "Pending" },
		{ "Pending.Name", "Pending" },
		{ "Successful.DisplayName", "Successful" },
		{ "Successful.Name", "Successful" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WenPlay_ETransactionStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WenPlay,
		nullptr,
		"ETransactionStatus",
		"ETransactionStatus",
		Z_Construct_UEnum_WenPlay_ETransactionStatus_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WenPlay_ETransactionStatus_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WenPlay_ETransactionStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WenPlay_ETransactionStatus_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_WenPlay_ETransactionStatus()
	{
		if (!Z_Registration_Info_UEnum_ETransactionStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransactionStatus.InnerSingleton, Z_Construct_UEnum_WenPlay_ETransactionStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETransactionStatus.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Public_MultiversX_TransactionStatus_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Public_MultiversX_TransactionStatus_h_Statics::EnumInfo[] = {
		{ ETransactionStatus_StaticEnum, TEXT("ETransactionStatus"), &Z_Registration_Info_UEnum_ETransactionStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 953004470U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Public_MultiversX_TransactionStatus_h_651412874(TEXT("/Script/WenPlay"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Public_MultiversX_TransactionStatus_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Public_MultiversX_TransactionStatus_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
