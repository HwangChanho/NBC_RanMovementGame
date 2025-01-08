// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TESTD/MyActorCPP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorCPP() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
TESTD_API UClass* Z_Construct_UClass_AMyActorCPP();
TESTD_API UClass* Z_Construct_UClass_AMyActorCPP_NoRegister();
UPackage* Z_Construct_UPackage__Script_TESTD();
// End Cross Module References

// Begin Class AMyActorCPP
void AMyActorCPP::StaticRegisterNativesAMyActorCPP()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActorCPP);
UClass* Z_Construct_UClass_AMyActorCPP_NoRegister()
{
	return AMyActorCPP::StaticClass();
}
struct Z_Construct_UClass_AMyActorCPP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorCPP.h" },
		{ "ModuleRelativePath", "MyActorCPP.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorCPP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyActorCPP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TESTD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorCPP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActorCPP_Statics::ClassParams = {
	&AMyActorCPP::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorCPP_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActorCPP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActorCPP()
{
	if (!Z_Registration_Info_UClass_AMyActorCPP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActorCPP.OuterSingleton, Z_Construct_UClass_AMyActorCPP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActorCPP.OuterSingleton;
}
template<> TESTD_API UClass* StaticClass<AMyActorCPP>()
{
	return AMyActorCPP::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActorCPP);
AMyActorCPP::~AMyActorCPP() {}
// End Class AMyActorCPP

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TESTD_Source_TESTD_MyActorCPP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActorCPP, AMyActorCPP::StaticClass, TEXT("AMyActorCPP"), &Z_Registration_Info_UClass_AMyActorCPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActorCPP), 2505426953U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TESTD_Source_TESTD_MyActorCPP_h_2913920255(TEXT("/Script/TESTD"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TESTD_Source_TESTD_MyActorCPP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TESTD_Source_TESTD_MyActorCPP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
