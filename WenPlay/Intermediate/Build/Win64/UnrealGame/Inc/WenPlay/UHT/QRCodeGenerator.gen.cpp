// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WenPlay/Private/QrCode/QRCodeGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQRCodeGenerator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WenPlay();
	WENPLAY_API UClass* Z_Construct_UClass_UQRCodeGenerator();
	WENPLAY_API UClass* Z_Construct_UClass_UQRCodeGenerator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UQRCodeGenerator::execUpdateQRCode)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_URI);
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQRCodeGenerator::UpdateQRCode(Z_Param_Out_URI,Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQRCodeGenerator::execGenerateQRCode)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_URI);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UQRCodeGenerator::GenerateQRCode(Z_Param_Out_URI);
		P_NATIVE_END;
	}
	void UQRCodeGenerator::StaticRegisterNativesUQRCodeGenerator()
	{
		UClass* Class = UQRCodeGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateQRCode", &UQRCodeGenerator::execGenerateQRCode },
			{ "UpdateQRCode", &UQRCodeGenerator::execUpdateQRCode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics
	{
		struct QRCodeGenerator_eventGenerateQRCode_Parms
		{
			FString URI;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URI_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URI;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::NewProp_URI_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::NewProp_URI = { "URI", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QRCodeGenerator_eventGenerateQRCode_Parms, URI), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::NewProp_URI_MetaData), Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::NewProp_URI_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QRCodeGenerator_eventGenerateQRCode_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::NewProp_URI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "QRCode" },
		{ "ModuleRelativePath", "Private/QrCode/QRCodeGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQRCodeGenerator, nullptr, "GenerateQRCode", nullptr, nullptr, Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::QRCodeGenerator_eventGenerateQRCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::QRCodeGenerator_eventGenerateQRCode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQRCodeGenerator_UpdateQRCode_Statics
	{
		struct QRCodeGenerator_eventUpdateQRCode_Parms
		{
			FString URI;
			UTexture2D* Texture;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URI_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URI;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQRCodeGenerator_UpdateQRCode_Statics::NewProp_URI_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQRCodeGenerator_UpdateQRCode_Statics::NewProp_URI = { "URI", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QRCodeGenerator_eventUpdateQRCode_Parms, URI), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQRCodeGenerator_UpdateQRCode_Statics::NewProp_URI_MetaData), Z_Construct_UFunction_UQRCodeGenerator_UpdateQRCode_Statics::NewProp_URI_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQRCodeGenerator_UpdateQRCode_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QRCodeGenerator_eventUpdateQRCode_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQRCodeGenerator_UpdateQRCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQRCodeGenerator_UpdateQRCode_Statics::NewProp_URI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQRCodeGenerator_UpdateQRCode_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQRCodeGenerator_UpdateQRCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "QRCode" },
		{ "ModuleRelativePath", "Private/QrCode/QRCodeGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQRCodeGenerator_UpdateQRCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQRCodeGenerator, nullptr, "UpdateQRCode", nullptr, nullptr, Z_Construct_UFunction_UQRCodeGenerator_UpdateQRCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQRCodeGenerator_UpdateQRCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQRCodeGenerator_UpdateQRCode_Statics::QRCodeGenerator_eventUpdateQRCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQRCodeGenerator_UpdateQRCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQRCodeGenerator_UpdateQRCode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQRCodeGenerator_UpdateQRCode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQRCodeGenerator_UpdateQRCode_Statics::QRCodeGenerator_eventUpdateQRCode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQRCodeGenerator_UpdateQRCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQRCodeGenerator_UpdateQRCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQRCodeGenerator);
	UClass* Z_Construct_UClass_UQRCodeGenerator_NoRegister()
	{
		return UQRCodeGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UQRCodeGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQRCodeGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WenPlay,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQRCodeGenerator_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UQRCodeGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQRCodeGenerator_GenerateQRCode, "GenerateQRCode" }, // 1798494763
		{ &Z_Construct_UFunction_UQRCodeGenerator_UpdateQRCode, "UpdateQRCode" }, // 2935142489
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQRCodeGenerator_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQRCodeGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QrCode/QRCodeGenerator.h" },
		{ "ModuleRelativePath", "Private/QrCode/QRCodeGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQRCodeGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQRCodeGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQRCodeGenerator_Statics::ClassParams = {
		&UQRCodeGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQRCodeGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UQRCodeGenerator_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UQRCodeGenerator()
	{
		if (!Z_Registration_Info_UClass_UQRCodeGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQRCodeGenerator.OuterSingleton, Z_Construct_UClass_UQRCodeGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQRCodeGenerator.OuterSingleton;
	}
	template<> WENPLAY_API UClass* StaticClass<UQRCodeGenerator>()
	{
		return UQRCodeGenerator::StaticClass();
	}
	UQRCodeGenerator::UQRCodeGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQRCodeGenerator);
	UQRCodeGenerator::~UQRCodeGenerator() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_QrCode_QRCodeGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_QrCode_QRCodeGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQRCodeGenerator, UQRCodeGenerator::StaticClass, TEXT("UQRCodeGenerator"), &Z_Registration_Info_UClass_UQRCodeGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQRCodeGenerator), 411352406U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_QrCode_QRCodeGenerator_h_3741613362(TEXT("/Script/WenPlay"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_QrCode_QRCodeGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Private_QrCode_QRCodeGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
