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
};

UCLASS(BlueprintType)
class RITUAL_PROJECT_API UBaseQuest : public UObject
{
	GENERATED_BODY()

	UBaseQuest();

public:

	UFUNCTION(BlueprintCallable)
	void SetQuestDetails(FString _name, FString _description);

	UFUNCTION(BlueprintCallable)
	void SetUpObjective(int _objectiveNum, TSubclassOf<ADefaultItem> _item, FString _description, int _numRequired);

	UFUNCTION(BlueprintCallable)
	void setNumObejctives(int _numObjectives);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FObjective> objectives;
	
};
