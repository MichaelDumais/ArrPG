// Copyright Epic Games, Inc. All Rights Reserved.

#include "ArrPGGameMode.h"
#include "ArrPGPlayerController.h"
#include "ArrPGCharacter.h"
#include "UObject/ConstructorHelpers.h"

AArrPGGameMode::AArrPGGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AArrPGPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}