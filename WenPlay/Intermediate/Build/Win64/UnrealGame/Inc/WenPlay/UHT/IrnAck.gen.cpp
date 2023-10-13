// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WenPlay/Private/Rpc/Irn/IrnAck.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIrnAck() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WenPlay();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FIrnAck();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IrnAck;
class UScriptStruct* FIrnAck::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IrnAck.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IrnAck.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIrnAck, (UObject*)Z_Construct_UPackage__Script_WenPlay(), TEXT("IrnAck"));
	}
	return Z_Registration_Info_UScriptStruct_IrnAck.OuterSingleton;
}
template<> WENPLAY_API UScriptStruct* StaticStruct<FIrnAck>()
{
	return FIrnAck::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIrnAck_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jsonrpc_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonrpc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_result_MetaData[];
#endif
		static void NewProp_result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIrnAck_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Rpc/Irn/IrnAck.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIrnAck_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIrnAck>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIrnAck_Statics::NewProp_id_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/Irn/IrnAck.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FIrnAck_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIrnAck, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrnAck_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FIrnAck_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIrnAck_Statics::NewProp_jsonrpc_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/Irn/IrnAck.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIrnAck_Statics::NewProp_jsonrpc = { "jsonrpc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIrnAck, jsonrpc), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrnAck_Statics::NewProp_jsonrpc_MetaData), Z_Construct_UScriptStruct_FIrnAck_Statics::NewProp_jsonrpc_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIrnAck_Statics::NewProp_result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/Irn/IrnAck.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FIrnAck_Statics::NewProp_result_SetBit(void* Obj)
	{
		((FIrnAck*)Obj)->result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIrnAck_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIrnAck), &Z_Construct_UScriptStruct_FIrnAck_Statics::NewProp_result_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrnAck_Statics::NewProp_result_MetaData), Z_Construct_UScriptStruct_FIrnAck_Statics::NewProp_result_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIrnAck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIrnAck_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIrnAck_Statics::NewProp_jsonrpc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIrnAck_Statics::NewProp_result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIrnAck_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WenPlay,
		nullptr,
		&NewStructOps,
		"IrnAck",
		Z_Construct_UScriptStruct_FIrnAck_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrnAck_Statics::PropPointers),
		sizeof(FIrnAck),
		alignof(FIrnAck),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrnAck_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIrnAck_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrnAck_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FIrnAck()
	{
		if (!Z_Registration_Info_UScriptStruct_IrnAck.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IrnAck.InnerSingleton, Z_Construct_UScriptStruct_FIrnAck_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IrnAck.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_Irn_IrnAck_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_Irn_IrnAck_h_Statics::ScriptStructInfo[] = {
		{ FIrnAck::StaticStruct, Z_Construct_UScriptStruct_FIrnAck_Statics::NewStructOps, TEXT("IrnAck"), &Z_Registration_Info_UScriptStruct_IrnAck, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIrnAck), 3457947013U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_Irn_IrnAck_h_2481256670(TEXT("/Script/WenPlay"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_Irn_IrnAck_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_Irn_IrnAck_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
