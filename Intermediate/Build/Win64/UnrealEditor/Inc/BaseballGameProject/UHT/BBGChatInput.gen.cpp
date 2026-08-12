// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseballGameProject/UI/BBGChatInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBBGChatInput() {}

// Begin Cross Module References
BASEBALLGAMEPROJECT_API UClass* Z_Construct_UClass_UBBGChatInput();
BASEBALLGAMEPROJECT_API UClass* Z_Construct_UClass_UBBGChatInput_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BaseballGameProject();
// End Cross Module References

// Begin Class UBBGChatInput Function OnChatInputTextCommitted
struct Z_Construct_UFunction_UBBGChatInput_OnChatInputTextCommitted_Statics
{
	struct BBGChatInput_eventOnChatInputTextCommitted_Parms
	{
		FText InText;
		TEnumAsByte<ETextCommit::Type> CommitInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/BBGChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBBGChatInput_OnChatInputTextCommitted_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BBGChatInput_eventOnChatInputTextCommitted_Parms, InText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InText_MetaData), NewProp_InText_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBBGChatInput_OnChatInputTextCommitted_Statics::NewProp_CommitInfo = { "CommitInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BBGChatInput_eventOnChatInputTextCommitted_Parms, CommitInfo), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBBGChatInput_OnChatInputTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBBGChatInput_OnChatInputTextCommitted_Statics::NewProp_InText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBBGChatInput_OnChatInputTextCommitted_Statics::NewProp_CommitInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBBGChatInput_OnChatInputTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBBGChatInput_OnChatInputTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBBGChatInput, nullptr, "OnChatInputTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UBBGChatInput_OnChatInputTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBBGChatInput_OnChatInputTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBBGChatInput_OnChatInputTextCommitted_Statics::BBGChatInput_eventOnChatInputTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBBGChatInput_OnChatInputTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBBGChatInput_OnChatInputTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBBGChatInput_OnChatInputTextCommitted_Statics::BBGChatInput_eventOnChatInputTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBBGChatInput_OnChatInputTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBBGChatInput_OnChatInputTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBBGChatInput::execOnChatInputTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnChatInputTextCommitted(Z_Param_Out_InText,ETextCommit::Type(Z_Param_CommitInfo));
	P_NATIVE_END;
}
// End Class UBBGChatInput Function OnChatInputTextCommitted

// Begin Class UBBGChatInput
void UBBGChatInput::StaticRegisterNativesUBBGChatInput()
{
	UClass* Class = UBBGChatInput::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnChatInputTextCommitted", &UBBGChatInput::execOnChatInputTextCommitted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBBGChatInput);
UClass* Z_Construct_UClass_UBBGChatInput_NoRegister()
{
	return UBBGChatInput::StaticClass();
}
struct Z_Construct_UClass_UBBGChatInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/BBGChatInput.h" },
		{ "ModuleRelativePath", "UI/BBGChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextBox_ChatInput_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BBGChatInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditableTextBox_ChatInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBBGChatInput_OnChatInputTextCommitted, "OnChatInputTextCommitted" }, // 2381635836
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBBGChatInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBBGChatInput_Statics::NewProp_EditableTextBox_ChatInput = { "EditableTextBox_ChatInput", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBBGChatInput, EditableTextBox_ChatInput), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditableTextBox_ChatInput_MetaData), NewProp_EditableTextBox_ChatInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBBGChatInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBBGChatInput_Statics::NewProp_EditableTextBox_ChatInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBBGChatInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBBGChatInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BaseballGameProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBBGChatInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBBGChatInput_Statics::ClassParams = {
	&UBBGChatInput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBBGChatInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBBGChatInput_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBBGChatInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UBBGChatInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBBGChatInput()
{
	if (!Z_Registration_Info_UClass_UBBGChatInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBBGChatInput.OuterSingleton, Z_Construct_UClass_UBBGChatInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBBGChatInput.OuterSingleton;
}
template<> BASEBALLGAMEPROJECT_API UClass* StaticClass<UBBGChatInput>()
{
	return UBBGChatInput::StaticClass();
}
UBBGChatInput::UBBGChatInput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBBGChatInput);
UBBGChatInput::~UBBGChatInput() {}
// End Class UBBGChatInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_UI_BBGChatInput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBBGChatInput, UBBGChatInput::StaticClass, TEXT("UBBGChatInput"), &Z_Registration_Info_UClass_UBBGChatInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBBGChatInput), 636882117U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_UI_BBGChatInput_h_3947002228(TEXT("/Script/BaseballGameProject"),
	Z_CompiledInDeferFile_FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_UI_BBGChatInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_UI_BBGChatInput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
