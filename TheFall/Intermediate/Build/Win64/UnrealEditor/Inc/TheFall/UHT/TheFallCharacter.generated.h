// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TheFallCharacter.h"

#ifdef THEFALL_TheFallCharacter_generated_h
#error "TheFallCharacter.generated.h already included, missing '#pragma once' in TheFallCharacter.h"
#endif
#define THEFALL_TheFallCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATheFallCharacter ********************************************************
#define FID_TheFall_Source_TheFall_TheFallCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


THEFALL_API UClass* Z_Construct_UClass_ATheFallCharacter_NoRegister();

#define FID_TheFall_Source_TheFall_TheFallCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATheFallCharacter(); \
	friend struct Z_Construct_UClass_ATheFallCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEFALL_API UClass* Z_Construct_UClass_ATheFallCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ATheFallCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheFall"), Z_Construct_UClass_ATheFallCharacter_NoRegister) \
	DECLARE_SERIALIZER(ATheFallCharacter)


#define FID_TheFall_Source_TheFall_TheFallCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATheFallCharacter(ATheFallCharacter&&) = delete; \
	ATheFallCharacter(const ATheFallCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheFallCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheFallCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ATheFallCharacter) \
	NO_API virtual ~ATheFallCharacter();


#define FID_TheFall_Source_TheFall_TheFallCharacter_h_21_PROLOG
#define FID_TheFall_Source_TheFall_TheFallCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TheFall_Source_TheFall_TheFallCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TheFall_Source_TheFall_TheFallCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_TheFall_Source_TheFall_TheFallCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATheFallCharacter;

// ********** End Class ATheFallCharacter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TheFall_Source_TheFall_TheFallCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
