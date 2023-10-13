// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WenPlay/Public/ClientMetadata.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientMetadata() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WenPlay();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FClientMetadata();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClientMetadata;
class UScriptStruct* FClientMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClientMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClientMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientMetadata, (UObject*)Z_Construct_UPackage__Script_WenPlay(), TEXT("ClientMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_ClientMetadata.OuterSingleton;
}
template<> WENPLAY_API UScriptStruct* StaticStruct<FClientMetadata>()
{
	return FClientMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClientMetadata_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_url;
		static const UECodeGen_Private::FStrPropertyParams NewProp_icons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_icons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_icons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientMetadata_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientMetadata>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientMetadata_Statics::NewProp_description_MetaData[] = {
		{ "Category", "Client Metadata" },
		{ "ModuleRelativePath", "Public/ClientMetadata.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientMetadata_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClientMetadata, description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientMetadata_Statics::NewProp_description_MetaData), Z_Construct_UScriptStruct_FClientMetadata_Statics::NewProp_description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientMetadata_Statics::NewProp_url_MetaData[] = {
		{ "Category", "Client Metadata" },
		{ "ModuleRelativePath", "Public/ClientMetadata.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientMetadata_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClientMetadata, url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientMetadata_Statics::NewProp_url_MetaData), Z_Construct_UScriptStruct_FClientMetadata_Statics::NewProp_url_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientMetadata_Statics::NewProp_icons_Inner = { "icons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientMetadata_Statics::NewProp_icons_MetaData[] = {
		{ "Category", "Client Metadata" },
		{ "ModuleRelativePath", "Public/ClientMetadata.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClientMetadata_Statics::NewProp_icons = { "icons", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClientMetadata, icons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientMetadata_Statics::NewProp_icons_MetaData), Z_Construct_UScriptStruct_FClientMetadata_Statics::NewProp_icons_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientMetadata_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Client Metadata" },
		{ "ModuleRelativePath", "Public/ClientMetadata.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientMetadata_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClientMetadata, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientMetadata_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FClientMetadata_Statics::NewProp_name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientMetadata_Statics::NewProp_description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientMetadata_Statics::NewProp_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientMetadata_Statics::NewProp_icons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientMetadata_Statics::NewProp_icons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientMetadata_Statics::NewProp_name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WenPlay,
		nullptr,
		&NewStructOps,
		"ClientMetadata",
		Z_Construct_UScriptStruct_FClientMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientMetadata_Statics::PropPointers),
		sizeof(FClientMetadata),
		alignof(FClientMetadata),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClientMetadata_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientMetadata_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FClientMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_ClientMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClientMetadata.InnerSingleton, Z_Construct_UScriptStruct_FClientMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClientMetadata.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_ClientMetadata_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_ClientMetadata_h_Statics::ScriptStructInfo[] = {
		{ FClientMetadata::StaticStruct, Z_Construct_UScriptStruct_FClientMetadata_Statics::NewStructOps, TEXT("ClientMetadata"), &Z_Registration_Info_UScriptStruct_ClientMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClientMetadata), 4219281711U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_ClientMetadata_h_282442461(TEXT("/Script/WenPlay"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_ClientMetadata_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_ClientMetadata_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
