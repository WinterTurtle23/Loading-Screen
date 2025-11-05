// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Blueprint/UserWidget.h"
#include "Engine/Engine.h"
#include "Engine/GameViewportClient.h"

#include "LoadingScreenLibrary.generated.h"

/**
 * 
 */
UCLASS()
class LOADINGSCREEN_API ULoadingScreenLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Sets the UMG widget to display during the next 'Open Level' call.
	 * Call this immediately before calling 'Open Level'.
	 * @param WidgetClass The Widget Blueprint you want to show.
	 */
	UFUNCTION(BlueprintCallable, Category = "Loading Screen")
	static void SetLoadingScreenWidget(TSubclassOf<UUserWidget> WidgetClass);

	// Internal functions for the module to use
	static TSubclassOf<UUserWidget> GetWidgetClassToDisplay();
	static void ClearWidgetClassToDisplay();

private:
	// A static variable to hold the widget class between the Blueprint call and the engine callback
	static TSubclassOf<UUserWidget> WidgetClassToDisplay;
	
};
