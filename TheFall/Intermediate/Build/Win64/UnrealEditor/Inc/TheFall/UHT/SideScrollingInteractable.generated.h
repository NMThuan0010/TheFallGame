// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_SideScrolling/SideScrollingInteractable.h"

#ifdef THEFALL_SideScrollingInteractable_generated_h
#error "SideScrollingInteractable.generated.h already included, missing '#pragma once' in SideScrollingInteractable.h"
#endif
#define THEFALL_SideScrollingInteractable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Interface USideScrollingInteractable *******************************************
#define FID_TheFall_Source_TheFall_Variant_SideScrolling_SideScrollingInteractable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInteraction);


THEFALL_API UClass* Z_Construct_UClass_USideScrollingInteractable_NoRegister();

#define FID_TheFall_Source_TheFall_Variant_SideScrolling_SideScrollingInteractable_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	THEFALL_API USideScrollingInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USideScrollingInteractable(USideScrollingInteractable&&) = delete; \
	USideScrollingInteractable(const USideScrollingInteractable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(THEFALL_API, USideScrollingInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USideScrollingInteractable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USideScrollingInteractable) \
	virtual ~USideScrollingInteractable() = default;


#define FID_TheFall_Source_TheFall_Variant_SideScrolling_SideScrollingInteractable_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSideScrollingInteractable(); \
	friend struct Z_Construct_UClass_USideScrollingInteractable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEFALL_API UClass* Z_Construct_UClass_USideScrollingInteractable_NoRegister(); \
public: \
	DECLARE_CLASS2(USideScrollingInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TheFall"), Z_Construct_UClass_USideScrollingInteractable_NoRegister) \
	DECLARE_SERIALIZER(USideScrollingInteractable)


#define FID_TheFall_Source_TheFall_Variant_SideScrolling_SideScrollingInteractable_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_TheFall_Source_TheFall_Variant_SideScrolling_SideScrollingInteractable_h_15_GENERATED_UINTERFACE_BODY() \
	FID_TheFall_Source_TheFall_Variant_SideScrolling_SideScrollingInteractable_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TheFall_Source_TheFall_Variant_SideScrolling_SideScrollingInteractable_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISideScrollingInteractable() {} \
public: \
	typedef USideScrollingInteractable UClassType; \
	typedef ISideScrollingInteractable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_TheFall_Source_TheFall_Variant_SideScrolling_SideScrollingInteractable_h_12_PROLOG
#define FID_TheFall_Source_TheFall_Variant_SideScrolling_SideScrollingInteractable_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TheFall_Source_TheFall_Variant_SideScrolling_SideScrollingInteractable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TheFall_Source_TheFall_Variant_SideScrolling_SideScrollingInteractable_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USideScrollingInteractable;

// ********** End Interface USideScrollingInteractable *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TheFall_Source_TheFall_Variant_SideScrolling_SideScrollingInteractable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
