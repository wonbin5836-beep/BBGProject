// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BBGPlayerController.generated.h"


class UBBGChatInput;
class UBBGTimerWidget;

UCLASS()
class BASEBALLGAMEPROJECT_API ABBGPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ABBGPlayerController();
	
	virtual void BeginPlay() override;
	
	void SetChatMessageString(const FString& InChatMessageString);

	void PrintChatMessageString(const FString& InChatMessageString);
	
	UFUNCTION(Server, Reliable)
	void ServerRPCPrintChatMessageString(const FString& InChatMessageString);
	
	UFUNCTION(Client, Reliable)
	void ClientRPCPrintChatMessageString(const FString& InChatMessageString);
	
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	
	UPROPERTY(Replicated, BlueprintReadOnly)
	FText NotificationText;
protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UBBGChatInput> ChatInputWidgetClass;
	
	UPROPERTY()
	TObjectPtr<UBBGChatInput> ChatInputWidgetInstance;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> NotificationTextWidgetClass;
	
	UPROPERTY()
	TObjectPtr<UUserWidget> NotificationTextWidgetInstance;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UBBGTimerWidget> TurnTimerWidgetClass;

	UPROPERTY()
	TObjectPtr<UBBGTimerWidget> TurnTimerWidgetInstance;
	
	FString ChatMessageString;
};
