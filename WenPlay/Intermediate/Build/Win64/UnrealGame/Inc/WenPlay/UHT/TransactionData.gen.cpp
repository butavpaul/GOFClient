// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WenPlay/Public/MultiversX/TransactionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransactionData() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WenPlay();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FTransactionData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransactionData;
class UScriptStruct* FTransactionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransactionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransactionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransactionData, (UObject*)Z_Construct_UPackage__Script_WenPlay(), TEXT("TransactionData"));
	}
	return Z_Registration_Info_UScriptStruct_TransactionData.OuterSingleton;
}
template<> WENPLAY_API UScriptStruct* StaticStruct<FTransactionData>()
{
	return FTransactionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransactionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nonce_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_nonce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_from_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_from;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_to_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_to;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amount_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gasPrice_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_gasPrice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gasLimit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_gasLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chainId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_chainId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_version_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_version;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiversX/TransactionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransactionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransactionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_nonce_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiversX/TransactionData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_nonce = { "nonce", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransactionData, nonce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_nonce_MetaData), Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_nonce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_from_MetaData[] = {
		{ "Category", "TransactionData" },
		{ "ModuleRelativePath", "Public/MultiversX/TransactionData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_from = { "from", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransactionData, from), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_from_MetaData), Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_from_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_to_MetaData[] = {
		{ "Category", "TransactionData" },
		{ "ModuleRelativePath", "Public/MultiversX/TransactionData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_to = { "to", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransactionData, to), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_to_MetaData), Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_to_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_amount_MetaData[] = {
		{ "Category", "TransactionData" },
		{ "ModuleRelativePath", "Public/MultiversX/TransactionData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransactionData, amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_amount_MetaData), Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_gasPrice_MetaData[] = {
		{ "Category", "TransactionData" },
		{ "ModuleRelativePath", "Public/MultiversX/TransactionData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_gasPrice = { "gasPrice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransactionData, gasPrice), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_gasPrice_MetaData), Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_gasPrice_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_gasLimit_MetaData[] = {
		{ "Category", "TransactionData" },
		{ "ModuleRelativePath", "Public/MultiversX/TransactionData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_gasLimit = { "gasLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransactionData, gasLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_gasLimit_MetaData), Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_gasLimit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_data_MetaData[] = {
		{ "Category", "TransactionData" },
		{ "ModuleRelativePath", "Public/MultiversX/TransactionData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransactionData, data), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_data_MetaData), Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_data_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_chainId_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiversX/TransactionData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_chainId = { "chainId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransactionData, chainId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_chainId_MetaData), Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_chainId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_version_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiversX/TransactionData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransactionData, version), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_version_MetaData), Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_version_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransactionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_nonce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_from,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_to,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_gasPrice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_gasLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_chainId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionData_Statics::NewProp_version,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransactionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WenPlay,
		nullptr,
		&NewStructOps,
		"TransactionData",
		Z_Construct_UScriptStruct_FTransactionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionData_Statics::PropPointers),
		sizeof(FTransactionData),
		alignof(FTransactionData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTransactionData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTransactionData()
	{
		if (!Z_Registration_Info_UScriptStruct_TransactionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransactionData.InnerSingleton, Z_Construct_UScriptStruct_FTransactionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransactionData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Public_MultiversX_TransactionData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Public_MultiversX_TransactionData_h_Statics::ScriptStructInfo[] = {
		{ FTransactionData::StaticStruct, Z_Construct_UScriptStruct_FTransactionData_Statics::NewStructOps, TEXT("TransactionData"), &Z_Registration_Info_UScriptStruct_TransactionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransactionData), 359267757U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Public_MultiversX_TransactionData_h_1226644766(TEXT("/Script/WenPlay"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Public_MultiversX_TransactionData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Public_MultiversX_TransactionData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
