// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WenPlay/Private/Rpc/SessionPropose/SessionRequiredNamespaceParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSessionRequiredNamespaceParams() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WenPlay();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SessionRequiredNamespaceParams;
class UScriptStruct* FSessionRequiredNamespaceParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SessionRequiredNamespaceParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SessionRequiredNamespaceParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams, (UObject*)Z_Construct_UPackage__Script_WenPlay(), TEXT("SessionRequiredNamespaceParams"));
	}
	return Z_Registration_Info_UScriptStruct_SessionRequiredNamespaceParams.OuterSingleton;
}
template<> WENPLAY_API UScriptStruct* StaticStruct<FSessionRequiredNamespaceParams>()
{
	return FSessionRequiredNamespaceParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_methods_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_methods_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_methods;
		static const UECodeGen_Private::FStrPropertyParams NewProp_chains_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chains_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_chains;
		static const UECodeGen_Private::FStrPropertyParams NewProp_events_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_events_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_events;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Rpc/SessionPropose/SessionRequiredNamespaceParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionRequiredNamespaceParams>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewProp_methods_Inner = { "methods", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewProp_methods_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/SessionPropose/SessionRequiredNamespaceParams.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewProp_methods = { "methods", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionRequiredNamespaceParams, methods), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewProp_methods_MetaData), Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewProp_methods_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewProp_chains_Inner = { "chains", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewProp_chains_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/SessionPropose/SessionRequiredNamespaceParams.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewProp_chains = { "chains", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionRequiredNamespaceParams, chains), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewProp_chains_MetaData), Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewProp_chains_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewProp_events_Inner = { "events", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewProp_events_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/SessionPropose/SessionRequiredNamespaceParams.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewProp_events = { "events", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionRequiredNamespaceParams, events), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewProp_events_MetaData), Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewProp_events_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewProp_methods_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewProp_methods,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewProp_chains_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewProp_chains,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewProp_events_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewProp_events,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WenPlay,
		nullptr,
		&NewStructOps,
		"SessionRequiredNamespaceParams",
		Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::PropPointers),
		sizeof(FSessionRequiredNamespaceParams),
		alignof(FSessionRequiredNamespaceParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams()
	{
		if (!Z_Registration_Info_UScriptStruct_SessionRequiredNamespaceParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SessionRequiredNamespaceParams.InnerSingleton, Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SessionRequiredNamespaceParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionRequiredNamespaceParams_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionRequiredNamespaceParams_h_Statics::ScriptStructInfo[] = {
		{ FSessionRequiredNamespaceParams::StaticStruct, Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams_Statics::NewStructOps, TEXT("SessionRequiredNamespaceParams"), &Z_Registration_Info_UScriptStruct_SessionRequiredNamespaceParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSessionRequiredNamespaceParams), 1919389057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionRequiredNamespaceParams_h_4076501918(TEXT("/Script/WenPlay"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionRequiredNamespaceParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionRequiredNamespaceParams_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
