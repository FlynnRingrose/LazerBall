// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "LazerBall_UnrealGameMode.h"
#include "LazerBall_UnrealBall.h"

ALazerBall_UnrealGameMode::ALazerBall_UnrealGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = ALazerBall_UnrealBall::StaticClass();
}
