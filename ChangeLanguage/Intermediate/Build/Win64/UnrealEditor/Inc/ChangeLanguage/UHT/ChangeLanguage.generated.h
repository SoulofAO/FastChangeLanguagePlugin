// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChangeLanguage.h"

#ifdef CHANGELANGUAGE_ChangeLanguage_generated_h
#error "ChangeLanguage.generated.h already included, missing '#pragma once' in ChangeLanguage.h"
#endif
#define CHANGELANGUAGE_ChangeLanguage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChangeLanguageDeveloperSettings *****************************************
struct Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics;
CHANGELANGUAGE_API UClass* Z_Construct_UClass_UChangeLanguageDeveloperSettings_NoRegister();

#define FID_HostProject_Plugins_ChangeLanguage_Source_ChangeLanguage_Public_ChangeLanguage_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChangeLanguageDeveloperSettings(); \
	friend struct ::Z_Construct_UClass_UChangeLanguageDeveloperSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHANGELANGUAGE_API UClass* ::Z_Construct_UClass_UChangeLanguageDeveloperSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UChangeLanguageDeveloperSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChangeLanguage"), Z_Construct_UClass_UChangeLanguageDeveloperSettings_NoRegister) \
	DECLARE_SERIALIZER(UChangeLanguageDeveloperSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_HostProject_Plugins_ChangeLanguage_Source_ChangeLanguage_Public_ChangeLanguage_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChangeLanguageDeveloperSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChangeLanguageDeveloperSettings(UChangeLanguageDeveloperSettings&&) = delete; \
	UChangeLanguageDeveloperSettings(const UChangeLanguageDeveloperSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChangeLanguageDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChangeLanguageDeveloperSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChangeLanguageDeveloperSettings) \
	NO_API virtual ~UChangeLanguageDeveloperSettings();


#define FID_HostProject_Plugins_ChangeLanguage_Source_ChangeLanguage_Public_ChangeLanguage_h_15_PROLOG
#define FID_HostProject_Plugins_ChangeLanguage_Source_ChangeLanguage_Public_ChangeLanguage_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ChangeLanguage_Source_ChangeLanguage_Public_ChangeLanguage_h_18_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ChangeLanguage_Source_ChangeLanguage_Public_ChangeLanguage_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChangeLanguageDeveloperSettings;

// ********** End Class UChangeLanguageDeveloperSettings *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ChangeLanguage_Source_ChangeLanguage_Public_ChangeLanguage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
