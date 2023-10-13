// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WenPlay/Private/Rpc/SessionPropose/SessionProposeParams.h"
#include "WenPlay/Private/Rpc/SessionPropose/SessionProposer.h"
#include "WenPlay/Private/Rpc/SessionPropose/SessionProtocol.h"
#include "WenPlay/Private/Rpc/SessionPropose/SessionRequiredNamespaces.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSessionProposeParams() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WenPlay();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FSessionProposeParams();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FSessionProposer();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FSessionProtocol();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FSessionRequiredNamespaces();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SessionProposeParams;
class UScriptStruct* FSessionProposeParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SessionProposeParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SessionProposeParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionProposeParams, (UObject*)Z_Construct_UPackage__Script_WenPlay(), TEXT("SessionProposeParams"));
	}
	return Z_Registration_Info_UScriptStruct_SessionProposeParams.OuterSingleton;
}
template<> WENPLAY_API UScriptStruct* StaticStruct<FSessionProposeParams>()
{
	return FSessionProposeParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSessionProposeParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_requiredNamespaces_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_requiredNamespaces;
		static const UECodeGen_Private::FStructPropertyParams NewProp_relays_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_relays_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_relays;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_proposer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_proposer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionProposeParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Rpc/SessionPropose/SessionProposeParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionProposeParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionProposeParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionProposeParams_Statics::NewProp_requiredNamespaces_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/SessionPropose/SessionProposeParams.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSessionProposeParams_Statics::NewProp_requiredNamespaces = { "requiredNamespaces", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionProposeParams, requiredNamespaces), Z_Construct_UScriptStruct_FSessionRequiredNamespaces, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionProposeParams_Statics::NewProp_requiredNamespaces_MetaData), Z_Construct_UScriptStruct_FSessionProposeParams_Statics::NewProp_requiredNamespaces_MetaData) }; // 1606969716
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSessionProposeParams_Statics::NewProp_relays_Inner = { "relays", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSessionProtocol, METADATA_PARAMS(0, nullptr) }; // 4257669525
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionProposeParams_Statics::NewProp_relays_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/SessionPropose/SessionProposeParams.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSessionProposeParams_Statics::NewProp_relays = { "relays", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionProposeParams, relays), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionProposeParams_Statics::NewProp_relays_MetaData), Z_Construct_UScriptStruct_FSessionProposeParams_Statics::NewProp_relays_MetaData) }; // 4257669525
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionProposeParams_Statics::NewProp_proposer_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/SessionPropose/SessionProposeParams.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSessionProposeParams_Statics::NewProp_proposer = { "proposer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionProposeParams, proposer), Z_Construct_UScriptStruct_FSessionProposer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionProposeParams_Statics::NewProp_proposer_MetaData), Z_Construct_UScriptStruct_FSessionProposeParams_Statics::NewProp_proposer_MetaData) }; // 3297962643
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSessionProposeParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionProposeParams_Statics::NewProp_requiredNamespaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionProposeParams_Statics::NewProp_relays_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionProposeParams_Statics::NewProp_relays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionProposeParams_Statics::NewProp_proposer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionProposeParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WenPlay,
		nullptr,
		&NewStructOps,
		"SessionProposeParams",
		Z_Construct_UScriptStruct_FSessionProposeParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionProposeParams_Statics::PropPointers),
		sizeof(FSessionProposeParams),
		alignof(FSessionProposeParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionProposeParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSessionProposeParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionProposeParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSessionProposeParams()
	{
		if (!Z_Registration_Info_UScriptStruct_SessionProposeParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SessionProposeParams.InnerSingleton, Z_Construct_UScriptStruct_FSessionProposeParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SessionProposeParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionProposeParams_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionProposeParams_h_Statics::ScriptStructInfo[] = {
		{ FSessionProposeParams::StaticStruct, Z_Construct_UScriptStruct_FSessionProposeParams_Statics::NewStructOps, TEXT("SessionProposeParams"), &Z_Registration_Info_UScriptStruct_SessionProposeParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSessionProposeParams), 393108268U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionProposeParams_h_2323498470(TEXT("/Script/WenPlay"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionProposeParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionProposeParams_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
