// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WenPlay/Private/Rpc/SessionPropose/SessionRequiredNamespaces.h"
#include "WenPlay/Private/Rpc/SessionPropose/SessionRequiredNamespaceParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSessionRequiredNamespaces() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WenPlay();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FSessionRequiredNamespaces();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SessionRequiredNamespaces;
class UScriptStruct* FSessionRequiredNamespaces::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SessionRequiredNamespaces.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SessionRequiredNamespaces.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionRequiredNamespaces, (UObject*)Z_Construct_UPackage__Script_WenPlay(), TEXT("SessionRequiredNamespaces"));
	}
	return Z_Registration_Info_UScriptStruct_SessionRequiredNamespaces.OuterSingleton;
}
template<> WENPLAY_API UScriptStruct* StaticStruct<FSessionRequiredNamespaces>()
{
	return FSessionRequiredNamespaces::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSessionRequiredNamespaces_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_elrond_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_elrond;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionRequiredNamespaces_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Rpc/SessionPropose/SessionRequiredNamespaces.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionRequiredNamespaces_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionRequiredNamespaces>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionRequiredNamespaces_Statics::NewProp_elrond_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/SessionPropose/SessionRequiredNamespaces.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSessionRequiredNamespaces_Statics::NewProp_elrond = { "elrond", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionRequiredNamespaces, elrond), Z_Construct_UScriptStruct_FSessionRequiredNamespaceParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionRequiredNamespaces_Statics::NewProp_elrond_MetaData), Z_Construct_UScriptStruct_FSessionRequiredNamespaces_Statics::NewProp_elrond_MetaData) }; // 1919389057
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSessionRequiredNamespaces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionRequiredNamespaces_Statics::NewProp_elrond,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionRequiredNamespaces_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WenPlay,
		nullptr,
		&NewStructOps,
		"SessionRequiredNamespaces",
		Z_Construct_UScriptStruct_FSessionRequiredNamespaces_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionRequiredNamespaces_Statics::PropPointers),
		sizeof(FSessionRequiredNamespaces),
		alignof(FSessionRequiredNamespaces),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionRequiredNamespaces_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSessionRequiredNamespaces_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionRequiredNamespaces_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSessionRequiredNamespaces()
	{
		if (!Z_Registration_Info_UScriptStruct_SessionRequiredNamespaces.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SessionRequiredNamespaces.InnerSingleton, Z_Construct_UScriptStruct_FSessionRequiredNamespaces_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SessionRequiredNamespaces.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionRequiredNamespaces_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionRequiredNamespaces_h_Statics::ScriptStructInfo[] = {
		{ FSessionRequiredNamespaces::StaticStruct, Z_Construct_UScriptStruct_FSessionRequiredNamespaces_Statics::NewStructOps, TEXT("SessionRequiredNamespaces"), &Z_Registration_Info_UScriptStruct_SessionRequiredNamespaces, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSessionRequiredNamespaces), 1606969716U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionRequiredNamespaces_h_943051418(TEXT("/Script/WenPlay"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionRequiredNamespaces_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionRequiredNamespaces_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
