// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WenPlay/Private/MultiversX/Transaction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransaction() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WenPlay();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FTransaction();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Transaction;
class UScriptStruct* FTransaction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Transaction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Transaction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransaction, (UObject*)Z_Construct_UPackage__Script_WenPlay(), TEXT("Transaction"));
	}
	return Z_Registration_Info_UScriptStruct_Transaction.OuterSingleton;
}
template<> WENPLAY_API UScriptStruct* StaticStruct<FTransaction>()
{
	return FTransaction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransaction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chainID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_chainID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nonce_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_nonce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_receiver_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_receiver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sender_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_sender;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_version_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_version;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransaction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MultiversX/Transaction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransaction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransaction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_chainID_MetaData[] = {
		{ "ModuleRelativePath", "Private/MultiversX/Transaction.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_chainID = { "chainID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransaction, chainID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_chainID_MetaData), Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_chainID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_nonce_MetaData[] = {
		{ "ModuleRelativePath", "Private/MultiversX/Transaction.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_nonce = { "nonce", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransaction, nonce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_nonce_MetaData), Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_nonce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_value_MetaData[] = {
		{ "ModuleRelativePath", "Private/MultiversX/Transaction.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransaction, value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_value_MetaData), Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_value_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_receiver_MetaData[] = {
		{ "ModuleRelativePath", "Private/MultiversX/Transaction.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_receiver = { "receiver", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransaction, receiver), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_receiver_MetaData), Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_receiver_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_sender_MetaData[] = {
		{ "ModuleRelativePath", "Private/MultiversX/Transaction.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_sender = { "sender", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransaction, sender), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_sender_MetaData), Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_sender_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_gasPrice_MetaData[] = {
		{ "ModuleRelativePath", "Private/MultiversX/Transaction.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_gasPrice = { "gasPrice", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransaction, gasPrice), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_gasPrice_MetaData), Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_gasPrice_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_gasLimit_MetaData[] = {
		{ "ModuleRelativePath", "Private/MultiversX/Transaction.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_gasLimit = { "gasLimit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransaction, gasLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_gasLimit_MetaData), Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_gasLimit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_data_MetaData[] = {
		{ "ModuleRelativePath", "Private/MultiversX/Transaction.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransaction, data), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_data_MetaData), Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_data_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_version_MetaData[] = {
		{ "ModuleRelativePath", "Private/MultiversX/Transaction.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransaction, version), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_version_MetaData), Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_version_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransaction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_chainID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_nonce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_receiver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_sender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_gasPrice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_gasLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransaction_Statics::NewProp_version,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransaction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WenPlay,
		nullptr,
		&NewStructOps,
		"Transaction",
		Z_Construct_UScriptStruct_FTransaction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransaction_Statics::PropPointers),
		sizeof(FTransaction),
		alignof(FTransaction),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransaction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTransaction_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransaction_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTransaction()
	{
		if (!Z_Registration_Info_UScriptStruct_Transaction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Transaction.InnerSingleton, Z_Construct_UScriptStruct_FTransaction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Transaction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_MultiversX_Transaction_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_MultiversX_Transaction_h_Statics::ScriptStructInfo[] = {
		{ FTransaction::StaticStruct, Z_Construct_UScriptStruct_FTransaction_Statics::NewStructOps, TEXT("Transaction"), &Z_Registration_Info_UScriptStruct_Transaction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransaction), 74805403U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_MultiversX_Transaction_h_1196703190(TEXT("/Script/WenPlay"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_MultiversX_Transaction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_MultiversX_Transaction_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
