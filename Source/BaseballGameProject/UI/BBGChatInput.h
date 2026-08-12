#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BBGChatInput.generated.h"

class UEditableTextBox;

UCLASS()
class BASEBALLGAMEPROJECT_API UBBGChatInput : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UEditableTextBox> EditableTextBox_ChatInput;
	
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	
	protected:
	UFUNCTION()
	void OnChatInputTextCommitted(const FText& InText, ETextCommit::Type CommitInfo);
};
