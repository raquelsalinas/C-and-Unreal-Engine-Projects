// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnotherGame/AnotherGameGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnotherGameGameModeBase() {}
// Cross Module References
	ANOTHERGAME_API UClass* Z_Construct_UClass_AAnotherGameGameModeBase_NoRegister();
	ANOTHERGAME_API UClass* Z_Construct_UClass_AAnotherGameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AnotherGame();
// End Cross Module References
	void AAnotherGameGameModeBase::StaticRegisterNativesAAnotherGameGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAnotherGameGameModeBase);
	UClass* Z_Construct_UClass_AAnotherGameGameModeBase_NoRegister()
	{
		return AAnotherGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAnotherGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAnotherGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnotherGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnotherGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AnotherGameGameModeBase.h" },
		{ "ModuleRelativePath", "AnotherGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAnotherGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnotherGameGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAnotherGameGameModeBase_Statics::ClassParams = {
		&AAnotherGameGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAnotherGameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAnotherGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAnotherGameGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AAnotherGameGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAnotherGameGameModeBase.OuterSingleton, Z_Construct_UClass_AAnotherGameGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAnotherGameGameModeBase.OuterSingleton;
	}
	template<> ANOTHERGAME_API UClass* StaticClass<AAnotherGameGameModeBase>()
	{
		return AAnotherGameGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAnotherGameGameModeBase);
	struct Z_CompiledInDeferFile_FID_AnotherGame_Source_AnotherGame_AnotherGameGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnotherGame_Source_AnotherGame_AnotherGameGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAnotherGameGameModeBase, AAnotherGameGameModeBase::StaticClass, TEXT("AAnotherGameGameModeBase"), &Z_Registration_Info_UClass_AAnotherGameGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAnotherGameGameModeBase), 990352098U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnotherGame_Source_AnotherGame_AnotherGameGameModeBase_h_629966926(TEXT("/Script/AnotherGame"),
		Z_CompiledInDeferFile_FID_AnotherGame_Source_AnotherGame_AnotherGameGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnotherGame_Source_AnotherGame_AnotherGameGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
