// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "Struct/Origin.h"
#include "GameplayTagComponent.generated.h"


UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RPGDEMO_API UGameplayTagComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGameplayTagComponent();

	void AddTag(FGameplayTag Tag, FOrigin Origin);

	void RemoveTag(FGameplayTag Tag, FOrigin Origin);

	FGameplayTagContainer GetActiveTagContainer() { return ActiveTags; }
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FGameplayTagContainer ActiveTags;
};
