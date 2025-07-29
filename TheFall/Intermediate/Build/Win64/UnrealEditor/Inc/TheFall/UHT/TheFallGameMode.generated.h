// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TheFallGameMode.h"

#ifdef THEFALL_TheFallGameMode_generated_h
#error "TheFallGameMode.generated.h already included, missing '#pragma once' in TheFallGameMode.h"
#endif
#define THEFALL_TheFallGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATheFallGameMode *********************************************************
THEFALL_API UClass* Z_Construct_UClass_ATheFallGameMode_NoRegister();

#define FID_TheFall_Source_TheFall_TheFallGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATheFallGameMode(); \
	friend struct Z_Construct_UClass_ATheFallGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEFALL_API UClass* Z_Construct_UClass_ATheFallGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ATheFallGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheFall"), Z_Construct_UClass_ATheFallGameMode_NoRegister) \
	DECLARE_SERIALIZER(ATheFallGameMode)


#define FID_TheFall_Source_TheFall_TheFallGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATheFallGameMode(ATheFallGameMode&&) = delete; \
	ATheFallGameMode(const ATheFallGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheFallGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheFallGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ATheFallGameMode) \
	NO_API virtual ~ATheFallGameMode();


#define FID_TheFall_Source_TheFall_TheFallGameMode_h_12_PROLOG
#define FID_TheFall_Source_TheFall_TheFallGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TheFall_Source_TheFall_TheFallGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_TheFall_Source_TheFall_TheFallGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATheFallGameMode;

// ********** End Class ATheFallGameMode ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TheFall_Source_TheFall_TheFallGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
