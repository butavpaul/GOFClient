// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WenPlay/Private/Rpc/Irn/IrnSubscribe.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIrnSubscribe() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WenPlay();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FIrnSubscribe();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FJsonRpcRequest();
// End Cross Module References

static_assert(std::is_polymorphic<FIrnSubscribe>() == std::is_polymorphic<FJsonRpcRequest>(), "USTRUCT FIrnSubscribe cannot be polymorphic unless super FJsonRpcRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IrnSubscribe;
class UScriptStruct* FIrnSubscribe::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IrnSubscribe.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IrnSubscribe.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIrnSubscribe, (UObject*)Z_Construct_UPackage__Script_WenPlay(), TEXT("IrnSubscribe"));
	}
	return Z_Registration_Info_UScriptStruct_IrnSubscribe.OuterSingleton;
}
template<> WENPLAY_API UScriptStruct* StaticStruct<FIrnSubscribe>()
{
	return FIrnSubscribe::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIrnSubscribe_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_params_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_params_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_params_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIrnSubscribe_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Rpc/Irn/IrnSubscribe.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIrnSubscribe_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIrnSubscribe>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIrnSubscribe_Statics::NewProp_params_ValueProp = { "params", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIrnSubscribe_Statics::NewProp_params_Key_KeyProp = { "params_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIrnSubscribe_Statics::NewProp_params_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/Irn/IrnSubscribe.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FIrnSubscribe_Statics::NewProp_params = { "params", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIrnSubscribe, params), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrnSubscribe_Statics::NewProp_params_MetaData), Z_Construct_UScriptStruct_FIrnSubscribe_Statics::NewProp_params_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIrnSubscribe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIrnSubscribe_Statics::NewProp_params_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIrnSubscribe_Statics::NewProp_params_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIrnSubscribe_Statics::NewProp_params,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIrnSubscribe_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WenPlay,
		Z_Construct_UScriptStruct_FJsonRpcRequest,
		&NewStructOps,
		"IrnSubscribe",
		Z_Construct_UScriptStruct_FIrnSubscribe_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrnSubscribe_Statics::PropPointers),
		sizeof(FIrnSubscribe),
		alignof(FIrnSubscribe),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrnSubscribe_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIrnSubscribe_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrnSubscribe_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FIrnSubscribe()
	{
		if (!Z_Registration_Info_UScriptStruct_IrnSubscribe.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IrnSubscribe.InnerSingleton, Z_Construct_UScriptStruct_FIrnSubscribe_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IrnSubscribe.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Private_Rpc_Irn_IrnSubscribe_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Private_Rpc_Irn_IrnSubscribe_h_Statics::ScriptStructInfo[] = {
		{ FIrnSubscribe::StaticStruct, Z_Construct_UScriptStruct_FIrnSubscribe_Statics::NewStructOps, TEXT("IrnSubscribe"), &Z_Registration_Info_UScriptStruct_IrnSubscribe, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIrnSubscribe), 2509678049U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Private_Rpc_Irn_IrnSubscribe_h_882509694(TEXT("/Script/WenPlay"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Private_Rpc_Irn_IrnSubscribe_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Private_Rpc_Irn_IrnSubscribe_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
