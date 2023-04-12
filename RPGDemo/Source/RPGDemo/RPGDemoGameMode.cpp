// Copyright Epic Games, Inc. All Rights Reserved.

#include "RPGDemoGameMode.h"
#include "RPGDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARPGDemoGameMode::ARPGDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
