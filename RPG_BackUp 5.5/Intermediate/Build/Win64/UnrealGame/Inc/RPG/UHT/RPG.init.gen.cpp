// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPG_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RPG;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RPG()
	{
		if (!Z_Registration_Info_UPackage__Script_RPG.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RPG",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x1CAB9628,
				0xED6A93D4,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RPG.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RPG.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RPG(Z_Construct_UPackage__Script_RPG, TEXT("/Script/RPG"), Z_Registration_Info_UPackage__Script_RPG, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1CAB9628, 0xED6A93D4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
