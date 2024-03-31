// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChangeLanguage/Public/ChangeLanguage.h"
#include "InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChangeLanguage() {}
// Cross Module References
	CHANGELANGUAGE_API UClass* Z_Construct_UClass_UChangeLanguageDeveloperSettings();
	CHANGELANGUAGE_API UClass* Z_Construct_UClass_UChangeLanguageDeveloperSettings_NoRegister();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_ChangeLanguage();
// End Cross Module References
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
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainLanguage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MainLanguage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportLanguage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SupportLanguage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChangeLanguageComboKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeLanguageComboKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChangeLanguageComboKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ChangeLanguage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChangeLanguage.h" },
		{ "ModuleRelativePath", "Public/ChangeLanguage.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_MainLanguage_MetaData[] = {
		{ "Category", "Change Language Settings" },
		{ "ModuleRelativePath", "Public/ChangeLanguage.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_MainLanguage = { "MainLanguage", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChangeLanguageDeveloperSettings, MainLanguage), METADATA_PARAMS(Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_MainLanguage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_MainLanguage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_SupportLanguage_MetaData[] = {
		{ "Category", "Change Language Settings" },
		{ "ModuleRelativePath", "Public/ChangeLanguage.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_SupportLanguage = { "SupportLanguage", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChangeLanguageDeveloperSettings, SupportLanguage), METADATA_PARAMS(Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_SupportLanguage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_SupportLanguage_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_ChangeLanguageComboKeys_Inner = { "ChangeLanguageComboKeys", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_ChangeLanguageComboKeys_MetaData[] = {
		{ "Category", "Change Language Settings" },
		{ "ModuleRelativePath", "Public/ChangeLanguage.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_ChangeLanguageComboKeys = { "ChangeLanguageComboKeys", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChangeLanguageDeveloperSettings, ChangeLanguageComboKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_ChangeLanguageComboKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_ChangeLanguageComboKeys_MetaData)) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_MainLanguage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_SupportLanguage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_ChangeLanguageComboKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::NewProp_ChangeLanguageComboKeys,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChangeLanguageDeveloperSettings>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics::Class_MetaDataParams))
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChangeLanguageDeveloperSettings);
	UChangeLanguageDeveloperSettings::~UChangeLanguageDeveloperSettings() {}
	struct Z_CompiledInDeferFile_FID_PluginPackage_UE51_ChangeLanguage_HostProject_Plugins_ChangeLanguage_Source_ChangeLanguage_Public_ChangeLanguage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginPackage_UE51_ChangeLanguage_HostProject_Plugins_ChangeLanguage_Source_ChangeLanguage_Public_ChangeLanguage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChangeLanguageDeveloperSettings, UChangeLanguageDeveloperSettings::StaticClass, TEXT("UChangeLanguageDeveloperSettings"), &Z_Registration_Info_UClass_UChangeLanguageDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChangeLanguageDeveloperSettings), 713966478U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginPackage_UE51_ChangeLanguage_HostProject_Plugins_ChangeLanguage_Source_ChangeLanguage_Public_ChangeLanguage_h_850053576(TEXT("/Script/ChangeLanguage"),
		Z_CompiledInDeferFile_FID_PluginPackage_UE51_ChangeLanguage_HostProject_Plugins_ChangeLanguage_Source_ChangeLanguage_Public_ChangeLanguage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginPackage_UE51_ChangeLanguage_HostProject_Plugins_ChangeLanguage_Source_ChangeLanguage_Public_ChangeLanguage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
