// Fill out your copyright notice in the Description page of Project Settings.



#include "Core/GameModeMM.h"
#include "Core/HUDMM.h"
#include "Core/PlayerControllerMM.h"
#include "Core/PlayerStateMM.h"
#include "Core/GameStateBaseMM.h"
#include "Characters/CharacterMMBase.h"



AGameModeMM::AGameModeMM(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	GameStateClass = AGameStateBaseMM::StaticClass();
	PlayerControllerClass = APlayerControllerMM::StaticClass();
	HUDClass = AHUDMM::StaticClass();
	PlayerStateClass = APlayerStateMM::StaticClass();
	DefaultPawnClass = ACharacterMMBase::StaticClass();
	PlayerControllerClass = APlayerControllerMM::StaticClass();
}
