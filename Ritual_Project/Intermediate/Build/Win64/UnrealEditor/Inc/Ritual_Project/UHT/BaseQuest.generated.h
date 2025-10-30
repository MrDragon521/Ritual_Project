// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseQuest.h"

#ifdef RITUAL_PROJECT_BaseQuest_generated_h
#error "BaseQuest.generated.h already included, missing '#pragma once' in BaseQuest.h"
#endif
#define RITUAL_PROJECT_BaseQuest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ADefaultItem;

// ********** Begin ScriptStruct FObjective ********************************************************
#define FID_Ritual_Project_Source_Ritual_Project_BaseQuest_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FObjective_Statics; \
	RITUAL_PROJECT_API static class UScriptStruct* StaticStruct();


struct FObjective;
// ********** End ScriptStruct FObjective **********************************************************

// ********** Begin Class UBaseQuest ***************************************************************
#define FID_Ritual_Project_Source_Ritual_Project_BaseQuest_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFinishQuest); \
	DECLARE_FUNCTION(execFinishObjective); \
	DECLARE_FUNCTION(execUpdateObjective); \
	DECLARE_FUNCTION(execSetNumObejctives); \
	DECLARE_FUNCTION(execSetUpObjective); \
	DECLARE_FUNCTION(execSetQuestDetails);


RITUAL_PROJECT_API UClass* Z_Construct_UClass_UBaseQuest_NoRegister();

#define FID_Ritual_Project_Source_Ritual_Project_BaseQuest_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseQuest(); \
	friend struct Z_Construct_UClass_UBaseQuest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RITUAL_PROJECT_API UClass* Z_Construct_UClass_UBaseQuest_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseQuest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ritual_Project"), Z_Construct_UClass_UBaseQuest_NoRegister) \
	DECLARE_SERIALIZER(UBaseQuest)


#define FID_Ritual_Project_Source_Ritual_Project_BaseQuest_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseQuest(UBaseQuest&&) = delete; \
	UBaseQuest(const UBaseQuest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseQuest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseQuest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseQuest) \
	NO_API virtual ~UBaseQuest();


#define FID_Ritual_Project_Source_Ritual_Project_BaseQuest_h_44_PROLOG
#define FID_Ritual_Project_Source_Ritual_Project_BaseQuest_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ritual_Project_Source_Ritual_Project_BaseQuest_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Ritual_Project_Source_Ritual_Project_BaseQuest_h_47_INCLASS_NO_PURE_DECLS \
	FID_Ritual_Project_Source_Ritual_Project_BaseQuest_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseQuest;

// ********** End Class UBaseQuest *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ritual_Project_Source_Ritual_Project_BaseQuest_h

// ********** Begin Enum EClearCondition ***********************************************************
#define FOREACH_ENUM_ECLEARCONDITION(op) \
	op(EClearCondition::E_Defualt) \
	op(EClearCondition::E_Evidence) 

enum class EClearCondition : uint8;
template<> struct TIsUEnumClass<EClearCondition> { enum { Value = true }; };
template<> RITUAL_PROJECT_API UEnum* StaticEnum<EClearCondition>();
// ********** End Enum EClearCondition *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
