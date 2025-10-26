// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ritual_ProjectCharacter.h"

#ifdef RITUAL_PROJECT_Ritual_ProjectCharacter_generated_h
#error "Ritual_ProjectCharacter.generated.h already included, missing '#pragma once' in Ritual_ProjectCharacter.h"
#endif
#define RITUAL_PROJECT_Ritual_ProjectCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARitual_ProjectCharacter *************************************************
#define FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


RITUAL_PROJECT_API UClass* Z_Construct_UClass_ARitual_ProjectCharacter_NoRegister();

#define FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARitual_ProjectCharacter(); \
	friend struct Z_Construct_UClass_ARitual_ProjectCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RITUAL_PROJECT_API UClass* Z_Construct_UClass_ARitual_ProjectCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ARitual_ProjectCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ritual_Project"), Z_Construct_UClass_ARitual_ProjectCharacter_NoRegister) \
	DECLARE_SERIALIZER(ARitual_ProjectCharacter)


#define FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARitual_ProjectCharacter(ARitual_ProjectCharacter&&) = delete; \
	ARitual_ProjectCharacter(const ARitual_ProjectCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARitual_ProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARitual_ProjectCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ARitual_ProjectCharacter) \
	NO_API virtual ~ARitual_ProjectCharacter();


#define FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectCharacter_h_21_PROLOG
#define FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARitual_ProjectCharacter;

// ********** End Class ARitual_ProjectCharacter ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
