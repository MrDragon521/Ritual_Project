// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseQuest.h"

UBaseQuest::UBaseQuest()
{

	// Sets defualt values
	name = "Defualt Quest";
	description = "Go do this";

}

void UBaseQuest::SetQuestDetails(FString _name, FString _description)
{
	name = _name;
	description = _description;
}

void UBaseQuest::SetUpObjective(int _objectiveNum, TSubclassOf<ADefaultItem> _item, FString _description, int _numRequired)
{
	if (_objectiveNum < objectives.Num())
	{
		if (_item != nullptr)
		{
			objectives[_objectiveNum].clearType = EClearCondition::E_Evidence;
			objectives[_objectiveNum].item = _item;
		}

		objectives[_objectiveNum].description = _description;
		objectives[_objectiveNum].numRequired = _numRequired;
	}
}

void UBaseQuest::SetNumObejctives(int _numObjectives)
{
	objectives.SetNum(_numObjectives);
}

void UBaseQuest::UpdateObjective(int _objectiveNum, int _updateValue)
{
	if (_objectiveNum < objectives.Num())
	{
		objectives[_objectiveNum].numRequired -= _updateValue;

		UE_LOG(LogTemp, Warning, TEXT("You need to perform that action %d more times."), objectives[_objectiveNum].numRequired);

		if (objectives[_objectiveNum].numRequired <= 0)
		{
			FinishObjective(_objectiveNum);
		}
	}
}

void UBaseQuest::FinishObjective(int _objectiveNum)
{
	if (_objectiveNum < objectives.Num())
	{
		objectives[_objectiveNum].isComplete = true;
		
		int numFinished = 0;
		for (int i = 0; i < objectives.Num(); i++)
		{
			if (objectives[i].isComplete)
			{
				numFinished++;
			}
		}

		if (numFinished >= objectives.Num())
		{
			FinishQuest();
		}
	}
}

void UBaseQuest::FinishQuest()
{
}
