// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ue5_starter/SikeActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSikeActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
UE5_STARTER_API UClass* Z_Construct_UClass_ASikeActor();
UE5_STARTER_API UClass* Z_Construct_UClass_ASikeActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ue5_starter();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASikeActor ***************************************************************
void ASikeActor::StaticRegisterNativesASikeActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASikeActor;
UClass* ASikeActor::GetPrivateStaticClass()
{
	using TClass = ASikeActor;
	if (!Z_Registration_Info_UClass_ASikeActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SikeActor"),
			Z_Registration_Info_UClass_ASikeActor.InnerSingleton,
			StaticRegisterNativesASikeActor,
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
	return Z_Registration_Info_UClass_ASikeActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ASikeActor_NoRegister()
{
	return ASikeActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASikeActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SikeActor.h" },
		{ "ModuleRelativePath", "SikeActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASikeActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASikeActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ue5_starter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASikeActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASikeActor_Statics::ClassParams = {
	&ASikeActor::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASikeActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASikeActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASikeActor()
{
	if (!Z_Registration_Info_UClass_ASikeActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASikeActor.OuterSingleton, Z_Construct_UClass_ASikeActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASikeActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASikeActor);
ASikeActor::~ASikeActor() {}
// ********** End Class ASikeActor *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_57669_workspace_project_try_ue5_starter_Source_ue5_starter_SikeActor_h__Script_ue5_starter_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASikeActor, ASikeActor::StaticClass, TEXT("ASikeActor"), &Z_Registration_Info_UClass_ASikeActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASikeActor), 2898779939U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_57669_workspace_project_try_ue5_starter_Source_ue5_starter_SikeActor_h__Script_ue5_starter_3785776306(TEXT("/Script/ue5_starter"),
	Z_CompiledInDeferFile_FID_Users_57669_workspace_project_try_ue5_starter_Source_ue5_starter_SikeActor_h__Script_ue5_starter_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_57669_workspace_project_try_ue5_starter_Source_ue5_starter_SikeActor_h__Script_ue5_starter_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
