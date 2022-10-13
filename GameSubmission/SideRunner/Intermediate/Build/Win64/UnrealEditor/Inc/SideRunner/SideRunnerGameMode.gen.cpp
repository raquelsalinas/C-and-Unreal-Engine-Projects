// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideRunner/SideRunnerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSideRunnerGameMode() {}
// Cross Module References
	SIDERUNNER_API UClass* Z_Construct_UClass_ASideRunnerGameMode_NoRegister();
	SIDERUNNER_API UClass* Z_Construct_UClass_ASideRunnerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SideRunner();
// End Cross Module References
	void ASideRunnerGameMode::StaticRegisterNativesASideRunnerGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASideRunnerGameMode);
	UClass* Z_Construct_UClass_ASideRunnerGameMode_NoRegister()
	{
		return ASideRunnerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASideRunnerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASideRunnerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SideRunner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASideRunnerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SideRunnerGameMode.h" },
		{ "ModuleRelativePath", "SideRunnerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASideRunnerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASideRunnerGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASideRunnerGameMode_Statics::ClassParams = {
		&ASideRunnerGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASideRunnerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASideRunnerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASideRunnerGameMode()
	{
		if (!Z_Registration_Info_UClass_ASideRunnerGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASideRunnerGameMode.OuterSingleton, Z_Construct_UClass_ASideRunnerGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASideRunnerGameMode.OuterSingleton;
	}
	template<> SIDERUNNER_API UClass* StaticClass<ASideRunnerGameMode>()
	{
		return ASideRunnerGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASideRunnerGameMode);
	struct Z_CompiledInDeferFile_FID_SideRunner_Source_SideRunner_SideRunnerGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideRunner_Source_SideRunner_SideRunnerGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASideRunnerGameMode, ASideRunnerGameMode::StaticClass, TEXT("ASideRunnerGameMode"), &Z_Registration_Info_UClass_ASideRunnerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASideRunnerGameMode), 69422889U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideRunner_Source_SideRunner_SideRunnerGameMode_h_3470835307(TEXT("/Script/SideRunner"),
		Z_CompiledInDeferFile_FID_SideRunner_Source_SideRunner_SideRunnerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideRunner_Source_SideRunner_SideRunnerGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
