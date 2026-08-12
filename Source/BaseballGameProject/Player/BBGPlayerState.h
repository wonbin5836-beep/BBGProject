// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BBGPlayerState.generated.h"

UCLASS()
class BASEBALLGAMEPROJECT_API ABBGPlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:
	ABBGPlayerState();
	
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(Replicated)
	FString PlayerNameString;
	
	UPROPERTY(Replicated)
	int32 CurrentGuessCount;

	UPROPERTY(Replicated)
	int32 MaxGuessCount;
	
	FString GetPlayerInfoString();
};
