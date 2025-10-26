// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ritual_ProjectCameraManager.h"

#ifdef RITUAL_PROJECT_Ritual_ProjectCameraManager_generated_h
#error "Ritual_ProjectCameraManager.generated.h already included, missing '#pragma once' in Ritual_ProjectCameraManager.h"
#endif
#define RITUAL_PROJECT_Ritual_ProjectCameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARitual_ProjectCameraManager *********************************************
RITUAL_PROJECT_API UClass* Z_Construct_UClass_ARitual_ProjectCameraManager_NoRegister();

#define FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectCameraManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARitual_ProjectCameraManager(); \
	friend struct Z_Construct_UClass_ARitual_ProjectCameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RITUAL_PROJECT_API UClass* Z_Construct_UClass_ARitual_ProjectCameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ARitual_ProjectCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ritual_Project"), Z_Construct_UClass_ARitual_ProjectCameraManager_NoRegister) \
	DECLARE_SERIALIZER(ARitual_ProjectCameraManager)


#define FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectCameraManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARitual_ProjectCameraManager(ARitual_ProjectCameraManager&&) = delete; \
	ARitual_ProjectCameraManager(const ARitual_ProjectCameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARitual_ProjectCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARitual_ProjectCameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARitual_ProjectCameraManager) \
	NO_API virtual ~ARitual_ProjectCameraManager();


#define FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectCameraManager_h_13_PROLOG
#define FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectCameraManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectCameraManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectCameraManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARitual_ProjectCameraManager;

// ********** End Class ARitual_ProjectCameraManager ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectCameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
