// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef UNREALGAME_UnrealGameProjectile_generated_h
#error "UnrealGameProjectile.generated.h already included, missing '#pragma once' in UnrealGameProjectile.h"
#endif
#define UNREALGAME_UnrealGameProjectile_generated_h

#define FID_UnrealGame_Source_UnrealGame_UnrealGameProjectile_h_15_SPARSE_DATA
#define FID_UnrealGame_Source_UnrealGame_UnrealGameProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_UnrealGame_Source_UnrealGame_UnrealGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_UnrealGame_Source_UnrealGame_UnrealGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnrealGameProjectile(); \
	friend struct Z_Construct_UClass_AUnrealGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AUnrealGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealGame"), NO_API) \
	DECLARE_SERIALIZER(AUnrealGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_UnrealGame_Source_UnrealGame_UnrealGameProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAUnrealGameProjectile(); \
	friend struct Z_Construct_UClass_AUnrealGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AUnrealGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealGame"), NO_API) \
	DECLARE_SERIALIZER(AUnrealGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_UnrealGame_Source_UnrealGame_UnrealGameProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnrealGameProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnrealGameProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealGameProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealGameProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnrealGameProjectile(AUnrealGameProjectile&&); \
	NO_API AUnrealGameProjectile(const AUnrealGameProjectile&); \
public:


#define FID_UnrealGame_Source_UnrealGame_UnrealGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnrealGameProjectile(AUnrealGameProjectile&&); \
	NO_API AUnrealGameProjectile(const AUnrealGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealGameProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnrealGameProjectile)


#define FID_UnrealGame_Source_UnrealGame_UnrealGameProjectile_h_12_PROLOG
#define FID_UnrealGame_Source_UnrealGame_UnrealGameProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealGame_Source_UnrealGame_UnrealGameProjectile_h_15_SPARSE_DATA \
	FID_UnrealGame_Source_UnrealGame_UnrealGameProjectile_h_15_RPC_WRAPPERS \
	FID_UnrealGame_Source_UnrealGame_UnrealGameProjectile_h_15_INCLASS \
	FID_UnrealGame_Source_UnrealGame_UnrealGameProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealGame_Source_UnrealGame_UnrealGameProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealGame_Source_UnrealGame_UnrealGameProjectile_h_15_SPARSE_DATA \
	FID_UnrealGame_Source_UnrealGame_UnrealGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealGame_Source_UnrealGame_UnrealGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealGame_Source_UnrealGame_UnrealGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALGAME_API UClass* StaticClass<class AUnrealGameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealGame_Source_UnrealGame_UnrealGameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
