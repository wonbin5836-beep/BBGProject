// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/BBGTimerWidget.h"

#include "Blueprint/WidgetTree.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "Core/BBGGameStateBase.h"

void UBBGTimerWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (WidgetTree->RootWidget != nullptr)
	{
		return;
	}
	
	UCanvasPanel* CanvasPanel = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), TEXT("CanvasPanel_TurnTimer"));
	WidgetTree->RootWidget = CanvasPanel;

	UVerticalBox* TimerBox = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("VerticalBox_TurnTimer"));
	UCanvasPanelSlot* TimerBoxSlot = CanvasPanel->AddChildToCanvas(TimerBox);
	TimerBoxSlot->SetAnchors(FAnchors(1.0f, 0.0f));
	TimerBoxSlot->SetAlignment(FVector2D(1.0f, 0.0f));
	TimerBoxSlot->SetPosition(FVector2D(-30.0f, 30.0f));
	TimerBoxSlot->SetSize(FVector2D(260.0f, 80.0f));

	TextBlock_TurnPlayer = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("TextBlock_TurnPlayer"));
	TextBlock_RemainingTime = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("TextBlock_RemainingTime"));
	ProgressBar_TurnTime = WidgetTree->ConstructWidget<UProgressBar>(UProgressBar::StaticClass(), TEXT("ProgressBar_TurnTime"));

	TimerBox->AddChildToVerticalBox(TextBlock_TurnPlayer);
	TimerBox->AddChildToVerticalBox(TextBlock_RemainingTime);
	TimerBox->AddChildToVerticalBox(ProgressBar_TurnTime);
}

void UBBGTimerWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	const ABBGGameStateBase* GameState = GetWorld() ? GetWorld()->GetGameState<ABBGGameStateBase>() : nullptr;
	// 복제가 아직 도착하지 않아도 위젯을 Hidden으로 만들지 않는다.
	// 계속 Tick되어야 이후 복제된 턴 정보를 화면에 반영할 수 있다.
	if (!IsValid(GameState) || !GameState->bIsTurnActive)
	{
		SetVisibility(ESlateVisibility::SelfHitTestInvisible);

		if (IsValid(TextBlock_TurnPlayer))
		{
			TextBlock_TurnPlayer->SetText(FText::FromString(TEXT("Waiting for turn...")));
		}

		if (IsValid(TextBlock_RemainingTime))
		{
			TextBlock_RemainingTime->SetText(FText::GetEmpty());
		}

		if (IsValid(ProgressBar_TurnTime))
		{
			ProgressBar_TurnTime->SetPercent(0.0f);
		}

		return;
	}

	SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	const float RemainingSeconds = FMath::Max(
		0.0f,
		GameState->TurnEndServerTime - GameState->GetServerWorldTimeSeconds()
	);

	const float ProgressPercent = GameState->TurnDurationSeconds > 0.0f
		? RemainingSeconds / GameState->TurnDurationSeconds
		: 0.0f;

	if (IsValid(TextBlock_TurnPlayer))
	{
		TextBlock_TurnPlayer->SetText(
			FText::FromString(
				FString::Printf(TEXT("%s's turn"), *GameState->CurrentTurnPlayerName)
			)
		);
	}

	if (IsValid(TextBlock_RemainingTime))
	{
		TextBlock_RemainingTime->SetText(
			FText::FromString(
				FString::Printf(TEXT("%d"), FMath::CeilToInt(RemainingSeconds))
			)
		);
	}

	if (IsValid(ProgressBar_TurnTime))
	{
		ProgressBar_TurnTime->SetPercent(ProgressPercent);
	}
	/*if (IsValid(GameState) == false || GameState->bIsTurnActive == false)
	{
		SetVisibility(ESlateVisibility::Hidden);
		return;
	}

	SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	const float RemainingSeconds = FMath::Max(0.0f, GameState->TurnEndServerTime - GameState->GetServerWorldTimeSeconds());
	const float ProgressPercent = GameState->TurnDurationSeconds > 0.0f
		? RemainingSeconds / GameState->TurnDurationSeconds
		: 0.0f;

	if (IsValid(TextBlock_TurnPlayer))
	{
		TextBlock_TurnPlayer->SetText(FText::FromString(FString::Printf(TEXT("%s's turn"), *GameState->CurrentTurnPlayerName)));
	}

	if (IsValid(TextBlock_RemainingTime))
	{
		TextBlock_RemainingTime->SetText(FText::FromString(FString::Printf(TEXT("%d"), FMath::CeilToInt(RemainingSeconds))));
	}

	if (IsValid(ProgressBar_TurnTime))
	{
		ProgressBar_TurnTime->SetPercent(ProgressPercent);
	}*/
}
