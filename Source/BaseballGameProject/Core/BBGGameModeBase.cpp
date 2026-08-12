#include "BBGGameModeBase.h"
#include "BBGGameStateBase.h"
#include "EngineUtils.h"
#include "TimerManager.h"
#include "Player/BBGPlayerController.h"
#include "Player/BBGPlayerState.h"

void ABBGGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	SecretNumberString = GenerateSecretNumber();
	UE_LOG( LogTemp, Warning, TEXT( "Secret Number: %s" ), *SecretNumberString)
}

void ABBGGameModeBase::PrintChatMessageString(ABBGPlayerController* InChattingPlayerController,
                                              const FString& InChatMessageString)
{
	if (IsValid(InChattingPlayerController) == false)
	{
		return;
	}
	
	ABBGPlayerState* BBGPS = InChattingPlayerController->GetPlayerState<ABBGPlayerState>();
	bool bIsGuess = (InChatMessageString.Len() == 3 && IsGuessNumberString(InChatMessageString));
	
	if (bIsGuess)
	{
		if (CurrentTurnPlayer != InChattingPlayerController)
		{
			InChattingPlayerController->ClientRPCPrintChatMessageString(TEXT("시스템: 당신의 턴이 아닙니다."));
			return;
		}

		if (IsValid(BBGPS) && BBGPS->CurrentGuessCount >= BBGPS->MaxGuessCount)
		{
			InChattingPlayerController->ClientRPCPrintChatMessageString(TEXT("시스템: 남은 기회가 없습니다."));
			return;
		}
		IncreaseGuessCount(InChattingPlayerController);
	}
	
	// 2. 메시지 조립
	FString PlayerInfo = (IsValid(BBGPS) && !BBGPS->GetPlayerInfoString().IsEmpty()) ? BBGPS->GetPlayerInfoString() : TEXT("Unknown");
	FString MessageToSend = FString::Printf(TEXT("%s: %s"), *PlayerInfo, *InChatMessageString);

	// 3. 야구 게임 결과 판정 및 승패 처리
	if (bIsGuess)
	{
		int32 StrikeCount = 0;
		FString JudgeResultString = JudgeResult(SecretNumberString, InChatMessageString, StrikeCount);
		const int32 TurnTimeLimit = FMath::RoundToInt(TurnTimeLimitSeconds);
		MessageToSend += FString::Printf(TEXT(" -> %s (%ds)"), *JudgeResultString, TurnTimeLimit);

		const bool bGameEnded = JudgeGame(InChattingPlayerController, StrikeCount);
		if (bGameEnded == false)
		{
			StartNextTurn();
		}
	}
	else
	{
		MessageToSend += FString::Printf(TEXT("(게임을 위해 중복되지 않는 3자리의 숫자를 입력하세요)"));
	}

	// 4. 전체 브로드캐스트
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		if (ABBGPlayerController* BBGPC = Cast<ABBGPlayerController>(It->Get()))
		{
			BBGPC->ClientRPCPrintChatMessageString(MessageToSend);
		}
	}
	
	
	/*
	if (InChatMessageString.Len() == 3 && IsGuessNumberString(InChatMessageString) == true)
	{
		IncreaseGuessCount(InChattingPlayerController);
	}
	
	FString PlayerInfo = TEXT("Unknown");
	if (IsValid(BBGPS) == true && BBGPS->GetPlayerInfoString().IsEmpty() == false)
	{
		PlayerInfo = BBGPS->GetPlayerInfoString();
	}

	// 2. 서버에서 안전하게 "Player1: hi" 형태로 최종 메시지 조합
	FString CombinedMessageString = FString::Printf(TEXT("%s: %s"), *PlayerInfo, *InChatMessageString);

	// 3. 순수 입력 메시지(InChatMessageString)가 3자리 숫자일 때만 야구 게임 판정
	FString MessageToSend = CombinedMessageString;
	if (InChatMessageString.Len() == 3 && IsGuessNumberString(InChatMessageString) == true)
	{
		if (IsValid(BBGPS) == true && BBGPS->CurrentGuessCount >= BBGPS->MaxGuessCount)
		{
			InChattingPlayerController->ClientRPCPrintChatMessageString(TEXT("시스템: 남은 기회가 없습니다."));
			return;
		}
		FString JudgeResultString = JudgeResult(SecretNumberString, InChatMessageString);

		MessageToSend = FString::Printf(TEXT("%s -> %s"), *CombinedMessageString, *JudgeResultString);

		int32 StrikeCount = FCString::Atoi(*JudgeResultString.Left(1));
		JudgeGame(InChattingPlayerController, StrikeCount);
	}

	// 4. 모든 플레이어에게 최종 메시지 방송
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		if (ABBGPlayerController* BBGPC = Cast<ABBGPlayerController>(It->Get()))
		{
			BBGPC->ClientRPCPrintChatMessageString(MessageToSend);
		}
	}
	*/


	/*// 1. 메시지가 3자리 미만일 경우 범위를 벗어나는 예외 처리 추가
	if (InChatMessageString.Len() < 3)
	{
		// 3자리 미만이면 검사 없이 바로 브로드캐스트
		for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
		{
			if (ABBGPlayerController* BBGPC = Cast<ABBGPlayerController>(It->Get()))
			{
				BBGPC->ClientRPCPrintChatMessageString(InChatMessageString);
			}
		}
		return;
	}

	// 2. 뒤의 3자리 추출 및 야구 게임 숫자 여부 판정
	int32 Index = InChatMessageString.Len() - 3;
	FString GuessNumberString = InChatMessageString.RightChop(Index);

	// 조건에 따라 최종으로 보낼 메시지 구성 
	FString MessageToSend = InChatMessageString;
	if (IsGuessNumberString(GuessNumberString) == true)
	{
		FString JudgeResultString = JudgeResult(SecretNumberString, GuessNumberString);
		MessageToSend = FString::Printf(TEXT("%s -> %s"), *InChatMessageString, *JudgeResultString);
	}

	// 3. GetPlayerControllerIterator를 사용해 모든 플레이어에게 방송
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		if (ABBGPlayerController* BBGPC = Cast<ABBGPlayerController>(It->Get()))
		{
			BBGPC->ClientRPCPrintChatMessageString(MessageToSend);
		}
	}*/
}

