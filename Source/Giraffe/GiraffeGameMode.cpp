// Copyright Epic Games, Inc. All Rights Reserved.

#include "GiraffeGameMode.h"
#include "GiraffeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGiraffeGameMode::AGiraffeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
