// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnotherGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AnotherGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AnotherGame()
	{
		if (!Z_Registration_Info_UPackage__Script_AnotherGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AnotherGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x0F05BD12,
				0xFA6199B8,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AnotherGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AnotherGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AnotherGame(Z_Construct_UPackage__Script_AnotherGame, TEXT("/Script/AnotherGame"), Z_Registration_Info_UPackage__Script_AnotherGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0F05BD12, 0xFA6199B8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
