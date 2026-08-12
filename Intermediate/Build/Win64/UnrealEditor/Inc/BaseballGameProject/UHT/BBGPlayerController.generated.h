// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/BBGPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASEBALLGAMEPROJECT_BBGPlayerController_generated_h
#error "BBGPlayerController.generated.h already included, missing '#pragma once' in BBGPlayerController.h"
#endif
#define BASEBALLGAMEPROJECT_BBGPlayerController_generated_h

#define FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Player_BBGPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientRPCPrintChatMessageString_Implementation(const FString& InChatMessageString); \
	virtual void ServerRPCPrintChatMessageString_Implementation(const FString& InChatMessageString); \
	DECLARE_FUNCTION(execClientRPCPrintChatMessageString); \
	DECLARE_FUNCTION(execServerRPCPrintChatMessageString);


#define FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Player_BBGPlayerController_h_16_CALLBACK_WRAPPERS
#define FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Player_BBGPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABBGPlayerController(); \
	friend struct Z_Construct_UClass_ABBGPlayerController_Statics; \
public: \
	DECLARE_CLASS(ABBGPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BaseballGameProject"), NO_API) \
	DECLARE_SERIALIZER(ABBGPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NotificationText=NETFIELD_REP_START, \
		NETFIELD_REP_END=NotificationText	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Player_BBGPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABBGPlayerController(ABBGPlayerController&&); \
	ABBGPlayerController(const ABBGPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABBGPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABBGPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABBGPlayerController) \
	NO_API virtual ~ABBGPlayerController();


#define FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Player_BBGPlayerController_h_13_PROLOG
#define FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Player_BBGPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Player_BBGPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Player_BBGPlayerController_h_16_CALLBACK_WRAPPERS \
	FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Player_BBGPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Player_BBGPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASEBALLGAMEPROJECT_API UClass* StaticClass<class ABBGPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Player_BBGPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
