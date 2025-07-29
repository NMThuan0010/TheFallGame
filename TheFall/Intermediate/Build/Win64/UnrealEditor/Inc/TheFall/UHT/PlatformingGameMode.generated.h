// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Platforming/PlatformingGameMode.h"

#ifdef THEFALL_PlatformingGameMode_generated_h
#error "PlatformingGameMode.generated.h already included, missing '#pragma once' in PlatformingGameMode.h"
#endif
#define THEFALL_PlatformingGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APlatformingGameMode *****************************************************
THEFALL_API UClass* Z_Construct_UClass_APlatformingGameMode_NoRegister();

#define FID_TheFall_Source_TheFall_Variant_Platforming_PlatformingGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlatformingGameMode(); \
	friend struct Z_Construct_UClass_APlatformingGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEFALL_API UClass* Z_Construct_UClass_APlatformingGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(APlatformingGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheFall"), Z_Construct_UClass_APlatformingGameMode_NoRegister) \
	DECLARE_SERIALIZER(APlatformingGameMode)


#define FID_TheFall_Source_TheFall_Variant_Platforming_PlatformingGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APlatformingGameMode(APlatformingGameMode&&) = delete; \
	APlatformingGameMode(const APlatformingGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformingGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformingGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlatformingGameMode) \
	NO_API virtual ~APlatformingGameMode();


#define FID_TheFall_Source_TheFall_Variant_Platforming_PlatformingGameMode_h_12_PROLOG
#define FID_TheFall_Source_TheFall_Variant_Platforming_PlatformingGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TheFall_Source_TheFall_Variant_Platforming_PlatformingGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_TheFall_Source_TheFall_Variant_Platforming_PlatformingGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APlatformingGameMode;

// ********** End Class APlatformingGameMode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TheFall_Source_TheFall_Variant_Platforming_PlatformingGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
