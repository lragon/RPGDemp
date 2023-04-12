// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponent/GameplayTagComponent.h"

// Sets default values for this component's properties
UGameplayTagComponent::UGameplayTagComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

void UGameplayTagComponent::AddTag(FGameplayTag Tag, FOrigin Origin)
{
	ActiveTags.AddTag(Tag);
}

void UGameplayTagComponent::RemoveTag(FGameplayTag Tag, FOrigin Origin)
{
	ActiveTags.RemoveTag(Tag);
}


// Called when the game starts
void UGameplayTagComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

