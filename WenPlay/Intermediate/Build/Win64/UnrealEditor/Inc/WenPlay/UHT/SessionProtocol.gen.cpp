// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WenPlay/Private/Rpc/SessionPropose/SessionProtocol.h"
#include "WenPlay/Public/ClientMetadata.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSessionProtocol() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WenPlay();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FClientMetadata();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FSessionProtocol();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SessionProtocol;
class UScriptStruct* FSessionProtocol::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SessionProtocol.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SessionProtocol.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionProtocol, (UObject*)Z_Construct_UPackage__Script_WenPlay(), TEXT("SessionProtocol"));
	}
	return Z_Registration_Info_UScriptStruct_SessionProtocol.OuterSingleton;
}
template<> WENPLAY_API UScriptStruct* StaticStruct<FSessionProtocol>()
{
	return FSessionProtocol::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSessionProtocol_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionProtocol_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Rpc/SessionPropose/SessionProtocol.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionProtocol_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionProtocol>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionProtocol_Statics::NewProp_publicKey_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/SessionPropose/SessionProtocol.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionProtocol_Statics::NewProp_publicKey = { "publicKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionProtocol, publicKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionProtocol_Statics::NewProp_publicKey_MetaData), Z_Construct_UScriptStruct_FSessionProtocol_Statics::NewProp_publicKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionProtocol_Statics::NewProp_metadata_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/SessionPropose/SessionProtocol.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSessionProtocol_Statics::NewProp_metadata = { "metadata", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionProtocol, metadata), Z_Construct_UScriptStruct_FClientMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionProtocol_Statics::NewProp_metadata_MetaData), Z_Construct_UScriptStruct_FSessionProtocol_Statics::NewProp_metadata_MetaData) }; // 4219281711
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSessionProtocol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionProtocol_Statics::NewProp_publicKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionProtocol_Statics::NewProp_metadata,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionProtocol_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WenPlay,
		nullptr,
		&NewStructOps,
		"SessionProtocol",
		Z_Construct_UScriptStruct_FSessionProtocol_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionProtocol_Statics::PropPointers),
		sizeof(FSessionProtocol),
		alignof(FSessionProtocol),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionProtocol_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSessionProtocol_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionProtocol_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSessionProtocol()
	{
		if (!Z_Registration_Info_UScriptStruct_SessionProtocol.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SessionProtocol.InnerSingleton, Z_Construct_UScriptStruct_FSessionProtocol_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SessionProtocol.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionProtocol_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionProtocol_h_Statics::ScriptStructInfo[] = {
		{ FSessionProtocol::StaticStruct, Z_Construct_UScriptStruct_FSessionProtocol_Statics::NewStructOps, TEXT("SessionProtocol"), &Z_Registration_Info_UScriptStruct_SessionProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSessionProtocol), 4257669525U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionProtocol_h_3959429177(TEXT("/Script/WenPlay"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionProtocol_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Private_Rpc_SessionPropose_SessionProtocol_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
