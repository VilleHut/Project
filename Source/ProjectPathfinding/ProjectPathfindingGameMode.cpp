// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ProjectPathfindingGameMode.h"
#include "ProjectPathfindingPlayerController.h"
#include "ProjectPathfindingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectPathfindingGameMode::AProjectPathfindingGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AProjectPathfindingPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}