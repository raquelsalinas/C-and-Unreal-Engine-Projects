// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideRunner/Spikes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpikes() {}
// Cross Module References
	SIDERUNNER_API UClass* Z_Construct_UClass_ASpikes_NoRegister();
	SIDERUNNER_API UClass* Z_Construct_UClass_ASpikes();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SideRunner();
// End Cross Module References
	void ASpikes::StaticRegisterNativesASpikes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpikes);
	UClass* Z_Construct_UClass_ASpikes_NoRegister()
	{
		return ASpikes::StaticClass();
	}
	struct Z_Construct_UClass_ASpikes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpikes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SideRunner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpikes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Spikes.h" },
		{ "ModuleRelativePath", "Spikes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpikes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpikes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpikes_Statics::ClassParams = {
		&ASpikes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASpikes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpikes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpikes()
	{
		if (!Z_Registration_Info_UClass_ASpikes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpikes.OuterSingleton, Z_Construct_UClass_ASpikes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpikes.OuterSingleton;
	}
	template<> SIDERUNNER_API UClass* StaticClass<ASpikes>()
	{
		return ASpikes::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpikes);
	struct Z_CompiledInDeferFile_FID_SideRunner_Source_SideRunner_Spikes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideRunner_Source_SideRunner_Spikes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpikes, ASpikes::StaticClass, TEXT("ASpikes"), &Z_Registration_Info_UClass_ASpikes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpikes), 1586900909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideRunner_Source_SideRunner_Spikes_h_2723406792(TEXT("/Script/SideRunner"),
		Z_CompiledInDeferFile_FID_SideRunner_Source_SideRunner_Spikes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideRunner_Source_SideRunner_Spikes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
