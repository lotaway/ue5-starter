// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SikeCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSikeCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UE5_STARTER_API UClass* Z_Construct_UClass_ASikeCharacter();
UE5_STARTER_API UClass* Z_Construct_UClass_ASikeCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_ue5_starter();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASikeCharacter ***********************************************************
void ASikeCharacter::StaticRegisterNativesASikeCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASikeCharacter;
UClass* ASikeCharacter::GetPrivateStaticClass()
{
	using TClass = ASikeCharacter;
	if (!Z_Registration_Info_UClass_ASikeCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SikeCharacter"),
			Z_Registration_Info_UClass_ASikeCharacter.InnerSingleton,
			StaticRegisterNativesASikeCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ASikeCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ASikeCharacter_NoRegister()
{
	return ASikeCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASikeCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SikeCharacter.h" },
		{ "ModuleRelativePath", "Private/SikeCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASikeCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASikeCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ue5_starter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASikeCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASikeCharacter_Statics::ClassParams = {
	&ASikeCharacter::StaticClass,
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
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASikeCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASikeCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASikeCharacter()
{
	if (!Z_Registration_Info_UClass_ASikeCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASikeCharacter.OuterSingleton, Z_Construct_UClass_ASikeCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASikeCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASikeCharacter);
ASikeCharacter::~ASikeCharacter() {}
// ********** End Class ASikeCharacter *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_57669_workspace_project_try_ue5_starter_Source_ue5_starter_Private_SikeCharacter_h__Script_ue5_starter_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASikeCharacter, ASikeCharacter::StaticClass, TEXT("ASikeCharacter"), &Z_Registration_Info_UClass_ASikeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASikeCharacter), 1620956252U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_57669_workspace_project_try_ue5_starter_Source_ue5_starter_Private_SikeCharacter_h__Script_ue5_starter_1913122375(TEXT("/Script/ue5_starter"),
	Z_CompiledInDeferFile_FID_Users_57669_workspace_project_try_ue5_starter_Source_ue5_starter_Private_SikeCharacter_h__Script_ue5_starter_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_57669_workspace_project_try_ue5_starter_Source_ue5_starter_Private_SikeCharacter_h__Script_ue5_starter_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
