// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALGAME_UnrealGameCharacter_generated_h
#error "UnrealGameCharacter.generated.h already included, missing '#pragma once' in UnrealGameCharacter.h"
#endif
#define UNREALGAME_UnrealGameCharacter_generated_h

#define FID_UnrealGame_Source_UnrealGame_UnrealGameCharacter_h_18_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_UnrealGame_Source_UnrealGame_UnrealGameCharacter_h_23_SPARSE_DATA
#define FID_UnrealGame_Source_UnrealGame_UnrealGameCharacter_h_23_RPC_WRAPPERS
#define FID_UnrealGame_Source_UnrealGame_UnrealGameCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UnrealGame_Source_UnrealGame_UnrealGameCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnrealGameCharacter(); \
	friend struct Z_Construct_UClass_AUnrealGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AUnrealGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealGame"), NO_API) \
	DECLARE_SERIALIZER(AUnrealGameCharacter)


#define FID_UnrealGame_Source_UnrealGame_UnrealGameCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAUnrealGameCharacter(); \
	friend struct Z_Construct_UClass_AUnrealGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AUnrealGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealGame"), NO_API) \
	DECLARE_SERIALIZER(AUnrealGameCharacter)


#define FID_UnrealGame_Source_UnrealGame_UnrealGameCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnrealGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnrealGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnrealGameCharacter(AUnrealGameCharacter&&); \
	NO_API AUnrealGameCharacter(const AUnrealGameCharacter&); \
public:


#define FID_UnrealGame_Source_UnrealGame_UnrealGameCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnrealGameCharacter(AUnrealGameCharacter&&); \
	NO_API AUnrealGameCharacter(const AUnrealGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnrealGameCharacter)


#define FID_UnrealGame_Source_UnrealGame_UnrealGameCharacter_h_20_PROLOG
#define FID_UnrealGame_Source_UnrealGame_UnrealGameCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealGame_Source_UnrealGame_UnrealGameCharacter_h_23_SPARSE_DATA \
	FID_UnrealGame_Source_UnrealGame_UnrealGameCharacter_h_23_RPC_WRAPPERS \
	FID_UnrealGame_Source_UnrealGame_UnrealGameCharacter_h_23_INCLASS \
	FID_UnrealGame_Source_UnrealGame_UnrealGameCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealGame_Source_UnrealGame_UnrealGameCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealGame_Source_UnrealGame_UnrealGameCharacter_h_23_SPARSE_DATA \
	FID_UnrealGame_Source_UnrealGame_UnrealGameCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealGame_Source_UnrealGame_UnrealGameCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_UnrealGame_Source_UnrealGame_UnrealGameCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALGAME_API UClass* StaticClass<class AUnrealGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealGame_Source_UnrealGame_UnrealGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
