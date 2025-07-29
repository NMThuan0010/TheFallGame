// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Combat/CombatAttacker.h"

#ifdef THEFALL_CombatAttacker_generated_h
#error "CombatAttacker.generated.h already included, missing '#pragma once' in CombatAttacker.h"
#endif
#define THEFALL_CombatAttacker_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UCombatAttacker ******************************************************
#define FID_TheFall_Source_TheFall_Variant_Combat_CombatAttacker_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckChargedAttack); \
	DECLARE_FUNCTION(execCheckCombo); \
	DECLARE_FUNCTION(execDoAttackTrace);


THEFALL_API UClass* Z_Construct_UClass_UCombatAttacker_NoRegister();

#define FID_TheFall_Source_TheFall_Variant_Combat_CombatAttacker_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	THEFALL_API UCombatAttacker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombatAttacker(UCombatAttacker&&) = delete; \
	UCombatAttacker(const UCombatAttacker&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(THEFALL_API, UCombatAttacker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatAttacker); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatAttacker) \
	virtual ~UCombatAttacker() = default;


#define FID_TheFall_Source_TheFall_Variant_Combat_CombatAttacker_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatAttacker(); \
	friend struct Z_Construct_UClass_UCombatAttacker_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEFALL_API UClass* Z_Construct_UClass_UCombatAttacker_NoRegister(); \
public: \
	DECLARE_CLASS2(UCombatAttacker, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TheFall"), Z_Construct_UClass_UCombatAttacker_NoRegister) \
	DECLARE_SERIALIZER(UCombatAttacker)


#define FID_TheFall_Source_TheFall_Variant_Combat_CombatAttacker_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_TheFall_Source_TheFall_Variant_Combat_CombatAttacker_h_16_GENERATED_UINTERFACE_BODY() \
	FID_TheFall_Source_TheFall_Variant_Combat_CombatAttacker_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TheFall_Source_TheFall_Variant_Combat_CombatAttacker_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatAttacker() {} \
public: \
	typedef UCombatAttacker UClassType; \
	typedef ICombatAttacker ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_TheFall_Source_TheFall_Variant_Combat_CombatAttacker_h_13_PROLOG
#define FID_TheFall_Source_TheFall_Variant_Combat_CombatAttacker_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TheFall_Source_TheFall_Variant_Combat_CombatAttacker_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TheFall_Source_TheFall_Variant_Combat_CombatAttacker_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombatAttacker;

// ********** End Interface UCombatAttacker ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TheFall_Source_TheFall_Variant_Combat_CombatAttacker_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
