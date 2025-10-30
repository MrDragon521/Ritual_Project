// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "DefaultItem.h"

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseQuest.generated.h"


UENUM(BlueprintType)
enum class EClearCondition : uint8
{
	E_Defualt		UMETA(DisplayName = "DEFAULT"),
	E_Evidence		UMETA(DisplayName = "EVIDENCE")
};

USTRUCT(BlueprintType)
struct FObjective
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EClearCondition clearType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ADefaultItem> item;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int numRequired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int objectiveID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isComplete;
};

UCLASS(BlueprintType)
class RITUAL_PROJECT_API UBaseQuest : public UObject
{
	GENERATED_BODY()

	UBaseQuest();

public:

	// declaring functions
	UFUNCTION(BlueprintCallable)
	void SetQuestDetails(FString _name, FString _description);

	UFUNCTION(BlueprintCallable)
	void SetUpObjective(int _objectiveNum, TSubclassOf<ADefaultItem> _item, FString _description, int _numRequired);

	UFUNCTION(BlueprintCallable)
	void SetNumObejctives(int _numObjectives);

	UFUNCTION(BlueprintCallable)
	void UpdateObjective(int _objectiveNum, int _updateValue);

	UFUNCTION(BlueprintCallable)
	void FinishObjective(int _objectiveNum);

	UFUNCTION(BlueprintCallable)
	void FinishQuest();

	// declaring varibles
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FObjective> objectives;
	
};
