// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/PlayerControllerMM.h"
#include "Core/PlayerCameraManagerMM.h"

APlayerControllerMM::APlayerControllerMM(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PlayerCameraManagerClass = APlayerCameraManagerMM::StaticClass();
}
