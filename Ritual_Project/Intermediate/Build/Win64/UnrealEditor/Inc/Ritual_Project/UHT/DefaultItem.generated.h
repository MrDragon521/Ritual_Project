// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultItem.h"

#ifdef RITUAL_PROJECT_DefaultItem_generated_h
#error "DefaultItem.generated.h already included, missing '#pragma once' in DefaultItem.h"
#endif
#define RITUAL_PROJECT_DefaultItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADefaultItem *************************************************************
RITUAL_PROJECT_API UClass* Z_Construct_UClass_ADefaultItem_NoRegister();

#define FID_Ritual_Project_Source_Ritual_Project_DefaultItem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefaultItem(); \
	friend struct Z_Construct_UClass_ADefaultItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RITUAL_PROJECT_API UClass* Z_Construct_UClass_ADefaultItem_NoRegister(); \
public: \
	DECLARE_CLASS2(ADefaultItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ritual_Project"), Z_Construct_UClass_ADefaultItem_NoRegister) \
	DECLARE_SERIALIZER(ADefaultItem)


#define FID_Ritual_Project_Source_Ritual_Project_DefaultItem_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADefaultItem(ADefaultItem&&) = delete; \
	ADefaultItem(const ADefaultItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefaultItem) \
	NO_API virtual ~ADefaultItem();


#define FID_Ritual_Project_Source_Ritual_Project_DefaultItem_h_9_PROLOG
#define FID_Ritual_Project_Source_Ritual_Project_DefaultItem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ritual_Project_Source_Ritual_Project_DefaultItem_h_12_INCLASS_NO_PURE_DECLS \
	FID_Ritual_Project_Source_Ritual_Project_DefaultItem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADefaultItem;

// ********** End Class ADefaultItem ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ritual_Project_Source_Ritual_Project_DefaultItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
