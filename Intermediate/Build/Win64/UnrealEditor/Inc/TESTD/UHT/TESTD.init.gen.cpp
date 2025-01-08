// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTESTD_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TESTD;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TESTD()
	{
		if (!Z_Registration_Info_UPackage__Script_TESTD.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TESTD",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x425EFAEE,
				0x0C644698,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TESTD.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TESTD.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TESTD(Z_Construct_UPackage__Script_TESTD, TEXT("/Script/TESTD"), Z_Registration_Info_UPackage__Script_TESTD, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x425EFAEE, 0x0C644698));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
