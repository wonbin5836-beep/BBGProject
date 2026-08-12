// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/BBGPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASEBALLGAMEPROJECT_BBGPlayerState_generated_h
#error "BBGPlayerState.generated.h already included, missing '#pragma once' in BBGPlayerState.h"
#endif
#define BASEBALLGAMEPROJECT_BBGPlayerState_generated_h

#define FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Player_BBGPlayerState_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABBGPlayerState(); \
	friend struct Z_Construct_UClass_ABBGPlayerState_Statics; \
public: \
	DECLARE_CLASS(ABBGPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BaseballGameProject"), NO_API) \
	DECLARE_SERIALIZER(ABBGPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerNameString=NETFIELD_REP_START, \
		CurrentGuessCount, \
		MaxGuessCount, \
		NETFIELD_REP_END=MaxGuessCount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Player_BBGPlayerState_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABBGPlayerState(ABBGPlayerState&&); \
	ABBGPlayerState(const ABBGPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABBGPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABBGPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABBGPlayerState) \
	NO_API virtual ~ABBGPlayerState();


#define FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Player_BBGPlayerState_h_9_PROLOG
#define FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Player_BBGPlayerState_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Player_BBGPlayerState_h_12_INCLASS_NO_PURE_DECLS \
	FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Player_BBGPlayerState_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASEBALLGAMEPROJECT_API UClass* StaticClass<class ABBGPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Player_BBGPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
