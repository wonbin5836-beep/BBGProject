// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseballGameProject/Core/BBGGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBBGGameModeBase() {}

// Begin Cross Module References
BASEBALLGAMEPROJECT_API UClass* Z_Construct_UClass_ABBGGameModeBase();
BASEBALLGAMEPROJECT_API UClass* Z_Construct_UClass_ABBGGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BaseballGameProject();
// End Cross Module References

// Begin Class ABBGGameModeBase
void ABBGGameModeBase::StaticRegisterNativesABBGGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABBGGameModeBase);
UClass* Z_Construct_UClass_ABBGGameModeBase_NoRegister()
{
	return ABBGGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ABBGGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/BBGGameModeBase.h" },
		{ "ModuleRelativePath", "Core/BBGGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnTimeLimitSeconds_MetaData[] = {
		{ "Category", "Baseball Game|Turn" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Core/BBGGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnTimeLimitSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABBGGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABBGGameModeBase_Statics::NewProp_TurnTimeLimitSeconds = { "TurnTimeLimitSeconds", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBGGameModeBase, TurnTimeLimitSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnTimeLimitSeconds_MetaData), NewProp_TurnTimeLimitSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABBGGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBGGameModeBase_Statics::NewProp_TurnTimeLimitSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABBGGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABBGGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BaseballGameProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABBGGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABBGGameModeBase_Statics::ClassParams = {
	&ABBGGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABBGGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABBGGameModeBase_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABBGGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABBGGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABBGGameModeBase()
{
	if (!Z_Registration_Info_UClass_ABBGGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABBGGameModeBase.OuterSingleton, Z_Construct_UClass_ABBGGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABBGGameModeBase.OuterSingleton;
}
template<> BASEBALLGAMEPROJECT_API UClass* StaticClass<ABBGGameModeBase>()
{
	return ABBGGameModeBase::StaticClass();
}
ABBGGameModeBase::ABBGGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABBGGameModeBase);
ABBGGameModeBase::~ABBGGameModeBase() {}
// End Class ABBGGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Core_BBGGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABBGGameModeBase, ABBGGameModeBase::StaticClass, TEXT("ABBGGameModeBase"), &Z_Registration_Info_UClass_ABBGGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABBGGameModeBase), 3030132726U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Core_BBGGameModeBase_h_766403909(TEXT("/Script/BaseballGameProject"),
	Z_CompiledInDeferFile_FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Core_BBGGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_un5_BaseballGameProject_Source_BaseballGameProject_Core_BBGGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
