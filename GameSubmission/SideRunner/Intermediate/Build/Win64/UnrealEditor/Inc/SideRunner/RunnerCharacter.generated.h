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
#ifdef SIDERUNNER_RunnerCharacter_generated_h
#error "RunnerCharacter.generated.h already included, missing '#pragma once' in RunnerCharacter.h"
#endif
#define SIDERUNNER_RunnerCharacter_generated_h

#define FID_SideRunner_Source_SideRunner_RunnerCharacter_h_10_SPARSE_DATA
#define FID_SideRunner_Source_SideRunner_RunnerCharacter_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_SideRunner_Source_SideRunner_RunnerCharacter_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_SideRunner_Source_SideRunner_RunnerCharacter_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARunnerCharacter(); \
	friend struct Z_Construct_UClass_ARunnerCharacter_Statics; \
public: \
	DECLARE_CLASS(ARunnerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideRunner"), NO_API) \
	DECLARE_SERIALIZER(ARunnerCharacter)


#define FID_SideRunner_Source_SideRunner_RunnerCharacter_h_10_INCLASS \
private: \
	static void StaticRegisterNativesARunnerCharacter(); \
	friend struct Z_Construct_UClass_ARunnerCharacter_Statics; \
public: \
	DECLARE_CLASS(ARunnerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideRunner"), NO_API) \
	DECLARE_SERIALIZER(ARunnerCharacter)


#define FID_SideRunner_Source_SideRunner_RunnerCharacter_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARunnerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunnerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunnerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunnerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunnerCharacter(ARunnerCharacter&&); \
	NO_API ARunnerCharacter(const ARunnerCharacter&); \
public:


#define FID_SideRunner_Source_SideRunner_RunnerCharacter_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunnerCharacter(ARunnerCharacter&&); \
	NO_API ARunnerCharacter(const ARunnerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunnerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunnerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARunnerCharacter)


#define FID_SideRunner_Source_SideRunner_RunnerCharacter_h_7_PROLOG
#define FID_SideRunner_Source_SideRunner_RunnerCharacter_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SideRunner_Source_SideRunner_RunnerCharacter_h_10_SPARSE_DATA \
	FID_SideRunner_Source_SideRunner_RunnerCharacter_h_10_RPC_WRAPPERS \
	FID_SideRunner_Source_SideRunner_RunnerCharacter_h_10_INCLASS \
	FID_SideRunner_Source_SideRunner_RunnerCharacter_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SideRunner_Source_SideRunner_RunnerCharacter_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SideRunner_Source_SideRunner_RunnerCharacter_h_10_SPARSE_DATA \
	FID_SideRunner_Source_SideRunner_RunnerCharacter_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SideRunner_Source_SideRunner_RunnerCharacter_h_10_INCLASS_NO_PURE_DECLS \
	FID_SideRunner_Source_SideRunner_RunnerCharacter_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDERUNNER_API UClass* StaticClass<class ARunnerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SideRunner_Source_SideRunner_RunnerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
