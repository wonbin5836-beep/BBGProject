// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/BBGGameStateBase.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "Player/BBGPlayerController.h"

void ABBGGameStateBase::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, CurrentTurnPlayerName);
	DOREPLIFETIME(ThisClass, TurnDurationSeconds);
	DOREPLIFETIME(ThisClass, TurnEndServerTime);
	DOREPLIFETIME(ThisClass, bIsTurnActive);
}

void ABBGGameStateBase::SetTurnState(const FString& InPlayerName, float InTurnDurationSeconds, float InTurnEndServerTime)
{
	CurrentTurnPlayerName = InPlayerName;
	TurnDurationSeconds = InTurnDurationSeconds;
	TurnEndServerTime = InTurnEndServerTime;
	bIsTurnActive = true;
	ForceNetUpdate();
}

void ABBGGameStateBase::ClearTurnState()
{
	bIsTurnActive = false;
	ForceNetUpdate();
}

void ABBGGameStateBase::MulticastRPCBroadcastLoginMessage_Implementation(const FString& InNameString)
{
	if (HasAuthority() == false) 
	{
		APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
		if (IsValid(PC) == true)
		{
			ABBGPlayerController* BBGPC = Cast<ABBGPlayerController>(PC);
			if (IsValid(BBGPC) == true)
			{
				FString NotificationString = InNameString + TEXT(" has joined the game.");
				BBGPC->PrintChatMessageString(NotificationString);
			}
		}
	}
}
