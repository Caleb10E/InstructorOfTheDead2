// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "InstructorOfTheDead2GameMode.h"
#include "InstructorOfTheDead2Character.h"
#include "UObject/ConstructorHelpers.h"

AInstructorOfTheDead2GameMode::AInstructorOfTheDead2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/Player_pawn"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