void ABBGGameModeBase::OnPostLogin(AController* NewPlayer)
{
	Super::OnPostLogin(NewPlayer);

	ABBGPlayerController* BBGPlayerController = Cast<ABBGPlayerController>(NewPlayer);
	if (IsValid(BBGPlayerController) == true)
	{
		BBGPlayerController->NotificationText = FText::FromString(TEXT("Connected to the game server."));

		AllPlayerControllers.Add(BBGPlayerController);
		ABBGPlayerState* BBGPS = BBGPlayerController->GetPlayerState<ABBGPlayerState>();
		if (IsValid(BBGPS) == true)
		{
			//플레이어 이름 자동 생성 및 부여
			BBGPS->PlayerNameString = TEXT("Player") + FString::FromInt(AllPlayerControllers.Num());
		}

		ABBGGameStateBase* BBGGameStateBase = GetGameState<ABBGGameStateBase>();
		if (IsValid(BBGGameStateBase) == true)
		{
			//접속 메시지 전체 방송 (Multicast RPC)
			BBGGameStateBase->MulticastRPCBroadcastLoginMessage(BBGPS->PlayerNameString);
		}

		if (IsValid(CurrentTurnPlayer) == false)
		{
			CurrentTurnIndex = INDEX_NONE;
			StartNextTurn();
		}
	}
}

void ABBGGameModeBase::Logout(AController* Exiting)
{
	if (ABBGPlayerController* BBGPlayerController = Cast<ABBGPlayerController>(Exiting))
	{
		const int32 RemovedIndex = AllPlayerControllers.Find(BBGPlayerController);
		const bool bWasCurrentTurn = (CurrentTurnPlayer == BBGPlayerController);
		if (RemovedIndex != INDEX_NONE)
		{
			AllPlayerControllers.RemoveAt(RemovedIndex);
			if (RemovedIndex <= CurrentTurnIndex)
			{
				--CurrentTurnIndex;
			}
		}

		if (bWasCurrentTurn)
		{
			CurrentTurnPlayer = nullptr;
			StartNextTurn();
		}
	}

	Super::Logout(Exiting);
}

