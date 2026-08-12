#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BBGTimerWidget.generated.h"

class UProgressBar;
class UTextBlock;

UCLASS()
class BASEBALLGAMEPROJECT_API UBBGTimerWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;


	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> TextBlock_TurnPlayer;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> TextBlock_RemainingTime;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UProgressBar> ProgressBar_TurnTime;
};

