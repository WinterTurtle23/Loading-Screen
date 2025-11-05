// Copyright Epic Games, Inc. All Rights Reserved.

#include "LoadingScreen.h"
#include "LoadingScreenLibrary.h"
#include "MoviePlayer.h"
#include "Blueprint/UserWidget.h"

#define LOCTEXT_NAMESPACE "FLoadingScreenModule"

void FLoadingScreenModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	if (GetMoviePlayer())
	{
		GetMoviePlayer()->OnPrepareLoadingScreen().AddRaw(this, &FLoadingScreenModule::HandlePrepareLoadingScreen);
	}
}

void FLoadingScreenModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	if (GetMoviePlayer())
	{
		GetMoviePlayer()->OnPrepareLoadingScreen().RemoveAll(this);
	}
}

void FLoadingScreenModule::HandlePrepareLoadingScreen()
{
	TSubclassOf<UUserWidget> WidgetClass = ULoadingScreenLibrary::GetWidgetClassToDisplay();
	if (!WidgetClass)
	{
		return;
	}

	UGameInstance* GameInstance = GEngine->GameViewport->GetGameInstance();

	if (GameInstance)
	{
		UUserWidget* LoadingWidget = CreateWidget<UUserWidget>(GameInstance, WidgetClass);

		if (LoadingWidget)
		{
			FLoadingScreenAttributes LoadingScreen;
			LoadingScreen.bAutoCompleteWhenLoadingCompletes = true;
			LoadingScreen.MinimumLoadingScreenDisplayTime = 2.0f;
			LoadingScreen.bAllowEngineTick = true;
			LoadingScreen.WidgetLoadingScreen = LoadingWidget->TakeWidget();

			GetMoviePlayer()->SetupLoadingScreen(LoadingScreen);
		}
	}

	ULoadingScreenLibrary::ClearWidgetClassToDisplay();
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FLoadingScreenModule, LoadingScreen)