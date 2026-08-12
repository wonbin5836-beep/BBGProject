// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/BBGGameStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASEBALLGAMEPROJECT_BBGGameStateBase_generated_h
#error "BBGGameStateBase.generated.h already included, missing '#pragma once' in BBGGameStateBase.h"
#endif
#define BASEBALLGAMEPROJECT_BBGGameStateBase_generated_h

#define FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Core_BBGGameStateBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastRPCBroadcastLoginMessage_Implementation(const FString& InNameString); \
	DECLARE_FUNCTION(execMulticastRPCBroadcastLoginMessage);


#define FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Core_BBGGameStateBase_h_12_CALLBACK_WRAPPERS
#define FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Core_BBGGameStateBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABBGGameStateBase(); \
	friend struct Z_Construct_UClass_ABBGGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ABBGGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BaseballGameProject"), NO_API) \
	DECLARE_SERIALIZER(ABBGGameStateBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentTurnPlayerName=NETFIELD_REP_START, \
		TurnDurationSeconds, \
		TurnEndServerTime, \
		bIsTurnActive, \
		NETFIELD_REP_END=bIsTurnActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Core_BBGGameStateBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABBGGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABBGGameStateBase(ABBGGameStateBase&&); \
	ABBGGameStateBase(const ABBGGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABBGGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABBGGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABBGGameStateBase) \
	NO_API virtual ~ABBGGameStateBase();


#define FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Core_BBGGameStateBase_h_9_PROLOG
#define FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Core_BBGGameStateBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Core_BBGGameStateBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Core_BBGGameStateBase_h_12_CALLBACK_WRAPPERS \
	FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Core_BBGGameStateBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Core_BBGGameStateBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASEBALLGAMEPROJECT_API UClass* StaticClass<class ABBGGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Core_BBGGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
