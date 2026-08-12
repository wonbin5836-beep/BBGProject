// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "BBGGameStateBase.generated.h"

UCLASS()
class BASEBALLGAMEPROJECT_API ABBGGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	void SetTurnState(const FString& InPlayerName, float InTurnDurationSeconds, float InTurnEndServerTime);
	void ClearTurnState();

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Baseball Game|Turn")
	FString CurrentTurnPlayerName;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Baseball Game|Turn")
	float TurnDurationSeconds = 0.0f;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Baseball Game|Turn")
	float TurnEndServerTime = 0.0f;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Baseball Game|Turn")
	bool bIsTurnActive = false;

	UFUNCTION(NetMulticast, Reliable)
	void MulticastRPCBroadcastLoginMessage(const FString& InNameString = FString(TEXT("UNKNOWN")));
};
