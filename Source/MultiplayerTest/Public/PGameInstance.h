// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/GameInstance.h"
#include "PGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYERTEST_API UPGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
protected:

	UFUNCTION(BlueprintCallable, Category = "Multiplayer Test")
	void JoinURLGame(FString URL);
	
	UFUNCTION(BlueprintCallable, Category = "Multiplayer Test")
	void HostMatch(FString Level);

};
