// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TheFallPlayerController.h"

#ifdef THEFALL_TheFallPlayerController_generated_h
#error "TheFallPlayerController.generated.h already included, missing '#pragma once' in TheFallPlayerController.h"
#endif
#define THEFALL_TheFallPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATheFallPlayerController *************************************************
THEFALL_API UClass* Z_Construct_UClass_ATheFallPlayerController_NoRegister();

#define FID_TheFall_Source_TheFall_TheFallPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATheFallPlayerController(); \
	friend struct Z_Construct_UClass_ATheFallPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEFALL_API UClass* Z_Construct_UClass_ATheFallPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ATheFallPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheFall"), Z_Construct_UClass_ATheFallPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ATheFallPlayerController)


#define FID_TheFall_Source_TheFall_TheFallPlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATheFallPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATheFallPlayerController(ATheFallPlayerController&&) = delete; \
	ATheFallPlayerController(const ATheFallPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheFallPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheFallPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATheFallPlayerController) \
	NO_API virtual ~ATheFallPlayerController();


#define FID_TheFall_Source_TheFall_TheFallPlayerController_h_15_PROLOG
#define FID_TheFall_Source_TheFall_TheFallPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TheFall_Source_TheFall_TheFallPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_TheFall_Source_TheFall_TheFallPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATheFallPlayerController;

// ********** End Class ATheFallPlayerController ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TheFall_Source_TheFall_TheFallPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
