// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDefaultItem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
RITUAL_PROJECT_API UClass* Z_Construct_UClass_ADefaultItem();
RITUAL_PROJECT_API UClass* Z_Construct_UClass_ADefaultItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ritual_Project();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADefaultItem *************************************************************
void ADefaultItem::StaticRegisterNativesADefaultItem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADefaultItem;
UClass* ADefaultItem::GetPrivateStaticClass()
{
	using TClass = ADefaultItem;
	if (!Z_Registration_Info_UClass_ADefaultItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DefaultItem"),
			Z_Registration_Info_UClass_ADefaultItem.InnerSingleton,
			StaticRegisterNativesADefaultItem,
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
	return Z_Registration_Info_UClass_ADefaultItem.InnerSingleton;
}
UClass* Z_Construct_UClass_ADefaultItem_NoRegister()
{
	return ADefaultItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADefaultItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DefaultItem.h" },
		{ "ModuleRelativePath", "DefaultItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADefaultItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Ritual_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefaultItem_Statics::ClassParams = {
	&ADefaultItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ADefaultItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADefaultItem()
{
	if (!Z_Registration_Info_UClass_ADefaultItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefaultItem.OuterSingleton, Z_Construct_UClass_ADefaultItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADefaultItem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultItem);
ADefaultItem::~ADefaultItem() {}
// ********** End Class ADefaultItem ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_DefaultItem_h__Script_Ritual_Project_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADefaultItem, ADefaultItem::StaticClass, TEXT("ADefaultItem"), &Z_Registration_Info_UClass_ADefaultItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefaultItem), 34422997U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_DefaultItem_h__Script_Ritual_Project_316632950(TEXT("/Script/Ritual_Project"),
	Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_DefaultItem_h__Script_Ritual_Project_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_DefaultItem_h__Script_Ritual_Project_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
