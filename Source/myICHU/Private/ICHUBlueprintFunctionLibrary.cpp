// Fill out your copyright notice in the Description page of Project Settings.

#include "ICHUBlueprintFunctionLibrary.h"
#include "myICHU.h"
#include "../../myICHULoadingScreen/Public/myICHULoadingScreen.h"


UICHUBlueprintLibrary::UICHUBlueprintLibrary(const FObjectInitializer& ObjectInitializer)
        : Super(ObjectInitializer)
{
}

void UICHUBlueprintLibrary::PlayLoadingScreen(bool bPlayUntilStopped, float PlayTime)
{
    ImyICHULoadingScreenModule& LoadingScreenModule = ImyICHULoadingScreenModule::Get();
    LoadingScreenModule.StartInGameLoadingScreen(bPlayUntilStopped, PlayTime);
}

void UICHUBlueprintLibrary::StopLoadingScreen()
{
    ImyICHULoadingScreenModule& LoadingScreenModule = ImyICHULoadingScreenModule::Get();
    LoadingScreenModule.StopInGameLoadingScreen();
}

bool UICHUBlueprintLibrary::IsInEditor()
{
    return GIsEditor;
}



