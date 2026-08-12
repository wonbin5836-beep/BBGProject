// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseballGameProject/Player/BBGPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBBGPlayerController() {}

// Begin Cross Module References
BASEBALLGAMEPROJECT_API UClass* Z_Construct_UClass_ABBGPlayerController();
BASEBALLGAMEPROJECT_API UClass* Z_Construct_UClass_ABBGPlayerController_NoRegister();
BASEBALLGAMEPROJECT_API UClass* Z_Construct_UClass_UBBGChatInput_NoRegister();
BASEBALLGAMEPROJECT_API UClass* Z_Construct_UClass_UBBGTimerWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_BaseballGameProject();
// End Cross Module References

// Begin Class ABBGPlayerController Function ClientRPCPrintChatMessageString
struct BBGPlayerController_eventClientRPCPrintChatMessageString_Parms
{
	FString InChatMessageString;
};
static const FName NAME_ABBGPlayerController_ClientRPCPrintChatMessageString = FName(TEXT("ClientRPCPrintChatMessageString"));
void ABBGPlayerController::ClientRPCPrintChatMessageString(const FString& InChatMessageString)
{
	BBGPlayerController_eventClientRPCPrintChatMessageString_Parms Parms;
	Parms.InChatMessageString=InChatMessageString;
	UFunction* Func = FindFunctionChecked(NAME_ABBGPlayerController_ClientRPCPrintChatMessageString);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABBGPlayerController_ClientRPCPrintChatMessageString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BBGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InChatMessageString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InChatMessageString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABBGPlayerController_ClientRPCPrintChatMessageString_Statics::NewProp_InChatMessageString = { "InChatMessageString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BBGPlayerController_eventClientRPCPrintChatMessageString_Parms, InChatMessageString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InChatMessageString_MetaData), NewProp_InChatMessageString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABBGPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABBGPlayerController_ClientRPCPrintChatMessageString_Statics::NewProp_InChatMessageString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABBGPlayerController_ClientRPCPrintChatMessageString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABBGPlayerController, nullptr, "ClientRPCPrintChatMessageString", nullptr, nullptr, Z_Construct_UFunction_ABBGPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers), sizeof(BBGPlayerController_eventClientRPCPrintChatMessageString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGPlayerController_ClientRPCPrintChatMessageString_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABBGPlayerController_ClientRPCPrintChatMessageString_Statics::Function_MetaDataParams) };
static_assert(sizeof(BBGPlayerController_eventClientRPCPrintChatMessageString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABBGPlayerController_ClientRPCPrintChatMessageString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABBGPlayerController_ClientRPCPrintChatMessageString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABBGPlayerController::execClientRPCPrintChatMessageString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InChatMessageString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRPCPrintChatMessageString_Implementation(Z_Param_InChatMessageString);
	P_NATIVE_END;
}
// End Class ABBGPlayerController Function ClientRPCPrintChatMessageString

// Begin Class ABBGPlayerController Function ServerRPCPrintChatMessageString
struct BBGPlayerController_eventServerRPCPrintChatMessageString_Parms
{
	FString InChatMessageString;
};
static const FName NAME_ABBGPlayerController_ServerRPCPrintChatMessageString = FName(TEXT("ServerRPCPrintChatMessageString"));
void ABBGPlayerController::ServerRPCPrintChatMessageString(const FString& InChatMessageString)
{
	BBGPlayerController_eventServerRPCPrintChatMessageString_Parms Parms;
	Parms.InChatMessageString=InChatMessageString;
	UFunction* Func = FindFunctionChecked(NAME_ABBGPlayerController_ServerRPCPrintChatMessageString);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABBGPlayerController_ServerRPCPrintChatMessageString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/BBGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InChatMessageString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InChatMessageString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABBGPlayerController_ServerRPCPrintChatMessageString_Statics::NewProp_InChatMessageString = { "InChatMessageString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BBGPlayerController_eventServerRPCPrintChatMessageString_Parms, InChatMessageString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InChatMessageString_MetaData), NewProp_InChatMessageString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABBGPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABBGPlayerController_ServerRPCPrintChatMessageString_Statics::NewProp_InChatMessageString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABBGPlayerController_ServerRPCPrintChatMessageString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABBGPlayerController, nullptr, "ServerRPCPrintChatMessageString", nullptr, nullptr, Z_Construct_UFunction_ABBGPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers), sizeof(BBGPlayerController_eventServerRPCPrintChatMessageString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGPlayerController_ServerRPCPrintChatMessageString_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABBGPlayerController_ServerRPCPrintChatMessageString_Statics::Function_MetaDataParams) };
static_assert(sizeof(BBGPlayerController_eventServerRPCPrintChatMessageString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABBGPlayerController_ServerRPCPrintChatMessageString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABBGPlayerController_ServerRPCPrintChatMessageString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABBGPlayerController::execServerRPCPrintChatMessageString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InChatMessageString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRPCPrintChatMessageString_Implementation(Z_Param_InChatMessageString);
	P_NATIVE_END;
}
// End Class ABBGPlayerController Function ServerRPCPrintChatMessageString

// Begin Class ABBGPlayerController
void ABBGPlayerController::StaticRegisterNativesABBGPlayerController()
{
	UClass* Class = ABBGPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientRPCPrintChatMessageString", &ABBGPlayerController::execClientRPCPrintChatMessageString },
		{ "ServerRPCPrintChatMessageString", &ABBGPlayerController::execServerRPCPrintChatMessageString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABBGPlayerController);
UClass* Z_Construct_UClass_ABBGPlayerController_NoRegister()
{
	return ABBGPlayerController::StaticClass();
}
struct Z_Construct_UClass_ABBGPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/BBGPlayerController.h" },
		{ "ModuleRelativePath", "Player/BBGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationText_MetaData[] = {
		{ "Category", "BBGPlayerController" },
		{ "ModuleRelativePath", "Player/BBGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputWidgetClass_MetaData[] = {
		{ "Category", "BBGPlayerController" },
		{ "ModuleRelativePath", "Player/BBGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/BBGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationTextWidgetClass_MetaData[] = {
		{ "Category", "BBGPlayerController" },
		{ "ModuleRelativePath", "Player/BBGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationTextWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/BBGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnTimerWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/BBGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnTimerWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/BBGPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NotificationText;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChatInputWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatInputWidgetInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NotificationTextWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NotificationTextWidgetInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TurnTimerWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnTimerWidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABBGPlayerController_ClientRPCPrintChatMessageString, "ClientRPCPrintChatMessageString" }, // 1131091406
		{ &Z_Construct_UFunction_ABBGPlayerController_ServerRPCPrintChatMessageString, "ServerRPCPrintChatMessageString" }, // 2142693176
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABBGPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ABBGPlayerController_Statics::NewProp_NotificationText = { "NotificationText", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBGPlayerController, NotificationText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationText_MetaData), NewProp_NotificationText_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABBGPlayerController_Statics::NewProp_ChatInputWidgetClass = { "ChatInputWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBGPlayerController, ChatInputWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBBGChatInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputWidgetClass_MetaData), NewProp_ChatInputWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABBGPlayerController_Statics::NewProp_ChatInputWidgetInstance = { "ChatInputWidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBGPlayerController, ChatInputWidgetInstance), Z_Construct_UClass_UBBGChatInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputWidgetInstance_MetaData), NewProp_ChatInputWidgetInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABBGPlayerController_Statics::NewProp_NotificationTextWidgetClass = { "NotificationTextWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBGPlayerController, NotificationTextWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationTextWidgetClass_MetaData), NewProp_NotificationTextWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABBGPlayerController_Statics::NewProp_NotificationTextWidgetInstance = { "NotificationTextWidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBGPlayerController, NotificationTextWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationTextWidgetInstance_MetaData), NewProp_NotificationTextWidgetInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABBGPlayerController_Statics::NewProp_TurnTimerWidgetClass = { "TurnTimerWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBGPlayerController, TurnTimerWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBBGTimerWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnTimerWidgetClass_MetaData), NewProp_TurnTimerWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABBGPlayerController_Statics::NewProp_TurnTimerWidgetInstance = { "TurnTimerWidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBGPlayerController, TurnTimerWidgetInstance), Z_Construct_UClass_UBBGTimerWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnTimerWidgetInstance_MetaData), NewProp_TurnTimerWidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABBGPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBGPlayerController_Statics::NewProp_NotificationText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBGPlayerController_Statics::NewProp_ChatInputWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBGPlayerController_Statics::NewProp_ChatInputWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBGPlayerController_Statics::NewProp_NotificationTextWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBGPlayerController_Statics::NewProp_NotificationTextWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBGPlayerController_Statics::NewProp_TurnTimerWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBGPlayerController_Statics::NewProp_TurnTimerWidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABBGPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABBGPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_BaseballGameProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABBGPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABBGPlayerController_Statics::ClassParams = {
	&ABBGPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABBGPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABBGPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABBGPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABBGPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABBGPlayerController()
{
	if (!Z_Registration_Info_UClass_ABBGPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABBGPlayerController.OuterSingleton, Z_Construct_UClass_ABBGPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABBGPlayerController.OuterSingleton;
}
template<> BASEBALLGAMEPROJECT_API UClass* StaticClass<ABBGPlayerController>()
{
	return ABBGPlayerController::StaticClass();
}
void ABBGPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_NotificationText(TEXT("NotificationText"));
	const bool bIsValid = true
		&& Name_NotificationText == ClassReps[(int32)ENetFields_Private::NotificationText].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABBGPlayerController"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABBGPlayerController);
ABBGPlayerController::~ABBGPlayerController() {}
// End Class ABBGPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Player_BBGPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABBGPlayerController, ABBGPlayerController::StaticClass, TEXT("ABBGPlayerController"), &Z_Registration_Info_UClass_ABBGPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABBGPlayerController), 1637325499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Player_BBGPlayerController_h_3660822598(TEXT("/Script/BaseballGameProject"),
	Z_CompiledInDeferFile_FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Player_BBGPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Player_BBGPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
