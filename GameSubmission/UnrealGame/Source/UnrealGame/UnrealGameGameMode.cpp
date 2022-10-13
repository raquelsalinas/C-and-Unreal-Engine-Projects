// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealGameGameMode.h"
#include "UnrealGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealGameGameMode::AUnrealGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
