// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChangeLanguageBPLibrary.h"
#include "ChangeLanguage.h"
#include "InternationalizationSettingsModel.h"

void UChangeLanguageBPLibrary::ChangeEditorLanguage(FString LanguageName)
{
	UInternationalizationSettingsModel* InternationalizationSettingsModel = GetMutableDefault<UInternationalizationSettingsModel>();
	InternationalizationSettingsModel->SetEditorLanguage(LanguageName);
	FInternationalization& I18N = FInternationalization::Get();
	I18N.SetCurrentLanguage(LanguageName);

		// Find all Schemas and force a visualization cache clear
	for (TObjectIterator<UClass> ClassIt; ClassIt; ++ClassIt)
	{
		UClass* CurrentClass = *ClassIt;

		if (UEdGraphSchema* Schema = Cast<UEdGraphSchema>(CurrentClass->GetDefaultObject()))
		{
			Schema->ForceVisualizationCacheClear();
		}
	}
}

FString UChangeLanguageBPLibrary::GetEditorLanguage()
{
	UInternationalizationSettingsModel* InternationalizationSettingsModel = GetMutableDefault<UInternationalizationSettingsModel>();
	FString LString;
	InternationalizationSettingsModel->GetEditorLanguage(LString);
	return LString;
}

