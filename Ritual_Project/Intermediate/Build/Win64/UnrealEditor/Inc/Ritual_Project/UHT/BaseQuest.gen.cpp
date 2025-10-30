// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseQuest.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBaseQuest() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
RITUAL_PROJECT_API UClass* Z_Construct_UClass_ADefaultItem_NoRegister();
RITUAL_PROJECT_API UClass* Z_Construct_UClass_UBaseQuest();
RITUAL_PROJECT_API UClass* Z_Construct_UClass_UBaseQuest_NoRegister();
RITUAL_PROJECT_API UEnum* Z_Construct_UEnum_Ritual_Project_EClearCondition();
RITUAL_PROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FObjective();
UPackage* Z_Construct_UPackage__Script_Ritual_Project();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EClearCondition ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClearCondition;
static UEnum* EClearCondition_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EClearCondition.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EClearCondition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Ritual_Project_EClearCondition, (UObject*)Z_Construct_UPackage__Script_Ritual_Project(), TEXT("EClearCondition"));
	}
	return Z_Registration_Info_UEnum_EClearCondition.OuterSingleton;
}
template<> RITUAL_PROJECT_API UEnum* StaticEnum<EClearCondition>()
{
	return EClearCondition_StaticEnum();
}
struct Z_Construct_UEnum_Ritual_Project_EClearCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E_Defualt.DisplayName", "DEFAULT" },
		{ "E_Defualt.Name", "EClearCondition::E_Defualt" },
		{ "E_Evidence.DisplayName", "EVIDENCE" },
		{ "E_Evidence.Name", "EClearCondition::E_Evidence" },
		{ "ModuleRelativePath", "BaseQuest.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EClearCondition::E_Defualt", (int64)EClearCondition::E_Defualt },
		{ "EClearCondition::E_Evidence", (int64)EClearCondition::E_Evidence },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Ritual_Project_EClearCondition_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Ritual_Project,
	nullptr,
	"EClearCondition",
	"EClearCondition",
	Z_Construct_UEnum_Ritual_Project_EClearCondition_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Ritual_Project_EClearCondition_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Ritual_Project_EClearCondition_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Ritual_Project_EClearCondition_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Ritual_Project_EClearCondition()
{
	if (!Z_Registration_Info_UEnum_EClearCondition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClearCondition.InnerSingleton, Z_Construct_UEnum_Ritual_Project_EClearCondition_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EClearCondition.InnerSingleton;
}
// ********** End Enum EClearCondition *************************************************************

// ********** Begin ScriptStruct FObjective ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FObjective;
class UScriptStruct* FObjective::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FObjective.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FObjective.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjective, (UObject*)Z_Construct_UPackage__Script_Ritual_Project(), TEXT("Objective"));
	}
	return Z_Registration_Info_UScriptStruct_FObjective.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FObjective_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "BaseQuest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_clearType_MetaData[] = {
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "BaseQuest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[] = {
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "BaseQuest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_description_MetaData[] = {
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "BaseQuest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_numRequired_MetaData[] = {
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "BaseQuest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_objectiveID_MetaData[] = {
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "BaseQuest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isComplete_MetaData[] = {
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "BaseQuest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_clearType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_clearType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_item;
	static const UECodeGen_Private::FStrPropertyParams NewProp_description;
	static const UECodeGen_Private::FIntPropertyParams NewProp_numRequired;
	static const UECodeGen_Private::FIntPropertyParams NewProp_objectiveID;
	static void NewProp_isComplete_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjective>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FObjective_Statics::NewProp_clearType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FObjective_Statics::NewProp_clearType = { "clearType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjective, clearType), Z_Construct_UEnum_Ritual_Project_EClearCondition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_clearType_MetaData), NewProp_clearType_MetaData) }; // 317873550
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FObjective_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjective, item), Z_Construct_UClass_UClass, Z_Construct_UClass_ADefaultItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_item_MetaData), NewProp_item_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FObjective_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjective, description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_description_MetaData), NewProp_description_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FObjective_Statics::NewProp_numRequired = { "numRequired", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjective, numRequired), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_numRequired_MetaData), NewProp_numRequired_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FObjective_Statics::NewProp_objectiveID = { "objectiveID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjective, objectiveID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_objectiveID_MetaData), NewProp_objectiveID_MetaData) };
void Z_Construct_UScriptStruct_FObjective_Statics::NewProp_isComplete_SetBit(void* Obj)
{
	((FObjective*)Obj)->isComplete = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FObjective_Statics::NewProp_isComplete = { "isComplete", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FObjective), &Z_Construct_UScriptStruct_FObjective_Statics::NewProp_isComplete_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isComplete_MetaData), NewProp_isComplete_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjective_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjective_Statics::NewProp_clearType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjective_Statics::NewProp_clearType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjective_Statics::NewProp_item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjective_Statics::NewProp_description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjective_Statics::NewProp_numRequired,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjective_Statics::NewProp_objectiveID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjective_Statics::NewProp_isComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjective_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjective_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Ritual_Project,
	nullptr,
	&NewStructOps,
	"Objective",
	Z_Construct_UScriptStruct_FObjective_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjective_Statics::PropPointers),
	sizeof(FObjective),
	alignof(FObjective),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjective_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FObjective_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FObjective()
{
	if (!Z_Registration_Info_UScriptStruct_FObjective.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FObjective.InnerSingleton, Z_Construct_UScriptStruct_FObjective_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FObjective.InnerSingleton;
}
// ********** End ScriptStruct FObjective **********************************************************

// ********** Begin Class UBaseQuest Function FinishObjective **************************************
struct Z_Construct_UFunction_UBaseQuest_FinishObjective_Statics
{
	struct BaseQuest_eventFinishObjective_Parms
	{
		int32 _objectiveNum;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseQuest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__objectiveNum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseQuest_FinishObjective_Statics::NewProp__objectiveNum = { "_objectiveNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseQuest_eventFinishObjective_Parms, _objectiveNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuest_FinishObjective_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuest_FinishObjective_Statics::NewProp__objectiveNum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuest_FinishObjective_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuest_FinishObjective_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseQuest, nullptr, "FinishObjective", Z_Construct_UFunction_UBaseQuest_FinishObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuest_FinishObjective_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseQuest_FinishObjective_Statics::BaseQuest_eventFinishObjective_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuest_FinishObjective_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseQuest_FinishObjective_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseQuest_FinishObjective_Statics::BaseQuest_eventFinishObjective_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseQuest_FinishObjective()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuest_FinishObjective_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseQuest::execFinishObjective)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__objectiveNum);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishObjective(Z_Param__objectiveNum);
	P_NATIVE_END;
}
// ********** End Class UBaseQuest Function FinishObjective ****************************************

// ********** Begin Class UBaseQuest Function FinishQuest ******************************************
struct Z_Construct_UFunction_UBaseQuest_FinishQuest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseQuest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuest_FinishQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseQuest, nullptr, "FinishQuest", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuest_FinishQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseQuest_FinishQuest_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBaseQuest_FinishQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuest_FinishQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseQuest::execFinishQuest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishQuest();
	P_NATIVE_END;
}
// ********** End Class UBaseQuest Function FinishQuest ********************************************

// ********** Begin Class UBaseQuest Function SetNumObejctives *************************************
struct Z_Construct_UFunction_UBaseQuest_SetNumObejctives_Statics
{
	struct BaseQuest_eventSetNumObejctives_Parms
	{
		int32 _numObjectives;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseQuest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__numObjectives;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseQuest_SetNumObejctives_Statics::NewProp__numObjectives = { "_numObjectives", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseQuest_eventSetNumObejctives_Parms, _numObjectives), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuest_SetNumObejctives_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuest_SetNumObejctives_Statics::NewProp__numObjectives,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuest_SetNumObejctives_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuest_SetNumObejctives_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseQuest, nullptr, "SetNumObejctives", Z_Construct_UFunction_UBaseQuest_SetNumObejctives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuest_SetNumObejctives_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseQuest_SetNumObejctives_Statics::BaseQuest_eventSetNumObejctives_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuest_SetNumObejctives_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseQuest_SetNumObejctives_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseQuest_SetNumObejctives_Statics::BaseQuest_eventSetNumObejctives_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseQuest_SetNumObejctives()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuest_SetNumObejctives_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseQuest::execSetNumObejctives)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__numObjectives);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNumObejctives(Z_Param__numObjectives);
	P_NATIVE_END;
}
// ********** End Class UBaseQuest Function SetNumObejctives ***************************************

// ********** Begin Class UBaseQuest Function SetQuestDetails **************************************
struct Z_Construct_UFunction_UBaseQuest_SetQuestDetails_Statics
{
	struct BaseQuest_eventSetQuestDetails_Parms
	{
		FString _name;
		FString _description;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// declaring functions\n" },
#endif
		{ "ModuleRelativePath", "BaseQuest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "declaring functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__name;
	static const UECodeGen_Private::FStrPropertyParams NewProp__description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseQuest_SetQuestDetails_Statics::NewProp__name = { "_name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseQuest_eventSetQuestDetails_Parms, _name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseQuest_SetQuestDetails_Statics::NewProp__description = { "_description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseQuest_eventSetQuestDetails_Parms, _description), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuest_SetQuestDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuest_SetQuestDetails_Statics::NewProp__name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuest_SetQuestDetails_Statics::NewProp__description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuest_SetQuestDetails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuest_SetQuestDetails_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseQuest, nullptr, "SetQuestDetails", Z_Construct_UFunction_UBaseQuest_SetQuestDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuest_SetQuestDetails_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseQuest_SetQuestDetails_Statics::BaseQuest_eventSetQuestDetails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuest_SetQuestDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseQuest_SetQuestDetails_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseQuest_SetQuestDetails_Statics::BaseQuest_eventSetQuestDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseQuest_SetQuestDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuest_SetQuestDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseQuest::execSetQuestDetails)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__name);
	P_GET_PROPERTY(FStrProperty,Z_Param__description);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetQuestDetails(Z_Param__name,Z_Param__description);
	P_NATIVE_END;
}
// ********** End Class UBaseQuest Function SetQuestDetails ****************************************

// ********** Begin Class UBaseQuest Function SetUpObjective ***************************************
struct Z_Construct_UFunction_UBaseQuest_SetUpObjective_Statics
{
	struct BaseQuest_eventSetUpObjective_Parms
	{
		int32 _objectiveNum;
		TSubclassOf<ADefaultItem> _item;
		FString _description;
		int32 _numRequired;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseQuest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__objectiveNum;
	static const UECodeGen_Private::FClassPropertyParams NewProp__item;
	static const UECodeGen_Private::FStrPropertyParams NewProp__description;
	static const UECodeGen_Private::FIntPropertyParams NewProp__numRequired;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseQuest_SetUpObjective_Statics::NewProp__objectiveNum = { "_objectiveNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseQuest_eventSetUpObjective_Parms, _objectiveNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBaseQuest_SetUpObjective_Statics::NewProp__item = { "_item", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseQuest_eventSetUpObjective_Parms, _item), Z_Construct_UClass_UClass, Z_Construct_UClass_ADefaultItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseQuest_SetUpObjective_Statics::NewProp__description = { "_description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseQuest_eventSetUpObjective_Parms, _description), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseQuest_SetUpObjective_Statics::NewProp__numRequired = { "_numRequired", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseQuest_eventSetUpObjective_Parms, _numRequired), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuest_SetUpObjective_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuest_SetUpObjective_Statics::NewProp__objectiveNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuest_SetUpObjective_Statics::NewProp__item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuest_SetUpObjective_Statics::NewProp__description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuest_SetUpObjective_Statics::NewProp__numRequired,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuest_SetUpObjective_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuest_SetUpObjective_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseQuest, nullptr, "SetUpObjective", Z_Construct_UFunction_UBaseQuest_SetUpObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuest_SetUpObjective_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseQuest_SetUpObjective_Statics::BaseQuest_eventSetUpObjective_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuest_SetUpObjective_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseQuest_SetUpObjective_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseQuest_SetUpObjective_Statics::BaseQuest_eventSetUpObjective_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseQuest_SetUpObjective()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuest_SetUpObjective_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseQuest::execSetUpObjective)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__objectiveNum);
	P_GET_OBJECT(UClass,Z_Param__item);
	P_GET_PROPERTY(FStrProperty,Z_Param__description);
	P_GET_PROPERTY(FIntProperty,Z_Param__numRequired);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUpObjective(Z_Param__objectiveNum,Z_Param__item,Z_Param__description,Z_Param__numRequired);
	P_NATIVE_END;
}
// ********** End Class UBaseQuest Function SetUpObjective *****************************************

