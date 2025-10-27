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
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
RITUAL_PROJECT_API UClass* Z_Construct_UClass_UNoteBook();
RITUAL_PROJECT_API UClass* Z_Construct_UClass_UNoteBook_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ritual_Project();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNoteBook ****************************************************************
void UNoteBook::StaticRegisterNativesUNoteBook()
{
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_testVar_MetaData[] = {
		{ "Category", "NoteBook" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite)\n//TSubClassOf<UUserWidget> LobbyWidget;\n" },
#endif
		{ "ModuleRelativePath", "NoteBook.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\nTSubClassOf<UUserWidget> LobbyWidget;" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_testVar_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_testVar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoteBook>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNoteBook_Statics::NewProp_testVar_SetBit(void* Obj)
{
	((UNoteBook*)Obj)->testVar = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNoteBook_Statics::NewProp_testVar = { "testVar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNoteBook), &Z_Construct_UClass_UNoteBook_Statics::NewProp_testVar_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_testVar_MetaData), NewProp_testVar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNoteBook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoteBook_Statics::NewProp_testVar,
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
	nullptr,
	Z_Construct_UClass_UNoteBook_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ Z_Construct_UClass_UNoteBook, UNoteBook::StaticClass, TEXT("UNoteBook"), &Z_Registration_Info_UClass_UNoteBook, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNoteBook), 3361403557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_NoteBook_h__Script_Ritual_Project_3018812612(TEXT("/Script/Ritual_Project"),
	Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_NoteBook_h__Script_Ritual_Project_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_NoteBook_h__Script_Ritual_Project_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
