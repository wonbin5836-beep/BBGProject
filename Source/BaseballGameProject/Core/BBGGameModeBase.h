// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BBGGameModeBase.generated.h"

class ABBGPlayerController;
/**
 * 
 */
UCLASS()
class BASEBALLGAMEPROJECT_API ABBGGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;
	
	virtual void OnPostLogin(AController* NewPlayer) override;	
	virtual void Logout(AController* Exiting) override;
	
	void PrintChatMessageString(ABBGPlayerController* InChattingPlayerController, const FString& InChatMessageString);
	
	FString GenerateSecretNumber();

	bool IsGuessNumberString(const FString& InNumberString);

	FString JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString, int32& OutStrikeCount);
	
	void IncreaseGuessCount(ABBGPlayerController* InChattingPlayerController);
	
	void ResetGame();

	bool JudgeGame(ABBGPlayerController* InChattingPlayerController, int InStrikeCount);

	void StartNextTurn();
	void HandleTurnTimeout();
	void BroadcastSystemMessage(const FString& InMessage);
	
	protected:
	FString SecretNumberString;
	
	TArray<TObjectPtr<ABBGPlayerController>> AllPlayerControllers;

	UPROPERTY(EditDefaultsOnly, Category = "Baseball Game|Turn", meta = (ClampMin = "1.0"))
	float TurnTimeLimitSeconds = 25.0f;

	TObjectPtr<ABBGPlayerController> CurrentTurnPlayer;
	int32 CurrentTurnIndex = INDEX_NONE;
	FTimerHandle TurnTimerHandle;
};
