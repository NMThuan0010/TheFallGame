// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseClass/TFCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTFCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
THEFALL_API UClass* Z_Construct_UClass_ATFCharacter();
THEFALL_API UClass* Z_Construct_UClass_ATFCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheFall();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATFCharacter *************************************************************
void ATFCharacter::StaticRegisterNativesATFCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATFCharacter;
UClass* ATFCharacter::GetPrivateStaticClass()
{
	using TClass = ATFCharacter;
	if (!Z_Registration_Info_UClass_ATFCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TFCharacter"),
			Z_Registration_Info_UClass_ATFCharacter.InnerSingleton,
			StaticRegisterNativesATFCharacter,
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
	return Z_Registration_Info_UClass_ATFCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ATFCharacter_NoRegister()
{
	return ATFCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATFCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseClass/TFCharacter.h" },
		{ "ModuleRelativePath", "Public/BaseClass/TFCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATFCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATFCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TheFall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATFCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATFCharacter_Statics::ClassParams = {
	&ATFCharacter::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATFCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATFCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATFCharacter()
{
	if (!Z_Registration_Info_UClass_ATFCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATFCharacter.OuterSingleton, Z_Construct_UClass_ATFCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATFCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATFCharacter);
ATFCharacter::~ATFCharacter() {}
// ********** End Class ATFCharacter ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h__Script_TheFall_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATFCharacter, ATFCharacter::StaticClass, TEXT("ATFCharacter"), &Z_Registration_Info_UClass_ATFCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATFCharacter), 1817455658U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h__Script_TheFall_1320746873(TEXT("/Script/TheFall"),
	Z_CompiledInDeferFile_FID_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h__Script_TheFall_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h__Script_TheFall_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
