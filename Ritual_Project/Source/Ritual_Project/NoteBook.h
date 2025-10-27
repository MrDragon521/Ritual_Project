// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NoteBook.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RITUAL_PROJECT_API UNoteBook : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UNoteBook();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> noteBookClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UUserWidget* noteBookHUD;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void setWidget(TSubclassOf<UUserWidget> _UIWidget);

	UFUNCTION(BlueprintCallable)
	void toggleNoteBook(TSubclassOf<UUserWidget> _UIWidget);

		
};
