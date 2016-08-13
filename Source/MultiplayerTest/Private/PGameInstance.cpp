// Fill out your copyright notice in the Description page of Project Settings.

#include "MultiplayerTest.h"
#include "PGameInstance.h"


void UPGameInstance::JoinURLGame(FString URL)
{
	APlayerController *pc = GetWorld()->GetFirstPlayerController();

	pc->ClientTravel(URL, ETravelType::TRAVEL_Absolute, true);
}

void UPGameInstance::HostMatch(FString Level)
{
	GetWorld()->ServerTravel(Level, true);
}
