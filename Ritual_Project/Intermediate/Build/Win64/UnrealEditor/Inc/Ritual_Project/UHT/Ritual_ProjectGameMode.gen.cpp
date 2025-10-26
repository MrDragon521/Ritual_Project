// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ritual_ProjectGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRitual_ProjectGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
RITUAL_PROJECT_API UClass* Z_Construct_UClass_ARitual_ProjectGameMode();
RITUAL_PROJECT_API UClass* Z_Construct_UClass_ARitual_ProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ritual_Project();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARitual_ProjectGameMode **************************************************
void ARitual_ProjectGameMode::StaticRegisterNativesARitual_ProjectGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARitual_ProjectGameMode;
UClass* ARitual_ProjectGameMode::GetPrivateStaticClass()
{
	using TClass = ARitual_ProjectGameMode;
	if (!Z_Registration_Info_UClass_ARitual_ProjectGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Ritual_ProjectGameMode"),
			Z_Registration_Info_UClass_ARitual_ProjectGameMode.InnerSingleton,
			StaticRegisterNativesARitual_ProjectGameMode,
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
	return Z_Registration_Info_UClass_ARitual_ProjectGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ARitual_ProjectGameMode_NoRegister()
{
	return ARitual_ProjectGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARitual_ProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Ritual_ProjectGameMode.h" },
		{ "ModuleRelativePath", "Ritual_ProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARitual_ProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARitual_ProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Ritual_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARitual_ProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARitual_ProjectGameMode_Statics::ClassParams = {
	&ARitual_ProjectGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARitual_ProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARitual_ProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARitual_ProjectGameMode()
{
	if (!Z_Registration_Info_UClass_ARitual_ProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARitual_ProjectGameMode.OuterSingleton, Z_Construct_UClass_ARitual_ProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARitual_ProjectGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARitual_ProjectGameMode);
ARitual_ProjectGameMode::~ARitual_ProjectGameMode() {}
// ********** End Class ARitual_ProjectGameMode ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectGameMode_h__Script_Ritual_Project_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARitual_ProjectGameMode, ARitual_ProjectGameMode::StaticClass, TEXT("ARitual_ProjectGameMode"), &Z_Registration_Info_UClass_ARitual_ProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARitual_ProjectGameMode), 2116517889U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectGameMode_h__Script_Ritual_Project_168758601(TEXT("/Script/Ritual_Project"),
	Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectGameMode_h__Script_Ritual_Project_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_Ritual_ProjectGameMode_h__Script_Ritual_Project_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
