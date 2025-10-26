// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ritual_ProjectPlayerController.h"

#ifdef RITUAL_PROJECT_Ritual_ProjectPlayerController_generated_h
#error "Ritual_ProjectPlayerController.generated.h already included, missing '#pragma once' in Ritual_ProjectPlayerController.h"
#endif
#define RITUAL_PROJECT_Ritual_ProjectPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARitual_ProjectPlayerController ******************************************
RITUAL_PROJECT_API UClass* Z_Construct_UClass_ARitual_ProjectPlayerController_NoRegister();

#define FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARitual_ProjectPlayerController(); \
	friend struct Z_Construct_UClass_ARitual_ProjectPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RITUAL_PROJECT_API UClass* Z_Construct_UClass_ARitual_ProjectPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ARitual_ProjectPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ritual_Project"), Z_Construct_UClass_ARitual_ProjectPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ARitual_ProjectPlayerController)


#define FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectPlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARitual_ProjectPlayerController(ARitual_ProjectPlayerController&&) = delete; \
	ARitual_ProjectPlayerController(const ARitual_ProjectPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARitual_ProjectPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARitual_ProjectPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ARitual_ProjectPlayerController) \
	NO_API virtual ~ARitual_ProjectPlayerController();


#define FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectPlayerController_h_17_PROLOG
#define FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARitual_ProjectPlayerController;

// ********** End Class ARitual_ProjectPlayerController ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
