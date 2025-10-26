// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ritual_ProjectGameMode.h"

#ifdef RITUAL_PROJECT_Ritual_ProjectGameMode_generated_h
#error "Ritual_ProjectGameMode.generated.h already included, missing '#pragma once' in Ritual_ProjectGameMode.h"
#endif
#define RITUAL_PROJECT_Ritual_ProjectGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARitual_ProjectGameMode **************************************************
RITUAL_PROJECT_API UClass* Z_Construct_UClass_ARitual_ProjectGameMode_NoRegister();

#define FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARitual_ProjectGameMode(); \
	friend struct Z_Construct_UClass_ARitual_ProjectGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RITUAL_PROJECT_API UClass* Z_Construct_UClass_ARitual_ProjectGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ARitual_ProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ritual_Project"), Z_Construct_UClass_ARitual_ProjectGameMode_NoRegister) \
	DECLARE_SERIALIZER(ARitual_ProjectGameMode)


#define FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARitual_ProjectGameMode(ARitual_ProjectGameMode&&) = delete; \
	ARitual_ProjectGameMode(const ARitual_ProjectGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARitual_ProjectGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARitual_ProjectGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ARitual_ProjectGameMode) \
	NO_API virtual ~ARitual_ProjectGameMode();


#define FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectGameMode_h_12_PROLOG
#define FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARitual_ProjectGameMode;

// ********** End Class ARitual_ProjectGameMode ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
