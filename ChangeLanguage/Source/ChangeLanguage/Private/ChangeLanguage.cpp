// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChangeLanguage.h"
#include "LevelEditor.h"
#include "BlueprintEditorModule.h"
#include "InternationalizationSettingsModel.h"
#include "Kismet/KismetInternationalizationLibrary.h"

#define LOCTEXT_NAMESPACE "FChangeLanguageModule"

void FChangeLanguageModule::StartupModule()
{
    // Register the commands
    ChangeLanguageDeveloperSettings = const_cast<UChangeLanguageDeveloperSettings*>(GetDefault<UChangeLanguageDeveloperSettings>());
    auto Lambada =
        ([&]()
            {
                // Simply log for this example
                FString LCurrentLanguage = UKismetInternationalizationLibrary::GetCurrentLanguage();
                FString NewLanguage = "";
                if (LCurrentLanguage == ChangeLanguageDeveloperSettings->MainLanguage)
                {
                    NewLanguage = ChangeLanguageDeveloperSettings->SupportLanguage;
                }
                else
                {
                    NewLanguage = ChangeLanguageDeveloperSettings->MainLanguage;
                }

                UKismetInternationalizationLibrary::SetCurrentLanguageAndLocale(NewLanguage, true);

                UInternationalizationSettingsModel* InternationalizationSettingsModel = GetMutableDefault<UInternationalizationSettingsModel>();
                InternationalizationSettingsModel->SetEditorLanguage(NewLanguage);
                FInternationalization& I18N = FInternationalization::Get();
                I18N.SetCurrentLanguage(NewLanguage);

                for (TObjectIterator<UClass> ClassIt; ClassIt; ++ClassIt)
                {
                    UClass* CurrentClass = *ClassIt;

                    if (UEdGraphSchema* Schema = Cast<UEdGraphSchema>(CurrentClass->GetDefaultObject()))
                    {
                        Schema->ForceVisualizationCacheClear();
                    }
                }
            });
    
    auto UpdateSettings =
        ([&](UObject* Object, FPropertyChangedEvent& PropertyChangedEvent)
            {
                ChangeLanguageProcessor->ActiveKeys.Empty();
                ChangeLanguageProcessor->KeysToActivate = ChangeLanguageDeveloperSettings->ChangeLanguageComboKeys;
            });

    ChangeLanguageProcessor = MakeShared<FComboActionInputProcessor>();
    ChangeLanguageDeveloperSettings->OnSettingChanged().AddLambda(UpdateSettings);
    ChangeLanguageProcessor->ActionActiveDelegate.BindLambda(Lambada);
    ChangeLanguageProcessor->ActiveKeys.Empty();
    ChangeLanguageProcessor->KeysToActivate = ChangeLanguageDeveloperSettings->ChangeLanguageComboKeys;
    FSlateApplication::Get().RegisterInputPreProcessor(ChangeLanguageProcessor);
};

void FChangeLanguageModule::ShutdownModule()
{
    // Unregister the commands
}


#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FChangeLanguageModule, ChangeLanguage)

void FComboActionInputProcessor::Tick(const float DeltaTime, FSlateApplication& SlateApp, TSharedRef<ICursor> Cursor)
{
}

bool FComboActionInputProcessor::HandleKeyUpEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent)
{
    ActiveKeys.Remove(InKeyEvent.GetKey());
    return CheckKey();
}

bool FComboActionInputProcessor::HandleKeyDownEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent)
{
    ActiveKeys.Add(InKeyEvent.GetKey());
    return CheckKey();
}

bool FComboActionInputProcessor::CheckKey()
{
    for (FKey LKey : KeysToActivate)
    {
        if (!ActiveKeys.Contains(LKey))
        {
            return false;
        }
    }
    ActionActiveDelegate.Execute();
    return true;
}

FName UChangeLanguageDeveloperSettings::GetCategoryName() const
{
    return TEXT("Plugins");
}


FName UChangeLanguageDeveloperSettings::GetSectionName() const
{
    return TEXT("Change Language Settings");;
}
