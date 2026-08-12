#include "Player/BBGPlayerController.h"

#include "BaseballGameProject.h"
#include "BBGPlayerState.h"
#include "EngineUtils.h"
#include "Blueprint/UserWidget.h"
#include "Core/BBGGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "UI/BBGChatInput.h"
#include "UI/BBGTimerWidget.h"


ABBGPlayerController::ABBGPlayerController()
{
	bReplicates = true;
}

void ABBGPlayerController::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(ThisClass, NotificationText);
}

void ABBGPlayerController::BeginPlay()
{
	Super::BeginPlay();
	FInputModeUIOnly InputModeUIOnly;
	SetInputMode(InputModeUIOnly);

	if (IsLocalController() == false)
	{
		return;
	}

	if (IsValid(ChatInputWidgetClass) == true)
	{
		ChatInputWidgetInstance = CreateWidget<UBBGChatInput>(this, ChatInputWidgetClass);
		if (IsValid(ChatInputWidgetInstance) == true)
		{
			ChatInputWidgetInstance->AddToViewport();
		}
	}
	
	if (IsValid(NotificationTextWidgetClass) == true)
	{
		NotificationTextWidgetInstance = CreateWidget<UUserWidget>(this, NotificationTextWidgetClass);
		if (IsValid(NotificationTextWidgetInstance) == true)
		{
			NotificationTextWidgetInstance->AddToViewport();
		}
	}

	TSubclassOf<UBBGTimerWidget> TimerWidgetClassToCreate = TurnTimerWidgetClass;
	if (IsValid(TimerWidgetClassToCreate) == false)
	{
		TimerWidgetClassToCreate = UBBGTimerWidget::StaticClass();
		UE_LOG(LogTemp, Warning, TEXT("실패!"));
	}

	TurnTimerWidgetInstance = CreateWidget<UBBGTimerWidget>(this, TimerWidgetClassToCreate);
	if (IsValid(TurnTimerWidgetInstance) == true)
	{
		UE_LOG(LogTemp, Warning, TEXT("성공!"));
		TurnTimerWidgetInstance->AddToViewport();
	}
}

void ABBGPlayerController::SetChatMessageString(const FString& InChatMessageString)
{
	ChatMessageString = InChatMessageString;
	if (IsLocalController() == true)
	{
        // 닉네임을 여기서 조합하지 않고 순수 입력 메시지만 서버로 전송
        ServerRPCPrintChatMessageString(InChatMessageString);
		
		
		
		
		/*ABBGPlayerState* BBGPS = GetPlayerState<ABBGPlayerState>();
		if (IsValid(BBGPS) == true)
		{
			FString CombinedMessageString = BBGPS->PlayerNameString + TEXT(" : ") + InChatMessageString;
			ServerRPCPrintChatMessageString(CombinedMessageString);
		}*/
	}
	
}

void ABBGPlayerController::PrintChatMessageString(const FString& InChatMessageString)
{
	ChatFunctionLibrary::MyPrintString(this, InChatMessageString, 10.f);
}

void ABBGPlayerController::ServerRPCPrintChatMessageString_Implementation(const FString& InChatMessageString)
{
	AGameModeBase* GM = UGameplayStatics::GetGameMode(this);
	if (IsValid(GM) == true)
	{
		ABBGGameModeBase* BBGGM = Cast<ABBGGameModeBase>(GM);
		if (IsValid(BBGGM) == true)
		{
			BBGGM->PrintChatMessageString(this, InChatMessageString);
		}
	}
}

void ABBGPlayerController::ClientRPCPrintChatMessageString_Implementation(const FString& InChatMessageString)
{
	PrintChatMessageString(InChatMessageString);
}
