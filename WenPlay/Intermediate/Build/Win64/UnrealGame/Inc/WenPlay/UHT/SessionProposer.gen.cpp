// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WenPlay/Private/Rpc/SessionPropose/SessionProposer.h"
#include "WenPlay/Public/ClientMetadata.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSessionProposer() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WenPlay();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FClientMetadata();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FSessionProposer();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SessionProposer;
class UScriptStruct* FSessionProposer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SessionProposer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SessionProposer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionProposer, (UObject*)Z_Construct_UPackage__Script_WenPlay(), TEXT("SessionProposer"));
	}
	return Z_Registration_Info_UScriptStruct_SessionProposer.OuterSingleton;
}
template<> WENPLAY_API UScriptStruct* StaticStruct<FSessionProposer>()
{
	return FSessionProposer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSessionProposer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_publicKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_publicKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_metadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_metadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionProposer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Rpc/SessionPropose/SessionProposer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionProposer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionProposer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionProposer_Statics::NewProp_publicKey_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/SessionPropose/SessionProposer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionProposer_Statics::NewProp_publicKey = { "publicKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionProposer, publicKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionProposer_Statics::NewProp_publicKey_MetaData), Z_Construct_UScriptStruct_FSessionProposer_Statics::NewProp_publicKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionProposer_Statics::NewProp_metadata_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/SessionPropose/SessionProposer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSessionProposer_Statics::NewProp_metadata = { "metadata", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionProposer, metadata), Z_Construct_UScriptStruct_FClientMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionProposer_Statics::NewProp_metadata_MetaData), Z_Construct_UScriptStruct_FSessionProposer_Statics::NewProp_metadata_MetaData) }; // 4219281711
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSessionProposer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionProposer_Statics::NewProp_publicKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionProposer_Statics::NewProp_metadata,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionProposer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WenPlay,
		nullptr,
		&NewStructOps,
		"SessionProposer",
		Z_Construct_UScriptStruct_FSessionProposer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionProposer_Statics::PropPointers),
		sizeof(FSessionProposer),
		alignof(FSessionProposer),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionProposer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSessionProposer_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionProposer_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSessionProposer()
	{
		if (!Z_Registration_Info_UScriptStruct_SessionProposer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SessionProposer.InnerSingleton, Z_Construct_UScriptStruct_FSessionProposer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SessionProposer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionProposer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionProposer_h_Statics::ScriptStructInfo[] = {
		{ FSessionProposer::StaticStruct, Z_Construct_UScriptStruct_FSessionProposer_Statics::NewStructOps, TEXT("SessionProposer"), &Z_Registration_Info_UScriptStruct_SessionProposer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSessionProposer), 3297962643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionProposer_h_2201576400(TEXT("/Script/WenPlay"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionProposer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionProposer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
