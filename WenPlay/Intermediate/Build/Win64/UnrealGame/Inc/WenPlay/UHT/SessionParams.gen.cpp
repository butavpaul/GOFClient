// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WenPlay/Private/Rpc/SessionRequest/SessionParams.h"
#include "WenPlay/Private/Rpc/SessionRequest/SessionRequestParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSessionParams() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WenPlay();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FSessionParams();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FSessionRequestParams();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SessionParams;
class UScriptStruct* FSessionParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SessionParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SessionParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionParams, (UObject*)Z_Construct_UPackage__Script_WenPlay(), TEXT("SessionParams"));
	}
	return Z_Registration_Info_UScriptStruct_SessionParams.OuterSingleton;
}
template<> WENPLAY_API UScriptStruct* StaticStruct<FSessionParams>()
{
	return FSessionParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSessionParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_request_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_request;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chainId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_chainId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Rpc/SessionRequest/SessionParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionParams_Statics::NewProp_request_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/SessionRequest/SessionParams.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSessionParams_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionParams, request), Z_Construct_UScriptStruct_FSessionRequestParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionParams_Statics::NewProp_request_MetaData), Z_Construct_UScriptStruct_FSessionParams_Statics::NewProp_request_MetaData) }; // 1598732397
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionParams_Statics::NewProp_chainId_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/SessionRequest/SessionParams.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionParams_Statics::NewProp_chainId = { "chainId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionParams, chainId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionParams_Statics::NewProp_chainId_MetaData), Z_Construct_UScriptStruct_FSessionParams_Statics::NewProp_chainId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSessionParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionParams_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionParams_Statics::NewProp_chainId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WenPlay,
		nullptr,
		&NewStructOps,
		"SessionParams",
		Z_Construct_UScriptStruct_FSessionParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionParams_Statics::PropPointers),
		sizeof(FSessionParams),
		alignof(FSessionParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSessionParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSessionParams()
	{
		if (!Z_Registration_Info_UScriptStruct_SessionParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SessionParams.InnerSingleton, Z_Construct_UScriptStruct_FSessionParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SessionParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionRequest_SessionParams_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionRequest_SessionParams_h_Statics::ScriptStructInfo[] = {
		{ FSessionParams::StaticStruct, Z_Construct_UScriptStruct_FSessionParams_Statics::NewStructOps, TEXT("SessionParams"), &Z_Registration_Info_UScriptStruct_SessionParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSessionParams), 1947711611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionRequest_SessionParams_h_3365422591(TEXT("/Script/WenPlay"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionRequest_SessionParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionRequest_SessionParams_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
