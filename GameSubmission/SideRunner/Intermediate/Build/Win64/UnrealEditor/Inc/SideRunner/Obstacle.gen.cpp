// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideRunner/Obstacle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstacle() {}
// Cross Module References
	SIDERUNNER_API UClass* Z_Construct_UClass_AObstacle_NoRegister();
	SIDERUNNER_API UClass* Z_Construct_UClass_AObstacle();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SideRunner();
// End Cross Module References
	void AObstacle::StaticRegisterNativesAObstacle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObstacle);
	UClass* Z_Construct_UClass_AObstacle_NoRegister()
	{
		return AObstacle::StaticClass();
	}
	struct Z_Construct_UClass_AObstacle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstacle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SideRunner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Obstacle.h" },
		{ "ModuleRelativePath", "Obstacle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstacle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstacle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AObstacle_Statics::ClassParams = {
		&AObstacle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObstacle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstacle()
	{
		if (!Z_Registration_Info_UClass_AObstacle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObstacle.OuterSingleton, Z_Construct_UClass_AObstacle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AObstacle.OuterSingleton;
	}
	template<> SIDERUNNER_API UClass* StaticClass<AObstacle>()
	{
		return AObstacle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstacle);
	struct Z_CompiledInDeferFile_FID_SideRunner_Source_SideRunner_Obstacle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideRunner_Source_SideRunner_Obstacle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AObstacle, AObstacle::StaticClass, TEXT("AObstacle"), &Z_Registration_Info_UClass_AObstacle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObstacle), 1370770942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideRunner_Source_SideRunner_Obstacle_h_179618991(TEXT("/Script/SideRunner"),
		Z_CompiledInDeferFile_FID_SideRunner_Source_SideRunner_Obstacle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideRunner_Source_SideRunner_Obstacle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
