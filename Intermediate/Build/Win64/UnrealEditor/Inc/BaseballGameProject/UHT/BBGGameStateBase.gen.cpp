// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseballGameProject/Core/BBGGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBBGGameStateBase() {}

// Begin Cross Module References
BASEBALLGAMEPROJECT_API UClass* Z_Construct_UClass_ABBGGameStateBase();
BASEBALLGAMEPROJECT_API UClass* Z_Construct_UClass_ABBGGameStateBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
UPackage* Z_Construct_UPackage__Script_BaseballGameProject();
// End Cross Module References

// Begin Class ABBGGameStateBase Function MulticastRPCBroadcastLoginMessage
struct BBGGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms
{
	FString InNameString;
};
static const FName NAME_ABBGGameStateBase_MulticastRPCBroadcastLoginMessage = FName(TEXT("MulticastRPCBroadcastLoginMessage"));
void ABBGGameStateBase::MulticastRPCBroadcastLoginMessage(const FString& InNameString)
{
	BBGGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms Parms;
	Parms.InNameString=InNameString;
	UFunction* Func = FindFunctionChecked(NAME_ABBGGameStateBase_MulticastRPCBroadcastLoginMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABBGGameStateBase_MulticastRPCBroadcastLoginMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Core/BBGGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNameString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InNameString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABBGGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::NewProp_InNameString = { "InNameString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BBGGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms, InNameString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNameString_MetaData), NewProp_InNameString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABBGGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABBGGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::NewProp_InNameString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABBGGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABBGGameStateBase, nullptr, "MulticastRPCBroadcastLoginMessage", nullptr, nullptr, Z_Construct_UFunction_ABBGGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers), sizeof(BBGGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABBGGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABBGGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(BBGGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABBGGameStateBase_MulticastRPCBroadcastLoginMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABBGGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABBGGameStateBase::execMulticastRPCBroadcastLoginMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InNameString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastRPCBroadcastLoginMessage_Implementation(Z_Param_InNameString);
	P_NATIVE_END;
}
// End Class ABBGGameStateBase Function MulticastRPCBroadcastLoginMessage

// Begin Class ABBGGameStateBase
void ABBGGameStateBase::StaticRegisterNativesABBGGameStateBase()
{
	UClass* Class = ABBGGameStateBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MulticastRPCBroadcastLoginMessage", &ABBGGameStateBase::execMulticastRPCBroadcastLoginMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABBGGameStateBase);
UClass* Z_Construct_UClass_ABBGGameStateBase_NoRegister()
{
	return ABBGGameStateBase::StaticClass();
}
struct Z_Construct_UClass_ABBGGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/BBGGameStateBase.h" },
		{ "ModuleRelativePath", "Core/BBGGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTurnPlayerName_MetaData[] = {
		{ "Category", "Baseball Game|Turn" },
		{ "ModuleRelativePath", "Core/BBGGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnDurationSeconds_MetaData[] = {
		{ "Category", "Baseball Game|Turn" },
		{ "ModuleRelativePath", "Core/BBGGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnEndServerTime_MetaData[] = {
		{ "Category", "Baseball Game|Turn" },
		{ "ModuleRelativePath", "Core/BBGGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTurnActive_MetaData[] = {
		{ "Category", "Baseball Game|Turn" },
		{ "ModuleRelativePath", "Core/BBGGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentTurnPlayerName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnDurationSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnEndServerTime;
	static void NewProp_bIsTurnActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTurnActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABBGGameStateBase_MulticastRPCBroadcastLoginMessage, "MulticastRPCBroadcastLoginMessage" }, // 2330581006
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABBGGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABBGGameStateBase_Statics::NewProp_CurrentTurnPlayerName = { "CurrentTurnPlayerName", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBGGameStateBase, CurrentTurnPlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTurnPlayerName_MetaData), NewProp_CurrentTurnPlayerName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABBGGameStateBase_Statics::NewProp_TurnDurationSeconds = { "TurnDurationSeconds", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBGGameStateBase, TurnDurationSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnDurationSeconds_MetaData), NewProp_TurnDurationSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABBGGameStateBase_Statics::NewProp_TurnEndServerTime = { "TurnEndServerTime", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBGGameStateBase, TurnEndServerTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnEndServerTime_MetaData), NewProp_TurnEndServerTime_MetaData) };
void Z_Construct_UClass_ABBGGameStateBase_Statics::NewProp_bIsTurnActive_SetBit(void* Obj)
{
	((ABBGGameStateBase*)Obj)->bIsTurnActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABBGGameStateBase_Statics::NewProp_bIsTurnActive = { "bIsTurnActive", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABBGGameStateBase), &Z_Construct_UClass_ABBGGameStateBase_Statics::NewProp_bIsTurnActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTurnActive_MetaData), NewProp_bIsTurnActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABBGGameStateBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBGGameStateBase_Statics::NewProp_CurrentTurnPlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBGGameStateBase_Statics::NewProp_TurnDurationSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBGGameStateBase_Statics::NewProp_TurnEndServerTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBGGameStateBase_Statics::NewProp_bIsTurnActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABBGGameStateBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABBGGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BaseballGameProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABBGGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABBGGameStateBase_Statics::ClassParams = {
	&ABBGGameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABBGGameStateBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABBGGameStateBase_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABBGGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABBGGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABBGGameStateBase()
{
	if (!Z_Registration_Info_UClass_ABBGGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABBGGameStateBase.OuterSingleton, Z_Construct_UClass_ABBGGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABBGGameStateBase.OuterSingleton;
}
template<> BASEBALLGAMEPROJECT_API UClass* StaticClass<ABBGGameStateBase>()
{
	return ABBGGameStateBase::StaticClass();
}
void ABBGGameStateBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentTurnPlayerName(TEXT("CurrentTurnPlayerName"));
	static const FName Name_TurnDurationSeconds(TEXT("TurnDurationSeconds"));
	static const FName Name_TurnEndServerTime(TEXT("TurnEndServerTime"));
	static const FName Name_bIsTurnActive(TEXT("bIsTurnActive"));
	const bool bIsValid = true
		&& Name_CurrentTurnPlayerName == ClassReps[(int32)ENetFields_Private::CurrentTurnPlayerName].Property->GetFName()
		&& Name_TurnDurationSeconds == ClassReps[(int32)ENetFields_Private::TurnDurationSeconds].Property->GetFName()
		&& Name_TurnEndServerTime == ClassReps[(int32)ENetFields_Private::TurnEndServerTime].Property->GetFName()
		&& Name_bIsTurnActive == ClassReps[(int32)ENetFields_Private::bIsTurnActive].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABBGGameStateBase"));
}
ABBGGameStateBase::ABBGGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABBGGameStateBase);
ABBGGameStateBase::~ABBGGameStateBase() {}
// End Class ABBGGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Core_BBGGameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABBGGameStateBase, ABBGGameStateBase::StaticClass, TEXT("ABBGGameStateBase"), &Z_Registration_Info_UClass_ABBGGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABBGGameStateBase), 323717684U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Core_BBGGameStateBase_h_983762560(TEXT("/Script/BaseballGameProject"),
	Z_CompiledInDeferFile_FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Core_BBGGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Core_BBGGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
