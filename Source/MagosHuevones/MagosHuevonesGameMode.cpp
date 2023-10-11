// Copyright Epic Games, Inc. All Rights Reserved.

#include "MagosHuevonesGameMode.h"
#include "MagosHuevonesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMagosHuevonesGameMode::AMagosHuevonesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
