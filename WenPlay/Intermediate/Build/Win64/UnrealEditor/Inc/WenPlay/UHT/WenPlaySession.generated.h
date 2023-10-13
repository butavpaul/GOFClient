// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WenPlaySession.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FClientMetadata;
struct FTransactionData;
struct FTransactionState;
#ifdef WENPLAY_WenPlaySession_generated_h
#error "WenPlaySession.generated.h already included, missing '#pragma once' in WenPlaySession.h"
#endif
#define WENPLAY_WenPlaySession_generated_h

#define FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_WenPlaySession_h_24_SPARSE_DATA
#define FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_WenPlaySession_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_WenPlaySession_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_WenPlaySession_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCloseSession); \
	DECLARE_FUNCTION(execGetTransactionState); \
	DECLARE_FUNCTION(execSignTransaction); \
	DECLARE_FUNCTION(execUpdateSessionURI); \
	DECLARE_FUNCTION(execCreateWenPlaySession);


#define FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_WenPlaySession_h_24_ACCESSORS
#define FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_WenPlaySession_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWenPlaySession(); \
	friend struct Z_Construct_UClass_AWenPlaySession_Statics; \
public: \
	DECLARE_CLASS(AWenPlaySession, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WenPlay"), NO_API) \
	DECLARE_SERIALIZER(AWenPlaySession)


#define FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_WenPlaySession_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWenPlaySession(AWenPlaySession&&); \
	NO_API AWenPlaySession(const AWenPlaySession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWenPlaySession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWenPlaySession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWenPlaySession) \
	NO_API virtual ~AWenPlaySession();


#define FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_WenPlaySession_h_20_PROLOG
#define FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_WenPlaySession_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_WenPlaySession_h_24_SPARSE_DATA \
	FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_WenPlaySession_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_WenPlaySession_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_WenPlaySession_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_WenPlaySession_h_24_ACCESSORS \
	FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_WenPlaySession_h_24_INCLASS_NO_PURE_DECLS \
	FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_WenPlaySession_h_24_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WENPLAY_API UClass* StaticClass<class AWenPlaySession>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GOF_GOF_UE5_3_1_Plugins_WenPlay_Source_WenPlay_Public_WenPlaySession_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
