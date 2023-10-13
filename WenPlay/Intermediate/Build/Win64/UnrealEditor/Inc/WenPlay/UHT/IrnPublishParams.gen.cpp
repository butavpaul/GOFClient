// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WenPlay/Private/Rpc/Irn/IrnPublishParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIrnPublishParams() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WenPlay();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FIrnPublishParams();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IrnPublishParams;
class UScriptStruct* FIrnPublishParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IrnPublishParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IrnPublishParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIrnPublishParams, (UObject*)Z_Construct_UPackage__Script_WenPlay(), TEXT("IrnPublishParams"));
	}
	return Z_Registration_Info_UScriptStruct_IrnPublishParams.OuterSingleton;
}
template<> WENPLAY_API UScriptStruct* StaticStruct<FIrnPublishParams>()
{
	return FIrnPublishParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIrnPublishParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_topic_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_topic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ttl_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ttl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tag_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_prompt_MetaData[];
#endif
		static void NewProp_prompt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_prompt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIrnPublishParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Rpc/Irn/IrnPublishParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIrnPublishParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_topic_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/Irn/IrnPublishParams.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_topic = { "topic", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIrnPublishParams, topic), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_topic_MetaData), Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_topic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_message_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/Irn/IrnPublishParams.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIrnPublishParams, message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_message_MetaData), Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_message_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_ttl_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/Irn/IrnPublishParams.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_ttl = { "ttl", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIrnPublishParams, ttl), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_ttl_MetaData), Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_ttl_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_tag_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/Irn/IrnPublishParams.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIrnPublishParams, tag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_tag_MetaData), Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_tag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_prompt_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rpc/Irn/IrnPublishParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_prompt_SetBit(void* Obj)
	{
		((FIrnPublishParams*)Obj)->prompt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_prompt = { "prompt", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIrnPublishParams), &Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_prompt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_prompt_MetaData), Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_prompt_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIrnPublishParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_topic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_ttl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewProp_prompt,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIrnPublishParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WenPlay,
		nullptr,
		&NewStructOps,
		"IrnPublishParams",
		Z_Construct_UScriptStruct_FIrnPublishParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrnPublishParams_Statics::PropPointers),
		sizeof(FIrnPublishParams),
		alignof(FIrnPublishParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrnPublishParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIrnPublishParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrnPublishParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FIrnPublishParams()
	{
		if (!Z_Registration_Info_UScriptStruct_IrnPublishParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IrnPublishParams.InnerSingleton, Z_Construct_UScriptStruct_FIrnPublishParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IrnPublishParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Private_Rpc_Irn_IrnPublishParams_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Private_Rpc_Irn_IrnPublishParams_h_Statics::ScriptStructInfo[] = {
		{ FIrnPublishParams::StaticStruct, Z_Construct_UScriptStruct_FIrnPublishParams_Statics::NewStructOps, TEXT("IrnPublishParams"), &Z_Registration_Info_UScriptStruct_IrnPublishParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIrnPublishParams), 3796528784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Private_Rpc_Irn_IrnPublishParams_h_343348803(TEXT("/Script/WenPlay"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Private_Rpc_Irn_IrnPublishParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Private_Rpc_Irn_IrnPublishParams_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
