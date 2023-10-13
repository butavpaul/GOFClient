// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WenPlay/Private/Rpc/JsonRpcRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonRpcRequest() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WenPlay();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FJsonRpcRequest();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JsonRpcRequest;
class UScriptStruct* FJsonRpcRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JsonRpcRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JsonRpcRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJsonRpcRequest, (UObject*)Z_Construct_UPackage__Script_WenPlay(), TEXT("JsonRpcRequest"));
	}
	return Z_Registration_Info_UScriptStruct_JsonRpcRequest.OuterSingleton;
}
template<> WENPLAY_API UScriptStruct* StaticStruct<FJsonRpcRequest>()
{
	return FJsonRpcRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJsonRpcRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_method_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_method;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Rpc/JsonRpcRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJsonRpcRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::NewProp_id_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/JsonRpcRequest.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJsonRpcRequest, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::NewProp_jsonrpc_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/JsonRpcRequest.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::NewProp_jsonrpc = { "jsonrpc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJsonRpcRequest, jsonrpc), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::NewProp_jsonrpc_MetaData), Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::NewProp_jsonrpc_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::NewProp_method_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/JsonRpcRequest.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::NewProp_method = { "method", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJsonRpcRequest, method), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::NewProp_method_MetaData), Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::NewProp_method_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::NewProp_jsonrpc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::NewProp_method,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WenPlay,
		nullptr,
		&NewStructOps,
		"JsonRpcRequest",
		Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::PropPointers),
		sizeof(FJsonRpcRequest),
		alignof(FJsonRpcRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FJsonRpcRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_JsonRpcRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JsonRpcRequest.InnerSingleton, Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JsonRpcRequest.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_JsonRpcRequest_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_JsonRpcRequest_h_Statics::ScriptStructInfo[] = {
		{ FJsonRpcRequest::StaticStruct, Z_Construct_UScriptStruct_FJsonRpcRequest_Statics::NewStructOps, TEXT("JsonRpcRequest"), &Z_Registration_Info_UScriptStruct_JsonRpcRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJsonRpcRequest), 3167007525U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_JsonRpcRequest_h_3276503603(TEXT("/Script/WenPlay"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_JsonRpcRequest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_Rpc_JsonRpcRequest_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
