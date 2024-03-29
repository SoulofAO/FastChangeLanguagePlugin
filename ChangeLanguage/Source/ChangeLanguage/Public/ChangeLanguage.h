// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"
#include "Framework/Commands/Commands.h"
#include "Styling/AppStyle.h"


class FChangeLanguageModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

};

#define LOCTEXT_NAMESPACE "MyCustomCommands"
class FChangeLanguageCommand : public TCommands<FChangeLanguageCommand >
{
public:

    FChangeLanguageCommand()
        : TCommands<FChangeLanguageCommand>(
            // Unique name of the commands set
            "ChangeLanguageCommand",

            // Human readable name (will be displayed in the editor preferences window)
            LOCTEXT("ChangeLanguageCommandName", "Change Language Command"),

            // Name of the parent commands set this one is extending (if any)
            NAME_None,

            // Name of the style set from which command icons should be loaded (if any)
            FAppStyle::GetAppStyleSetName()
        )
    {}

    // Commands should be declared as members
    TSharedPtr<FUICommandInfo> ChangeLanguageEntry;

    // RegisterCommands should be overridden to define the commands
    void RegisterCommands() override
    {
        UI_COMMAND(ChangeLanguageEntry, "Change Language", "Tooltip for Change Language",
            EUserInterfaceActionType::Button, FInputChord(EKeys::Z,EModifierKey::Shift));
    }
};
#undef LOCTEXT_NAMESPACE
