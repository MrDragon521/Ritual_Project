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

void UBaseQuest::setNumObejctives(int _numObjectives)
{
	objectives.SetNum(_numObjectives);
}
