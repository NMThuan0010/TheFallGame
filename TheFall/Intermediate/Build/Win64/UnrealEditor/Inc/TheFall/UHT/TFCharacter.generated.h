// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseClass/TFCharacter.h"

#ifdef THEFALL_TFCharacter_generated_h
#error "TFCharacter.generated.h already included, missing '#pragma once' in TFCharacter.h"
#endif
#define THEFALL_TFCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATFCharacter *************************************************************
THEFALL_API UClass* Z_Construct_UClass_ATFCharacter_NoRegister();

#define FID_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATFCharacter(); \
	friend struct Z_Construct_UClass_ATFCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEFALL_API UClass* Z_Construct_UClass_ATFCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ATFCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheFall"), Z_Construct_UClass_ATFCharacter_NoRegister) \
	DECLARE_SERIALIZER(ATFCharacter)


#define FID_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATFCharacter(ATFCharacter&&) = delete; \
	ATFCharacter(const ATFCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATFCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATFCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATFCharacter) \
	NO_API virtual ~ATFCharacter();


#define FID_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h_9_PROLOG
#define FID_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATFCharacter;

// ********** End Class ATFCharacter ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
