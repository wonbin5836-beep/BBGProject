// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseballGameProject/UI/BBGTimerWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBBGTimerWidget() {}

// Begin Cross Module References
BASEBALLGAMEPROJECT_API UClass* Z_Construct_UClass_UBBGTimerWidget();
BASEBALLGAMEPROJECT_API UClass* Z_Construct_UClass_UBBGTimerWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BaseballGameProject();
// End Cross Module References

// Begin Class UBBGTimerWidget
void UBBGTimerWidget::StaticRegisterNativesUBBGTimerWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBBGTimerWidget);
UClass* Z_Construct_UClass_UBBGTimerWidget_NoRegister()
{
	return UBBGTimerWidget::StaticClass();
}
struct Z_Construct_UClass_UBBGTimerWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/BBGTimerWidget.h" },
		{ "ModuleRelativePath", "UI/BBGTimerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_TurnPlayer_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BBGTimerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_RemainingTime_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BBGTimerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_TurnTime_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BBGTimerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_TurnPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_RemainingTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar_TurnTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBBGTimerWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBBGTimerWidget_Statics::NewProp_TextBlock_TurnPlayer = { "TextBlock_TurnPlayer", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBBGTimerWidget, TextBlock_TurnPlayer), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_TurnPlayer_MetaData), NewProp_TextBlock_TurnPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBBGTimerWidget_Statics::NewProp_TextBlock_RemainingTime = { "TextBlock_RemainingTime", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBBGTimerWidget, TextBlock_RemainingTime), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_RemainingTime_MetaData), NewProp_TextBlock_RemainingTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBBGTimerWidget_Statics::NewProp_ProgressBar_TurnTime = { "ProgressBar_TurnTime", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBBGTimerWidget, ProgressBar_TurnTime), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBar_TurnTime_MetaData), NewProp_ProgressBar_TurnTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBBGTimerWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBBGTimerWidget_Statics::NewProp_TextBlock_TurnPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBBGTimerWidget_Statics::NewProp_TextBlock_RemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBBGTimerWidget_Statics::NewProp_ProgressBar_TurnTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBBGTimerWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBBGTimerWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BaseballGameProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBBGTimerWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBBGTimerWidget_Statics::ClassParams = {
	&UBBGTimerWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBBGTimerWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBBGTimerWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBBGTimerWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBBGTimerWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBBGTimerWidget()
{
	if (!Z_Registration_Info_UClass_UBBGTimerWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBBGTimerWidget.OuterSingleton, Z_Construct_UClass_UBBGTimerWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBBGTimerWidget.OuterSingleton;
}
template<> BASEBALLGAMEPROJECT_API UClass* StaticClass<UBBGTimerWidget>()
{
	return UBBGTimerWidget::StaticClass();
}
UBBGTimerWidget::UBBGTimerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBBGTimerWidget);
UBBGTimerWidget::~UBBGTimerWidget() {}
// End Class UBBGTimerWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_UI_BBGTimerWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBBGTimerWidget, UBBGTimerWidget::StaticClass, TEXT("UBBGTimerWidget"), &Z_Registration_Info_UClass_UBBGTimerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBBGTimerWidget), 455380561U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_UI_BBGTimerWidget_h_349566352(TEXT("/Script/BaseballGameProject"),
	Z_CompiledInDeferFile_FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_UI_BBGTimerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_UI_BBGTimerWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
