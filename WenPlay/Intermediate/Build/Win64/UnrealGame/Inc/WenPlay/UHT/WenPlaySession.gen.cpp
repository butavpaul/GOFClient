// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WenPlay/Public/WenPlaySession.h"
#include "WenPlay/Public/ClientMetadata.h"
#include "WenPlay/Public/MultiversX/TransactionData.h"
#include "WenPlay/Public/MultiversX/TransactionState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWenPlaySession() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_WenPlay();
	WENPLAY_API UClass* Z_Construct_UClass_AWenPlaySession();
	WENPLAY_API UClass* Z_Construct_UClass_AWenPlaySession_NoRegister();
	WENPLAY_API UEnum* Z_Construct_UEnum_WenPlay_ENetworkType();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FClientMetadata();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FTransactionData();
	WENPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FTransactionState();
// End Cross Module References
	DEFINE_FUNCTION(AWenPlaySession::execCloseSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWenPlaySession::execGetTransactionState)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_TransactionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransactionState*)Z_Param__Result=P_THIS->GetTransactionState(Z_Param_Out_TransactionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWenPlaySession::execSignTransaction)
	{
		P_GET_STRUCT_REF(FTransactionData,Z_Param_Out_Transaction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->SignTransaction(Z_Param_Out_Transaction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWenPlaySession::execUpdateSessionURI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSessionURI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWenPlaySession::execCreateWenPlaySession)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_InProjectID);
		P_GET_STRUCT_REF(FClientMetadata,Z_Param_Out_InMetadata);
		P_GET_PROPERTY(FByteProperty,Z_Param_InNetworkType);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_InMainNetEndPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateWenPlaySession(Z_Param_Out_InProjectID,Z_Param_Out_InMetadata,ENetworkType(Z_Param_InNetworkType),Z_Param_Out_InMainNetEndPoint);
		P_NATIVE_END;
	}
	void AWenPlaySession::StaticRegisterNativesAWenPlaySession()
	{
		UClass* Class = AWenPlaySession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseSession", &AWenPlaySession::execCloseSession },
			{ "CreateWenPlaySession", &AWenPlaySession::execCreateWenPlaySession },
			{ "GetTransactionState", &AWenPlaySession::execGetTransactionState },
			{ "SignTransaction", &AWenPlaySession::execSignTransaction },
			{ "UpdateSessionURI", &AWenPlaySession::execUpdateSessionURI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWenPlaySession_CloseSession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWenPlaySession_CloseSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "WenPlaySession" },
		{ "ModuleRelativePath", "Public/WenPlaySession.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWenPlaySession_CloseSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWenPlaySession, nullptr, "CloseSession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWenPlaySession_CloseSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWenPlaySession_CloseSession_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AWenPlaySession_CloseSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWenPlaySession_CloseSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics
	{
		struct WenPlaySession_eventCreateWenPlaySession_Parms
		{
			FString InProjectID;
			FClientMetadata InMetadata;
			TEnumAsByte<ENetworkType> InNetworkType;
			FString InMainNetEndPoint;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InProjectID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InProjectID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InMetadata;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InNetworkType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMainNetEndPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InMainNetEndPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::NewProp_InProjectID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::NewProp_InProjectID = { "InProjectID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WenPlaySession_eventCreateWenPlaySession_Parms, InProjectID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::NewProp_InProjectID_MetaData), Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::NewProp_InProjectID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::NewProp_InMetadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::NewProp_InMetadata = { "InMetadata", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WenPlaySession_eventCreateWenPlaySession_Parms, InMetadata), Z_Construct_UScriptStruct_FClientMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::NewProp_InMetadata_MetaData), Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::NewProp_InMetadata_MetaData) }; // 4219281711
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::NewProp_InNetworkType = { "InNetworkType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WenPlaySession_eventCreateWenPlaySession_Parms, InNetworkType), Z_Construct_UEnum_WenPlay_ENetworkType, METADATA_PARAMS(0, nullptr) }; // 1060841154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::NewProp_InMainNetEndPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::NewProp_InMainNetEndPoint = { "InMainNetEndPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WenPlaySession_eventCreateWenPlaySession_Parms, InMainNetEndPoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::NewProp_InMainNetEndPoint_MetaData), Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::NewProp_InMainNetEndPoint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::NewProp_InProjectID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::NewProp_InMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::NewProp_InNetworkType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::NewProp_InMainNetEndPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::Function_MetaDataParams[] = {
		{ "Category", "WenPlaySession" },
		{ "ModuleRelativePath", "Public/WenPlaySession.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWenPlaySession, nullptr, "CreateWenPlaySession", nullptr, nullptr, Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::WenPlaySession_eventCreateWenPlaySession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::WenPlaySession_eventCreateWenPlaySession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWenPlaySession_GetTransactionState_Statics
	{
		struct WenPlaySession_eventGetTransactionState_Parms
		{
			FString TransactionId;
			FTransactionState ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TransactionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWenPlaySession_GetTransactionState_Statics::NewProp_TransactionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWenPlaySession_GetTransactionState_Statics::NewProp_TransactionId = { "TransactionId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WenPlaySession_eventGetTransactionState_Parms, TransactionId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWenPlaySession_GetTransactionState_Statics::NewProp_TransactionId_MetaData), Z_Construct_UFunction_AWenPlaySession_GetTransactionState_Statics::NewProp_TransactionId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWenPlaySession_GetTransactionState_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "TransactionState" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWenPlaySession_GetTransactionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WenPlaySession_eventGetTransactionState_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransactionState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWenPlaySession_GetTransactionState_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AWenPlaySession_GetTransactionState_Statics::NewProp_ReturnValue_MetaData) }; // 3170331623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWenPlaySession_GetTransactionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWenPlaySession_GetTransactionState_Statics::NewProp_TransactionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWenPlaySession_GetTransactionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWenPlaySession_GetTransactionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "WenPlaySession" },
		{ "ModuleRelativePath", "Public/WenPlaySession.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWenPlaySession_GetTransactionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWenPlaySession, nullptr, "GetTransactionState", nullptr, nullptr, Z_Construct_UFunction_AWenPlaySession_GetTransactionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWenPlaySession_GetTransactionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWenPlaySession_GetTransactionState_Statics::WenPlaySession_eventGetTransactionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWenPlaySession_GetTransactionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWenPlaySession_GetTransactionState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWenPlaySession_GetTransactionState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWenPlaySession_GetTransactionState_Statics::WenPlaySession_eventGetTransactionState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWenPlaySession_GetTransactionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWenPlaySession_GetTransactionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWenPlaySession_SignTransaction_Statics
	{
		struct WenPlaySession_eventSignTransaction_Parms
		{
			FTransactionData Transaction;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transaction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transaction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWenPlaySession_SignTransaction_Statics::NewProp_Transaction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWenPlaySession_SignTransaction_Statics::NewProp_Transaction = { "Transaction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WenPlaySession_eventSignTransaction_Parms, Transaction), Z_Construct_UScriptStruct_FTransactionData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWenPlaySession_SignTransaction_Statics::NewProp_Transaction_MetaData), Z_Construct_UFunction_AWenPlaySession_SignTransaction_Statics::NewProp_Transaction_MetaData) }; // 359267757
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWenPlaySession_SignTransaction_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "TransactionID" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWenPlaySession_SignTransaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WenPlaySession_eventSignTransaction_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWenPlaySession_SignTransaction_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AWenPlaySession_SignTransaction_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWenPlaySession_SignTransaction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWenPlaySession_SignTransaction_Statics::NewProp_Transaction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWenPlaySession_SignTransaction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWenPlaySession_SignTransaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "WenPlaySession" },
		{ "ModuleRelativePath", "Public/WenPlaySession.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWenPlaySession_SignTransaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWenPlaySession, nullptr, "SignTransaction", nullptr, nullptr, Z_Construct_UFunction_AWenPlaySession_SignTransaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWenPlaySession_SignTransaction_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWenPlaySession_SignTransaction_Statics::WenPlaySession_eventSignTransaction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWenPlaySession_SignTransaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWenPlaySession_SignTransaction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWenPlaySession_SignTransaction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWenPlaySession_SignTransaction_Statics::WenPlaySession_eventSignTransaction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWenPlaySession_SignTransaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWenPlaySession_SignTransaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWenPlaySession_UpdateSessionURI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWenPlaySession_UpdateSessionURI_Statics::Function_MetaDataParams[] = {
		{ "Category", "WenPlaySession" },
		{ "ModuleRelativePath", "Public/WenPlaySession.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWenPlaySession_UpdateSessionURI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWenPlaySession, nullptr, "UpdateSessionURI", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWenPlaySession_UpdateSessionURI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWenPlaySession_UpdateSessionURI_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AWenPlaySession_UpdateSessionURI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWenPlaySession_UpdateSessionURI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWenPlaySession);
	UClass* Z_Construct_UClass_AWenPlaySession_NoRegister()
	{
		return AWenPlaySession::StaticClass();
	}
	struct Z_Construct_UClass_AWenPlaySession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URI_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Account_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Account;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connected_MetaData[];
#endif
		static void NewProp_Connected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Connected;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transactions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transactions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transactions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWenPlaySession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WenPlay,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWenPlaySession_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AWenPlaySession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWenPlaySession_CloseSession, "CloseSession" }, // 2652386283
		{ &Z_Construct_UFunction_AWenPlaySession_CreateWenPlaySession, "CreateWenPlaySession" }, // 3143955921
		{ &Z_Construct_UFunction_AWenPlaySession_GetTransactionState, "GetTransactionState" }, // 3693775357
		{ &Z_Construct_UFunction_AWenPlaySession_SignTransaction, "SignTransaction" }, // 2188292600
		{ &Z_Construct_UFunction_AWenPlaySession_UpdateSessionURI, "UpdateSessionURI" }, // 1792772047
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWenPlaySession_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWenPlaySession_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WenPlaySession.h" },
		{ "ModuleRelativePath", "Public/WenPlaySession.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWenPlaySession_Statics::NewProp_URI_MetaData[] = {
		{ "Category", "WenPlaySession" },
		{ "ModuleRelativePath", "Public/WenPlaySession.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AWenPlaySession_Statics::NewProp_URI = { "URI", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWenPlaySession, URI), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWenPlaySession_Statics::NewProp_URI_MetaData), Z_Construct_UClass_AWenPlaySession_Statics::NewProp_URI_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWenPlaySession_Statics::NewProp_Account_MetaData[] = {
		{ "Category", "WenPlaySession" },
		{ "ModuleRelativePath", "Public/WenPlaySession.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AWenPlaySession_Statics::NewProp_Account = { "Account", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWenPlaySession, Account), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWenPlaySession_Statics::NewProp_Account_MetaData), Z_Construct_UClass_AWenPlaySession_Statics::NewProp_Account_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWenPlaySession_Statics::NewProp_Connected_MetaData[] = {
		{ "Category", "WenPlaySession" },
		{ "ModuleRelativePath", "Public/WenPlaySession.h" },
	};
#endif
	void Z_Construct_UClass_AWenPlaySession_Statics::NewProp_Connected_SetBit(void* Obj)
	{
		((AWenPlaySession*)Obj)->Connected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWenPlaySession_Statics::NewProp_Connected = { "Connected", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWenPlaySession), &Z_Construct_UClass_AWenPlaySession_Statics::NewProp_Connected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWenPlaySession_Statics::NewProp_Connected_MetaData), Z_Construct_UClass_AWenPlaySession_Statics::NewProp_Connected_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWenPlaySession_Statics::NewProp_Transactions_Inner = { "Transactions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransactionState, METADATA_PARAMS(0, nullptr) }; // 3170331623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWenPlaySession_Statics::NewProp_Transactions_MetaData[] = {
		{ "Category", "WenPlaySession" },
		{ "ModuleRelativePath", "Public/WenPlaySession.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWenPlaySession_Statics::NewProp_Transactions = { "Transactions", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWenPlaySession, Transactions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWenPlaySession_Statics::NewProp_Transactions_MetaData), Z_Construct_UClass_AWenPlaySession_Statics::NewProp_Transactions_MetaData) }; // 3170331623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWenPlaySession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWenPlaySession_Statics::NewProp_URI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWenPlaySession_Statics::NewProp_Account,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWenPlaySession_Statics::NewProp_Connected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWenPlaySession_Statics::NewProp_Transactions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWenPlaySession_Statics::NewProp_Transactions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWenPlaySession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWenPlaySession>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWenPlaySession_Statics::ClassParams = {
		&AWenPlaySession::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWenPlaySession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWenPlaySession_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWenPlaySession_Statics::Class_MetaDataParams), Z_Construct_UClass_AWenPlaySession_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWenPlaySession_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWenPlaySession()
	{
		if (!Z_Registration_Info_UClass_AWenPlaySession.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWenPlaySession.OuterSingleton, Z_Construct_UClass_AWenPlaySession_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWenPlaySession.OuterSingleton;
	}
	template<> WENPLAY_API UClass* StaticClass<AWenPlaySession>()
	{
		return AWenPlaySession::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWenPlaySession);
	AWenPlaySession::~AWenPlaySession() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Public_WenPlaySession_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Public_WenPlaySession_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWenPlaySession, AWenPlaySession::StaticClass, TEXT("AWenPlaySession"), &Z_Registration_Info_UClass_AWenPlaySession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWenPlaySession), 2993610747U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Public_WenPlaySession_h_3822752672(TEXT("/Script/WenPlay"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Public_WenPlaySession_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WenPlay_Source_WenPlay_Public_WenPlaySession_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
