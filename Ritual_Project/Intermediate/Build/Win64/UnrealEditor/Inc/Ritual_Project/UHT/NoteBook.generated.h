// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NoteBook.h"

#ifdef RITUAL_PROJECT_NoteBook_generated_h
#error "NoteBook.generated.h already included, missing '#pragma once' in NoteBook.h"
#endif
#define RITUAL_PROJECT_NoteBook_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UUserWidget;

// ********** Begin Class UNoteBook ****************************************************************
#define FID_Ritual_Project_Source_Ritual_Project_NoteBook_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(exectoggleNoteBook); \
	DECLARE_FUNCTION(execsetWidget);


RITUAL_PROJECT_API UClass* Z_Construct_UClass_UNoteBook_NoRegister();

#define FID_Ritual_Project_Source_Ritual_Project_NoteBook_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNoteBook(); \
	friend struct Z_Construct_UClass_UNoteBook_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RITUAL_PROJECT_API UClass* Z_Construct_UClass_UNoteBook_NoRegister(); \
public: \
	DECLARE_CLASS2(UNoteBook, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ritual_Project"), Z_Construct_UClass_UNoteBook_NoRegister) \
	DECLARE_SERIALIZER(UNoteBook)


#define FID_Ritual_Project_Source_Ritual_Project_NoteBook_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNoteBook(UNoteBook&&) = delete; \
	UNoteBook(const UNoteBook&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNoteBook); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNoteBook); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNoteBook) \
	NO_API virtual ~UNoteBook();


#define FID_Ritual_Project_Source_Ritual_Project_NoteBook_h_11_PROLOG
#define FID_Ritual_Project_Source_Ritual_Project_NoteBook_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ritual_Project_Source_Ritual_Project_NoteBook_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Ritual_Project_Source_Ritual_Project_NoteBook_h_14_INCLASS_NO_PURE_DECLS \
	FID_Ritual_Project_Source_Ritual_Project_NoteBook_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNoteBook;

// ********** End Class UNoteBook ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ritual_Project_Source_Ritual_Project_NoteBook_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
