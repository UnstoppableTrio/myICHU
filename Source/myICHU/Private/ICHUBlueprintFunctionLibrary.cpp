// Fill out your copyright notice in the Description page of Project Settings.


#include "ICHUBlueprintFunctionLibrary.h"
#include "myICHU.h"
#include "ICHUBlueprintFunctionLibrary.h"
#include "ActionRPGLoadingScreen.h"


URPGBlueprintLibrary::URPGBlueprintLibrary(const FObjectInitializer& ObjectInitializer)
        : Super(ObjectInitializer)
{
}

void URPGBlueprintLibrary::PlayLoadingScreen(bool bPlayUntilStopped, float PlayTime)
{
    IActionRPGLoadingScreenModule& LoadingScreenModule = IActionRPGLoadingScreenModule::Get();
    LoadingScreenModule.StartInGameLoadingScreen(bPlayUntilStopped, PlayTime);
}

void URPGBlueprintLibrary::StopLoadingScreen()
{
    IActionRPGLoadingScreenModule& LoadingScreenModule = IActionRPGLoadingScreenModule::Get();
    LoadingScreenModule.StopInGameLoadingScreen();
}

bool URPGBlueprintLibrary::IsInEditor()
{
    return GIsEditor;
}



