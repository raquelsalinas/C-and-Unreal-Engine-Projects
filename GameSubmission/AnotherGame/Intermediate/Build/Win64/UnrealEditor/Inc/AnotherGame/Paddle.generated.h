// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANOTHERGAME_Paddle_generated_h
#error "Paddle.generated.h already included, missing '#pragma once' in Paddle.h"
#endif
#define ANOTHERGAME_Paddle_generated_h

#define FID_AnotherGame_Source_AnotherGame_Paddle_h_14_SPARSE_DATA
#define FID_AnotherGame_Source_AnotherGame_Paddle_h_14_RPC_WRAPPERS
#define FID_AnotherGame_Source_AnotherGame_Paddle_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_AnotherGame_Source_AnotherGame_Paddle_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaddle(); \
	friend struct Z_Construct_UClass_APaddle_Statics; \
public: \
	DECLARE_CLASS(APaddle, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnotherGame"), NO_API) \
	DECLARE_SERIALIZER(APaddle)


#define FID_AnotherGame_Source_AnotherGame_Paddle_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPaddle(); \
	friend struct Z_Construct_UClass_APaddle_Statics; \
public: \
	DECLARE_CLASS(APaddle, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnotherGame"), NO_API) \
	DECLARE_SERIALIZER(APaddle)


#define FID_AnotherGame_Source_AnotherGame_Paddle_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaddle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaddle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle(APaddle&&); \
	NO_API APaddle(const APaddle&); \
public:


#define FID_AnotherGame_Source_AnotherGame_Paddle_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle(APaddle&&); \
	NO_API APaddle(const APaddle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APaddle)


#define FID_AnotherGame_Source_AnotherGame_Paddle_h_11_PROLOG
#define FID_AnotherGame_Source_AnotherGame_Paddle_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnotherGame_Source_AnotherGame_Paddle_h_14_SPARSE_DATA \
	FID_AnotherGame_Source_AnotherGame_Paddle_h_14_RPC_WRAPPERS \
	FID_AnotherGame_Source_AnotherGame_Paddle_h_14_INCLASS \
	FID_AnotherGame_Source_AnotherGame_Paddle_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnotherGame_Source_AnotherGame_Paddle_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnotherGame_Source_AnotherGame_Paddle_h_14_SPARSE_DATA \
	FID_AnotherGame_Source_AnotherGame_Paddle_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnotherGame_Source_AnotherGame_Paddle_h_14_INCLASS_NO_PURE_DECLS \
	FID_AnotherGame_Source_AnotherGame_Paddle_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANOTHERGAME_API UClass* StaticClass<class APaddle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnotherGame_Source_AnotherGame_Paddle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
