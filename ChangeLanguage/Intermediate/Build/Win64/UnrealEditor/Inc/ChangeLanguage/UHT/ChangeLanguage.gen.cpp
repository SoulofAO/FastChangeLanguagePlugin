// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../TestUE54Project/Plugins/ChangeLanguage/Source/ChangeLanguage/Public/ChangeLanguage.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChangeLanguage() {}

// Begin Cross Module References
CHANGELANGUAGE_API UClass* Z_Construct_UClass_UChangeLanguageDeveloperSettings();
CHANGELANGUAGE_API UClass* Z_Construct_UClass_UChangeLanguageDeveloperSettings_NoRegister();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UPackage* Z_Construct_UPackage__Script_ChangeLanguage();
// End Cross Module References

// Begin Class UChangeLanguageDeveloperSettings
void UChangeLanguageDeveloperSettings::StaticRegisterNativesUChangeLanguageDeveloperSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChangeLanguageDeveloperSettings);
UClass* Z_Construct_UClass_UChangeLanguageDeveloperSettings_NoRegister()
{
	return UChangeLanguageDeveloperSettings::StaticClass();
}
struct Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ChangeLanguage.h" },
		{ "ModuleRelativePath", "Public/ChangeLanguage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainLanguage_MetaData[] = {
		{ "Category", "ChangeLanguageDeveloperSettings" },
		{ "ModuleRelativePath", "Public/ChangeLanguage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportLanguage_MetaData[] = {
		{ "Category", "ChangeLanguageDeveloperSettings" },
		{ "ModuleRelativePath", "Public/ChangeLanguage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeLanguageComboKeys_MetaData[] = {
		{ "Category", "ChangeLanguageDeveloperSettings" },
		{ "ModuleRelativePath", "Public/ChangeLanguage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MainLanguage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SupportLanguage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChangeLanguageComboKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChangeLanguageComboKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChangeLanguageDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_MainLanguage = { "MainLanguage", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChangeLanguageDeveloperSettings, MainLanguage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainLanguage_MetaData), NewProp_MainLanguage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_SupportLanguage = { "SupportLanguage", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChangeLanguageDeveloperSettings, SupportLanguage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportLanguage_MetaData), NewProp_SupportLanguage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_ChangeLanguageComboKeys_Inner = { "ChangeLanguageComboKeys", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_ChangeLanguageComboKeys = { "ChangeLanguageComboKeys", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChangeLanguageDeveloperSettings, ChangeLanguageComboKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeLanguageComboKeys_MetaData), NewProp_ChangeLanguageComboKeys_MetaData) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_MainLanguage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_SupportLanguage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_ChangeLanguageComboKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_ChangeLanguageComboKeys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_ChangeLanguage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::ClassParams = {
	&UChangeLanguageDeveloperSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChangeLanguageDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_UChangeLanguageDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChangeLanguageDeveloperSettings.OuterSingleton, Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChangeLanguageDeveloperSettings.OuterSingleton;
}
template<> CHANGELANGUAGE_API UClass* StaticClass<UChangeLanguageDeveloperSettings>()
{
	return UChangeLanguageDeveloperSettings::StaticClass();
}
UChangeLanguageDeveloperSettings::UChangeLanguageDeveloperSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChangeLanguageDeveloperSettings);
UChangeLanguageDeveloperSettings::~UChangeLanguageDeveloperSettings() {}
// End Class UChangeLanguageDeveloperSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestUE54Project_Plugins_ChangeLanguage_Source_ChangeLanguage_Public_ChangeLanguage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChangeLanguageDeveloperSettings, UChangeLanguageDeveloperSettings::StaticClass, TEXT("UChangeLanguageDeveloperSettings"), &Z_Registration_Info_UClass_UChangeLanguageDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChangeLanguageDeveloperSettings), 1078265267U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestUE54Project_Plugins_ChangeLanguage_Source_ChangeLanguage_Public_ChangeLanguage_h_31158568(TEXT("/Script/ChangeLanguage"),
	Z_CompiledInDeferFile_FID_TestUE54Project_Plugins_ChangeLanguage_Source_ChangeLanguage_Public_ChangeLanguage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestUE54Project_Plugins_ChangeLanguage_Source_ChangeLanguage_Public_ChangeLanguage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
