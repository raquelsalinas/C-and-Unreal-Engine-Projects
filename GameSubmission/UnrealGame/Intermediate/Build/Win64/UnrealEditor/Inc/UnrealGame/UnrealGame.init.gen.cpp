// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealGame_init() {}
	UNREALGAME_API UFunction* Z_Construct_UDelegateFunction_UnrealGame_OnPickUp__DelegateSignature();
	UNREALGAME_API UFunction* Z_Construct_UDelegateFunction_UnrealGame_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UnrealGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UnrealGame()
	{
		if (!Z_Registration_Info_UPackage__Script_UnrealGame.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealGame_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealGame_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnrealGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFD6B7612,
				0x05D4C19C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UnrealGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UnrealGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UnrealGame(Z_Construct_UPackage__Script_UnrealGame, TEXT("/Script/UnrealGame"), Z_Registration_Info_UPackage__Script_UnrealGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFD6B7612, 0x05D4C19C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
