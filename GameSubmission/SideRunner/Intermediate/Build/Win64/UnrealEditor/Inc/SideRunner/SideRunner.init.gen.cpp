// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSideRunner_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SideRunner;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SideRunner()
	{
		if (!Z_Registration_Info_UPackage__Script_SideRunner.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SideRunner",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xFDD86F00,
				0x7F98A32B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SideRunner.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SideRunner.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SideRunner(Z_Construct_UPackage__Script_SideRunner, TEXT("/Script/SideRunner"), Z_Registration_Info_UPackage__Script_SideRunner, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFDD86F00, 0x7F98A32B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
