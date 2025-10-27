// Fill out your copyright notice in the Description page of Project Settings.


#include "NoteBook.h"

// Sets default values for this component's properties
UNoteBook::UNoteBook()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UNoteBook::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UNoteBook::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UNoteBook::setWidget(TSubclassOf<UUserWidget> _UIWidget)
{
	noteBookClass = _UIWidget;
}

void UNoteBook::toggleNoteBook(TSubclassOf<UUserWidget> _UIWidget)
{
	if (_UIWidget == nullptr)
	{
		_UIWidget = noteBookClass;
	}

	//UUserWidget* book = GetOwner(CreateWidget<UUserWidget>(GetController<GetOwner>, noteBookClass))
}

