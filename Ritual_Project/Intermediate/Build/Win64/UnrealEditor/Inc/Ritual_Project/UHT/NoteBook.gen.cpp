// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoteBook.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNoteBook() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
RITUAL_PROJECT_API UClass* Z_Construct_UClass_UNoteBook();
RITUAL_PROJECT_API UClass* Z_Construct_UClass_UNoteBook_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ritual_Project();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNoteBook Function setWidget *********************************************
struct Z_Construct_UFunction_UNoteBook_setWidget_Statics
{
	struct NoteBook_eventsetWidget_Parms
	{
		TSubclassOf<UUserWidget> _UIWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NoteBook.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp__UIWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNoteBook_setWidget_Statics::NewProp__UIWidget = { "_UIWidget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NoteBook_eventsetWidget_Parms, _UIWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNoteBook_setWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoteBook_setWidget_Statics::NewProp__UIWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNoteBook_setWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNoteBook_setWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNoteBook, nullptr, "setWidget", Z_Construct_UFunction_UNoteBook_setWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoteBook_setWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNoteBook_setWidget_Statics::NoteBook_eventsetWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNoteBook_setWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNoteBook_setWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNoteBook_setWidget_Statics::NoteBook_eventsetWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNoteBook_setWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNoteBook_setWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNoteBook::execsetWidget)
{
	P_GET_OBJECT(UClass,Z_Param__UIWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->setWidget(Z_Param__UIWidget);
	P_NATIVE_END;
}
// ********** End Class UNoteBook Function setWidget ***********************************************

// ********** Begin Class UNoteBook Function toggleNoteBook ****************************************
struct Z_Construct_UFunction_UNoteBook_toggleNoteBook_Statics
{
	struct NoteBook_eventtoggleNoteBook_Parms
	{
		TSubclassOf<UUserWidget> _UIWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NoteBook.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp__UIWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNoteBook_toggleNoteBook_Statics::NewProp__UIWidget = { "_UIWidget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NoteBook_eventtoggleNoteBook_Parms, _UIWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNoteBook_toggleNoteBook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoteBook_toggleNoteBook_Statics::NewProp__UIWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNoteBook_toggleNoteBook_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNoteBook_toggleNoteBook_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNoteBook, nullptr, "toggleNoteBook", Z_Construct_UFunction_UNoteBook_toggleNoteBook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoteBook_toggleNoteBook_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNoteBook_toggleNoteBook_Statics::NoteBook_eventtoggleNoteBook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNoteBook_toggleNoteBook_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNoteBook_toggleNoteBook_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNoteBook_toggleNoteBook_Statics::NoteBook_eventtoggleNoteBook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNoteBook_toggleNoteBook()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNoteBook_toggleNoteBook_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNoteBook::exectoggleNoteBook)
{
	P_GET_OBJECT(UClass,Z_Param__UIWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->toggleNoteBook(Z_Param__UIWidget);
	P_NATIVE_END;
}
// ********** End Class UNoteBook Function toggleNoteBook ******************************************

// ********** Begin Class UNoteBook ****************************************************************
void UNoteBook::StaticRegisterNativesUNoteBook()
{
	UClass* Class = UNoteBook::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "setWidget", &UNoteBook::execsetWidget },
		{ "toggleNoteBook", &UNoteBook::exectoggleNoteBook },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UNoteBook;
UClass* UNoteBook::GetPrivateStaticClass()
{
	using TClass = UNoteBook;
	if (!Z_Registration_Info_UClass_UNoteBook.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NoteBook"),
			Z_Registration_Info_UClass_UNoteBook.InnerSingleton,
			StaticRegisterNativesUNoteBook,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UNoteBook.InnerSingleton;
}
UClass* Z_Construct_UClass_UNoteBook_NoRegister()
{
	return UNoteBook::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNoteBook_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "NoteBook.h" },
		{ "ModuleRelativePath", "NoteBook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_noteBookClass_MetaData[] = {
		{ "Category", "NoteBook" },
		{ "ModuleRelativePath", "NoteBook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_noteBookHUD_MetaData[] = {
		{ "Category", "NoteBook" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NoteBook.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_noteBookClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_noteBookHUD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNoteBook_setWidget, "setWidget" }, // 2286290524
		{ &Z_Construct_UFunction_UNoteBook_toggleNoteBook, "toggleNoteBook" }, // 3591917276
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoteBook>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNoteBook_Statics::NewProp_noteBookClass = { "noteBookClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNoteBook, noteBookClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_noteBookClass_MetaData), NewProp_noteBookClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNoteBook_Statics::NewProp_noteBookHUD = { "noteBookHUD", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNoteBook, noteBookHUD), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_noteBookHUD_MetaData), NewProp_noteBookHUD_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNoteBook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoteBook_Statics::NewProp_noteBookClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoteBook_Statics::NewProp_noteBookHUD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNoteBook_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNoteBook_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Ritual_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNoteBook_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNoteBook_Statics::ClassParams = {
	&UNoteBook::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNoteBook_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNoteBook_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNoteBook_Statics::Class_MetaDataParams), Z_Construct_UClass_UNoteBook_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNoteBook()
{
	if (!Z_Registration_Info_UClass_UNoteBook.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNoteBook.OuterSingleton, Z_Construct_UClass_UNoteBook_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNoteBook.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNoteBook);
UNoteBook::~UNoteBook() {}
// ********** End Class UNoteBook ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_NoteBook_h__Script_Ritual_Project_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNoteBook, UNoteBook::StaticClass, TEXT("UNoteBook"), &Z_Registration_Info_UClass_UNoteBook, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNoteBook), 104860062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_NoteBook_h__Script_Ritual_Project_2940815660(TEXT("/Script/Ritual_Project"),
	Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_NoteBook_h__Script_Ritual_Project_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_NoteBook_h__Script_Ritual_Project_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
