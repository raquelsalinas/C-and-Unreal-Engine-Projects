// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherGame/Paddle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaddle() {}
// Cross Module References
	ANOTHERGAME_API UClass* Z_Construct_UClass_APaddle_NoRegister();
	ANOTHERGAME_API UClass* Z_Construct_UClass_APaddle();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_AnotherGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
// End Cross Module References
	void APaddle::StaticRegisterNativesAPaddle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APaddle);
	UClass* Z_Construct_UClass_APaddle_NoRegister()
	{
		return APaddle::StaticClass();
	}
	struct Z_Construct_UClass_APaddle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SM_Paddle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SM_Paddle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatingMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatingMovement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaddle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_AnotherGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddle_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Paddle.h" },
		{ "ModuleRelativePath", "Paddle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddle_Statics::NewProp_SM_Paddle_MetaData[] = {
		{ "Category", "Paddle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Paddle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaddle_Statics::NewProp_SM_Paddle = { "SM_Paddle", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaddle, SM_Paddle), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaddle_Statics::NewProp_SM_Paddle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::NewProp_SM_Paddle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddle_Statics::NewProp_FloatingMovement_MetaData[] = {
		{ "Category", "Paddle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Paddle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaddle_Statics::NewProp_FloatingMovement = { "FloatingMovement", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaddle, FloatingMovement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaddle_Statics::NewProp_FloatingMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::NewProp_FloatingMovement_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaddle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddle_Statics::NewProp_SM_Paddle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddle_Statics::NewProp_FloatingMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaddle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaddle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APaddle_Statics::ClassParams = {
		&APaddle::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APaddle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaddle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaddle()
	{
		if (!Z_Registration_Info_UClass_APaddle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APaddle.OuterSingleton, Z_Construct_UClass_APaddle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APaddle.OuterSingleton;
	}
	template<> ANOTHERGAME_API UClass* StaticClass<APaddle>()
	{
		return APaddle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaddle);
	struct Z_CompiledInDeferFile_FID_AnotherGame_Source_AnotherGame_Paddle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnotherGame_Source_AnotherGame_Paddle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APaddle, APaddle::StaticClass, TEXT("APaddle"), &Z_Registration_Info_UClass_APaddle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APaddle), 2212849732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnotherGame_Source_AnotherGame_Paddle_h_653976600(TEXT("/Script/AnotherGame"),
		Z_CompiledInDeferFile_FID_AnotherGame_Source_AnotherGame_Paddle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnotherGame_Source_AnotherGame_Paddle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