FString ABBGGameModeBase::GenerateSecretNumber()
{
	TArray<int32> Numbers;
	//0부터 9까지 숫자로 배열 초기화
	for (int32 i = 0; i <= 9; i++)
	{
		Numbers.Add(i);
	}

	//시드(Seed) 초기화 및 0 제거 (1~9 추출)
	FMath::RandInit(FDateTime::Now().GetTicks());
	Numbers = Numbers.FilterByPredicate([](int32 Num) { return Num > 0; });

	FString Result;
	//중복 없이 3자리 숫자 뽑기
	for (int32 i = 0; i < 3; i++)
	{
		int32 Index = FMath::RandRange(0, Numbers.Num() - 1);
		Result.Append(FString::FromInt(Numbers[Index]));
		Numbers.RemoveAt(Index);
	}

	return Result;
}

bool ABBGGameModeBase::IsGuessNumberString(const FString& InNumberString)
{
	bool bCanPlay = false;

	do
	{
		if (InNumberString.Len() != 3)
		{
			break; // 길이가 3이 아니면 탈출 (bCanPlay = false 유지)
		}

		bool bIsUnique = true; //유효 검사용 플래그 변수

		//TSet<TCHAR>은 중복을 허용하지 않는 자료구조 동일한 숫자가 들어오면 새로 추가되지 않는다
		TSet<TCHAR> UniqueDigits;

		for (TCHAR C : InNumberString)
		{
			// FChar::IsDigit(C)를 통해 문자가 숫자인지 확인하고, '0'은 허용하지 않는다
			if (FChar::IsDigit(C) == false || C == '0')
			{
				bIsUnique = false;
				break; //유효하지 않으면 바로 종료
			}

			UniqueDigits.Add(C);
		}

		//최종 집합의 원소 개수(UniqueDigits.Num())가 3이 되지 않거나 플래그가 유효하지 않으면 do문 종료
		if (bIsUnique == false || UniqueDigits.Num() != 3)
		{
			break;
		}

		bCanPlay = true; // 모든 검사를 통과한 경우에만 true 설정
	}
	while (false);
	return bCanPlay;
}

FString ABBGGameModeBase::JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString, int32& OutStrikeCount)
{
	OutStrikeCount = 0;
	int32 BallCount = 0;

	for (int32 i = 0; i < 3; ++i) //3번 반복
	{
		if (InSecretNumberString[i] == InGuessNumberString[i]) //스트라이크 검사
		{
			OutStrikeCount++;
		}
		else
		{
			//단일 문자(TCHAR)를 언리얼의 FString 문맥으로 변환하는 과정
			FString PlayerGuessChar = FString::Printf(TEXT("%c"), InGuessNumberString[i]);
			if (InSecretNumberString.Contains(PlayerGuessChar)) //볼 검사
			{
				BallCount++;
			}
		}
	}

	if (OutStrikeCount == 0 && BallCount == 0) //아웃 판결
	{
		return TEXT("OUT");
	}

	return FString::Printf(TEXT("%dS%dB"), OutStrikeCount, BallCount);
}

void ABBGGameModeBase::IncreaseGuessCount(ABBGPlayerController* InChattingPlayerController)
{
	ABBGPlayerState* BBGPS = InChattingPlayerController->GetPlayerState<ABBGPlayerState>();
	if (IsValid(BBGPS) == true)
	{
		BBGPS->CurrentGuessCount++;
	}
}

void ABBGGameModeBase::ResetGame()
{
	SecretNumberString = GenerateSecretNumber();
	UE_LOG( LogTemp, Warning, TEXT( "Secret Number: %s" ), *SecretNumberString)
	for (const auto& BBGPC : AllPlayerControllers)
	{
		if (IsValid(BBGPC) == false)
		{
			continue;
		}

		ABBGPlayerState* BBGPS = BBGPC->GetPlayerState<ABBGPlayerState>();
		if (IsValid(BBGPS) == true)
		{
			BBGPS->CurrentGuessCount = 0;
		}
		
	}

	CurrentTurnPlayer = nullptr;
	CurrentTurnIndex = INDEX_NONE;
	StartNextTurn();
}

