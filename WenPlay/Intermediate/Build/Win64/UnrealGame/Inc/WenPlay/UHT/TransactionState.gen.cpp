// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WenPlay/Public/MultiversX/TransactionState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransactionState() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WenPlay();
	WENPLAY_API UEnum* Z_Construct_UEnum_WenPlay_ETransactionStatus();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FTransactionState();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransactionState;
class UScriptStruct* FTransactionState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransactionState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransactionState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransactionState, (UObject*)Z_Construct_UPackage__Script_WenPlay(), TEXT("TransactionState"));
	}
	return Z_Registration_Info_UScriptStruct_TransactionState.OuterSingleton;
}
template<> WENPLAY_API UScriptStruct* StaticStruct<FTransactionState>()
{
	return FTransactionState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransactionState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_status_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_txHash_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_txHash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiversX/TransactionState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransactionState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransactionState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionState_Statics::NewProp_status_MetaData[] = {
		{ "Category", "MultiversX" },
		{ "ModuleRelativePath", "Public/MultiversX/TransactionState.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTransactionState_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransactionState, status), Z_Construct_UEnum_WenPlay_ETransactionStatus, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionState_Statics::NewProp_status_MetaData), Z_Construct_UScriptStruct_FTransactionState_Statics::NewProp_status_MetaData) }; // 953004470
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionState_Statics::NewProp_txHash_MetaData[] = {
		{ "Category", "MultiversX" },
		{ "ModuleRelativePath", "Public/MultiversX/TransactionState.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransactionState_Statics::NewProp_txHash = { "txHash", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransactionState, txHash), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionState_Statics::NewProp_txHash_MetaData), Z_Construct_UScriptStruct_FTransactionState_Statics::NewProp_txHash_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransactionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionState_Statics::NewProp_status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionState_Statics::NewProp_txHash,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransactionState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WenPlay,
		nullptr,
		&NewStructOps,
		"TransactionState",
		Z_Construct_UScriptStruct_FTransactionState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionState_Statics::PropPointers),
		sizeof(FTransactionState),
		alignof(FTransactionState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTransactionState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTransactionState()
	{
		if (!Z_Registration_Info_UScriptStruct_TransactionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransactionState.InnerSingleton, Z_Construct_UScriptStruct_FTransactionState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransactionState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Public_MultiversX_TransactionState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Public_MultiversX_TransactionState_h_Statics::ScriptStructInfo[] = {
		{ FTransactionState::StaticStruct, Z_Construct_UScriptStruct_FTransactionState_Statics::NewStructOps, TEXT("TransactionState"), &Z_Registration_Info_UScriptStruct_TransactionState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransactionState), 3170331623U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Public_MultiversX_TransactionState_h_1396751643(TEXT("/Script/WenPlay"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Public_MultiversX_TransactionState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Public_MultiversX_TransactionState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
