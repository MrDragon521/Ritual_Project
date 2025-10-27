// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRitual_Project_init() {}
	RITUAL_PROJECT_API UFunction* Z_Construct_UDelegateFunction_Ritual_Project_BulletCountUpdatedDelegate__DelegateSignature();
	RITUAL_PROJECT_API UFunction* Z_Construct_UDelegateFunction_Ritual_Project_DamagedDelegate__DelegateSignature();
	RITUAL_PROJECT_API UFunction* Z_Construct_UDelegateFunction_Ritual_Project_PawnDeathDelegate__DelegateSignature();
	RITUAL_PROJECT_API UFunction* Z_Construct_UDelegateFunction_Ritual_Project_SprintStateChangedDelegate__DelegateSignature();
	RITUAL_PROJECT_API UFunction* Z_Construct_UDelegateFunction_Ritual_Project_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Ritual_Project;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Ritual_Project()
	{
		if (!Z_Registration_Info_UPackage__Script_Ritual_Project.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Ritual_Project_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Ritual_Project_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Ritual_Project_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Ritual_Project_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Ritual_Project_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Ritual_Project",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1F98C5A6,
				0xE119CD7E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Ritual_Project.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Ritual_Project.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Ritual_Project(Z_Construct_UPackage__Script_Ritual_Project, TEXT("/Script/Ritual_Project"), Z_Registration_Info_UPackage__Script_Ritual_Project, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1F98C5A6, 0xE119CD7E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
