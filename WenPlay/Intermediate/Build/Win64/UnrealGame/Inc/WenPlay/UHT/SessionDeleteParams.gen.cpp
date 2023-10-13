// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WenPlay/Private/Rpc/SessionDelete/SessionDeleteParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSessionDeleteParams() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WenPlay();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FSessionDeleteParams();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SessionDeleteParams;
class UScriptStruct* FSessionDeleteParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SessionDeleteParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SessionDeleteParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionDeleteParams, (UObject*)Z_Construct_UPackage__Script_WenPlay(), TEXT("SessionDeleteParams"));
	}
	return Z_Registration_Info_UScriptStruct_SessionDeleteParams.OuterSingleton;
}
template<> WENPLAY_API UScriptStruct* StaticStruct<FSessionDeleteParams>()
{
	return FSessionDeleteParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSessionDeleteParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_code_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionDeleteParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Rpc/SessionDelete/SessionDeleteParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionDeleteParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionDeleteParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionDeleteParams_Statics::NewProp_code_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/SessionDelete/SessionDeleteParams.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSessionDeleteParams_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionDeleteParams, code), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionDeleteParams_Statics::NewProp_code_MetaData), Z_Construct_UScriptStruct_FSessionDeleteParams_Statics::NewProp_code_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionDeleteParams_Statics::NewProp_message_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/SessionDelete/SessionDeleteParams.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionDeleteParams_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionDeleteParams, message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionDeleteParams_Statics::NewProp_message_MetaData), Z_Construct_UScriptStruct_FSessionDeleteParams_Statics::NewProp_message_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSessionDeleteParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionDeleteParams_Statics::NewProp_code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionDeleteParams_Statics::NewProp_message,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionDeleteParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WenPlay,
		nullptr,
		&NewStructOps,
		"SessionDeleteParams",
		Z_Construct_UScriptStruct_FSessionDeleteParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionDeleteParams_Statics::PropPointers),
		sizeof(FSessionDeleteParams),
		alignof(FSessionDeleteParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionDeleteParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSessionDeleteParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionDeleteParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSessionDeleteParams()
	{
		if (!Z_Registration_Info_UScriptStruct_SessionDeleteParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SessionDeleteParams.InnerSingleton, Z_Construct_UScriptStruct_FSessionDeleteParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SessionDeleteParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionDelete_SessionDeleteParams_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionDelete_SessionDeleteParams_h_Statics::ScriptStructInfo[] = {
		{ FSessionDeleteParams::StaticStruct, Z_Construct_UScriptStruct_FSessionDeleteParams_Statics::NewStructOps, TEXT("SessionDeleteParams"), &Z_Registration_Info_UScriptStruct_SessionDeleteParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSessionDeleteParams), 2452748360U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionDelete_SessionDeleteParams_h_1127134282(TEXT("/Script/WenPlay"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionDelete_SessionDeleteParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionDelete_SessionDeleteParams_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
