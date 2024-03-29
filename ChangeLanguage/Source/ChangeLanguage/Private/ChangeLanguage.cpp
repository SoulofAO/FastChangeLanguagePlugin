// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChangeLanguage.h"
#include "LevelEditor.h"
#include "ChangeLanguageBPLibrary.h"
#include "BlueprintEditorModule.h"
#define LOCTEXT_NAMESPACE "FChangeLanguageModule"

void FChangeLanguageModule::StartupModule()
{
    // Register the commands
    FChangeLanguageCommand::Register();

    auto Lambada =
        FExecuteAction::CreateLambda([]()
            {
                // Simply log for this example
                UChangeLanguageDeveloperSettings* SGSettings = const_cast<UChangeLanguageDeveloperSettings*>(GetDefault<UChangeLanguageDeveloperSettings>());
                FString LCurrentLanguage = UChangeLanguageBPLibrary::GetEditorLanguage();
                if (LCurrentLanguage == SGSettings->MainLanguage)
                {
                    UChangeLanguageBPLibrary::ChangeEditorLanguage(SGSettings->SupportLanguage);
                }
                else
                {
                    UChangeLanguageBPLibrary::ChangeEditorLanguage(SGSettings->MainLanguage);
                }
            });
 
    FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
    const FLevelEditorModule& LevelEditor = FModuleManager::GetModuleChecked<FLevelEditorModule>("LevelEditor");

    const TSharedRef<FUICommandList> Commands = LevelEditor.GetGlobalLevelEditorActions();

    Commands->MapAction(
        FChangeLanguageCommand::Get().ChangeLanguageEntry, Lambada);


    FModuleManager::LoadModuleChecked<FBlueprintEditorModule>("Kismet");
    const FBlueprintEditorModule& BlueprintEditorModule = FModuleManager::GetModuleChecked<FBlueprintEditorModule>("Kismet");

    BlueprintEditorModule.GetsSharedBlueprintEditorCommands().Get().MapAction(
        FChangeLanguageCommand::Get().ChangeLanguageEntry, Lambada);
}

void FChangeLanguageModule::ShutdownModule()
{
    // Unregister the commands
    FChangeLanguageCommand::Unregister();
}


#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FChangeLanguageModule, ChangeLanguage)