void ABBGGameModeBase::StartNextTurn()
{
	GetWorldTimerManager().ClearTimer(TurnTimerHandle);
	CurrentTurnPlayer = nullptr;

	const int32 PlayerCount = AllPlayerControllers.Num();
	for (int32 Offset = 1; Offset <= PlayerCount; ++Offset)
	{
		const int32 CandidateIndex = (CurrentTurnIndex + Offset + PlayerCount) % PlayerCount;
		ABBGPlayerController* Candidate = AllPlayerControllers[CandidateIndex];
		if (IsValid(Candidate) == false)
		{
			continue;
		}

		ABBGPlayerState* CandidateState = Candidate->GetPlayerState<ABBGPlayerState>();
		if (IsValid(CandidateState) && CandidateState->CurrentGuessCount < CandidateState->MaxGuessCount)
		{
			CurrentTurnIndex = CandidateIndex;
			CurrentTurnPlayer = Candidate;
			const float TurnEndServerTime = GetWorld()->GetTimeSeconds() + TurnTimeLimitSeconds;
			GetWorldTimerManager().SetTimer(TurnTimerHandle, this, &ThisClass::HandleTurnTimeout, TurnTimeLimitSeconds, false);

			if (ABBGGameStateBase* BBGGameState = GetGameState<ABBGGameStateBase>())
			{
				BBGGameState->SetTurnState(CandidateState->PlayerNameString, TurnTimeLimitSeconds, TurnEndServerTime);
			}
			return;
		}
	}

	CurrentTurnIndex = INDEX_NONE;
	if (ABBGGameStateBase* BBGGameState = GetGameState<ABBGGameStateBase>())
	{
		BBGGameState->ClearTurnState();
	}
}

void ABBGGameModeBase::HandleTurnTimeout()
{
	ABBGPlayerController* TimedOutPlayer = CurrentTurnPlayer;
	if (IsValid(TimedOutPlayer) == false)
	{
		StartNextTurn();
		return;
	}

	ABBGPlayerState* PlayerState = TimedOutPlayer->GetPlayerState<ABBGPlayerState>();
	if (IsValid(PlayerState) && PlayerState->CurrentGuessCount < PlayerState->MaxGuessCount)
	{
		++PlayerState->CurrentGuessCount;
		BroadcastSystemMessage(FString::Printf(TEXT("시스템: %s 시간 오버. 기회 1회를 소모합니다."), *PlayerState->PlayerNameString));
	}

	const bool bGameEnded = JudgeGame(TimedOutPlayer, 0);
	if (bGameEnded == false)
	{
		StartNextTurn();
	}
}

void ABBGGameModeBase::BroadcastSystemMessage(const FString& InMessage)
{
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		if (ABBGPlayerController* BBGPC = Cast<ABBGPlayerController>(It->Get()))
		{
			BBGPC->ClientRPCPrintChatMessageString(InMessage);
		}
	}
}

bool ABBGGameModeBase::JudgeGame(ABBGPlayerController* InChattingPlayerController, int InStrikeCount)
{
	if (3 == InStrikeCount)
	{
		ABBGPlayerState* BBGPS = InChattingPlayerController->GetPlayerState<ABBGPlayerState>();
		for (const auto& BBGPC : AllPlayerControllers)
		{
			if (IsValid(BBGPC) && IsValid(BBGPS) == true)
			{
				FString CombinedMessageString = BBGPS->PlayerNameString + TEXT(" has won the game.");
				BBGPC->NotificationText = FText::FromString(CombinedMessageString);
			}
		}
		ResetGame();
		return true;
	}
	else
	{
		bool bIsDraw = true;
		for (const auto& BBGPC : AllPlayerControllers)
		{
			if (IsValid(BBGPC) == false)
			{
				continue;
			}

			ABBGPlayerState* BBGPS = BBGPC->GetPlayerState<ABBGPlayerState>();
			if (IsValid(BBGPS) == true)
			{
				if (BBGPS->CurrentGuessCount < BBGPS->MaxGuessCount)
				{
					bIsDraw = false;
					break;
				}
			}
		}

		if (true == bIsDraw)
		{
			for (const auto& BBGPC : AllPlayerControllers)
			{
				if (IsValid(BBGPC))
				{
					BBGPC->NotificationText = FText::FromString(TEXT("Draw..."));
				}
			}
			ResetGame();
			return true;
		}
	}

	return false;
}
