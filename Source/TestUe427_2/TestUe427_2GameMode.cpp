// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestUe427_2GameMode.h"
#include "TestUe427_2Character.h"
#include "UObject/ConstructorHelpers.h"

ATestUe427_2GameMode::ATestUe427_2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
