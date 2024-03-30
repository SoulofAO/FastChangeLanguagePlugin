// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChangeLanguage.h"
#include "LevelEditor.h"
#include "BlueprintEditorModule.h"
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
                if (LCurrentLanguage == ChangeLanguageDeveloperSettings->MainLanguage)
                {
                    UKismetInternationalizationLibrary::SetCurrentLanguageAndLocale(ChangeLanguageDeveloperSettings->SupportLanguage, true);
                }
                else
                {
                    UKismetInternationalizationLibrary::SetCurrentLanguageAndLocale(ChangeLanguageDeveloperSettings->MainLanguage, true);
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
    FSlateApplication::Get().RegisterInputPreProcessor(ChangeLanguageProcessor, 0);
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
    CheckKey();
    return true;
}

bool FComboActionInputProcessor::HandleKeyDownEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent)
{
    ActiveKeys.Add(InKeyEvent.GetKey());
    CheckKey();
    return true;
}

void FComboActionInputProcessor::CheckKey()
{
    for (FKey LKey : KeysToActivate)
    {
        if (!ActiveKeys.Contains(LKey))
        {
            return;
        }
    }
    ActionActiveDelegate.Execute();
}

