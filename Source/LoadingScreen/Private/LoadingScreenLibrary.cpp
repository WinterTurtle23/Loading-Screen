// Fill out your copyright notice in the Description page of Project Settings.

#include "LoadingScreenLibrary.h"
#include "Blueprint/UserWidget.h"

// Initialize the static variable
TSubclassOf<UUserWidget> ULoadingScreenLibrary::WidgetClassToDisplay = nullptr;

void ULoadingScreenLibrary::SetLoadingScreenWidget(TSubclassOf<UUserWidget> WidgetClass)
{
	WidgetClassToDisplay = WidgetClass;
}

TSubclassOf<UUserWidget> ULoadingScreenLibrary::GetWidgetClassToDisplay()
{
	return WidgetClassToDisplay;
}

void ULoadingScreenLibrary::ClearWidgetClassToDisplay()
{
	WidgetClassToDisplay = nullptr;
}