// ********** Begin Class UBaseQuest Function UpdateObjective **************************************
struct Z_Construct_UFunction_UBaseQuest_UpdateObjective_Statics
{
	struct BaseQuest_eventUpdateObjective_Parms
	{
		int32 _objectiveNum;
		int32 _updateValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseQuest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__objectiveNum;
	static const UECodeGen_Private::FIntPropertyParams NewProp__updateValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseQuest_UpdateObjective_Statics::NewProp__objectiveNum = { "_objectiveNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseQuest_eventUpdateObjective_Parms, _objectiveNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseQuest_UpdateObjective_Statics::NewProp__updateValue = { "_updateValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseQuest_eventUpdateObjective_Parms, _updateValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuest_UpdateObjective_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuest_UpdateObjective_Statics::NewProp__objectiveNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuest_UpdateObjective_Statics::NewProp__updateValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuest_UpdateObjective_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuest_UpdateObjective_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseQuest, nullptr, "UpdateObjective", Z_Construct_UFunction_UBaseQuest_UpdateObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuest_UpdateObjective_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseQuest_UpdateObjective_Statics::BaseQuest_eventUpdateObjective_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuest_UpdateObjective_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseQuest_UpdateObjective_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseQuest_UpdateObjective_Statics::BaseQuest_eventUpdateObjective_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseQuest_UpdateObjective()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuest_UpdateObjective_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseQuest::execUpdateObjective)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__objectiveNum);
	P_GET_PROPERTY(FIntProperty,Z_Param__updateValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateObjective(Z_Param__objectiveNum,Z_Param__updateValue);
	P_NATIVE_END;
}
// ********** End Class UBaseQuest Function UpdateObjective ****************************************

// ********** Begin Class UBaseQuest ***************************************************************
void UBaseQuest::StaticRegisterNativesUBaseQuest()
{
	UClass* Class = UBaseQuest::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FinishObjective", &UBaseQuest::execFinishObjective },
		{ "FinishQuest", &UBaseQuest::execFinishQuest },
		{ "SetNumObejctives", &UBaseQuest::execSetNumObejctives },
		{ "SetQuestDetails", &UBaseQuest::execSetQuestDetails },
		{ "SetUpObjective", &UBaseQuest::execSetUpObjective },
		{ "UpdateObjective", &UBaseQuest::execUpdateObjective },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBaseQuest;
UClass* UBaseQuest::GetPrivateStaticClass()
{
	using TClass = UBaseQuest;
	if (!Z_Registration_Info_UClass_UBaseQuest.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BaseQuest"),
			Z_Registration_Info_UClass_UBaseQuest.InnerSingleton,
			StaticRegisterNativesUBaseQuest,
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
	return Z_Registration_Info_UClass_UBaseQuest.InnerSingleton;
}
UClass* Z_Construct_UClass_UBaseQuest_NoRegister()
{
	return UBaseQuest::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBaseQuest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseQuest.h" },
		{ "ModuleRelativePath", "BaseQuest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "Category", "BaseQuest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// declaring varibles\n" },
#endif
		{ "ModuleRelativePath", "BaseQuest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "declaring varibles" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_description_MetaData[] = {
		{ "Category", "BaseQuest" },
		{ "ModuleRelativePath", "BaseQuest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_objectives_MetaData[] = {
		{ "Category", "BaseQuest" },
		{ "ModuleRelativePath", "BaseQuest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_objectives_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_objectives;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseQuest_FinishObjective, "FinishObjective" }, // 3070248723
		{ &Z_Construct_UFunction_UBaseQuest_FinishQuest, "FinishQuest" }, // 2264544254
		{ &Z_Construct_UFunction_UBaseQuest_SetNumObejctives, "SetNumObejctives" }, // 2940354514
		{ &Z_Construct_UFunction_UBaseQuest_SetQuestDetails, "SetQuestDetails" }, // 1087767354
		{ &Z_Construct_UFunction_UBaseQuest_SetUpObjective, "SetUpObjective" }, // 1295690561
		{ &Z_Construct_UFunction_UBaseQuest_UpdateObjective, "UpdateObjective" }, // 3763750274
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseQuest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseQuest_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseQuest, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseQuest_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseQuest, description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_description_MetaData), NewProp_description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseQuest_Statics::NewProp_objectives_Inner = { "objectives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FObjective, METADATA_PARAMS(0, nullptr) }; // 731779236
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseQuest_Statics::NewProp_objectives = { "objectives", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseQuest, objectives), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_objectives_MetaData), NewProp_objectives_MetaData) }; // 731779236
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuest_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuest_Statics::NewProp_description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuest_Statics::NewProp_objectives_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuest_Statics::NewProp_objectives,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseQuest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Ritual_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseQuest_Statics::ClassParams = {
	&UBaseQuest::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseQuest_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuest_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuest_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseQuest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseQuest()
{
	if (!Z_Registration_Info_UClass_UBaseQuest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseQuest.OuterSingleton, Z_Construct_UClass_UBaseQuest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseQuest.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseQuest);
UBaseQuest::~UBaseQuest() {}
// ********** End Class UBaseQuest *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_BaseQuest_h__Script_Ritual_Project_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EClearCondition_StaticEnum, TEXT("EClearCondition"), &Z_Registration_Info_UEnum_EClearCondition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 317873550U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FObjective::StaticStruct, Z_Construct_UScriptStruct_FObjective_Statics::NewStructOps, TEXT("Objective"), &Z_Registration_Info_UScriptStruct_FObjective, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjective), 731779236U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseQuest, UBaseQuest::StaticClass, TEXT("UBaseQuest"), &Z_Registration_Info_UClass_UBaseQuest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseQuest), 3957893544U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_BaseQuest_h__Script_Ritual_Project_958497224(TEXT("/Script/Ritual_Project"),
	Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_BaseQuest_h__Script_Ritual_Project_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_BaseQuest_h__Script_Ritual_Project_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_BaseQuest_h__Script_Ritual_Project_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_BaseQuest_h__Script_Ritual_Project_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_BaseQuest_h__Script_Ritual_Project_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ritual_Project_Source_Ritual_Project_BaseQuest_h__Script_Ritual_Project_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
