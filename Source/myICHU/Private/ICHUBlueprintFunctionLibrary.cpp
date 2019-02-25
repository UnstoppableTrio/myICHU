// Fill out your copyright notice in the Description page of Project Settings.

#include "ICHUBlueprintFunctionLibrary.h"
#include "myICHU.h"
//#include ".h"
#include "Public/myICHULoadingScreen.h"


UICHUBlueprintFunctionLibrary::UICHUBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer)
        : Super(ObjectInitializer)
{
}

void UICHUBlueprintFunctionLibrary::PlayLoadingScreen(bool bPlayUntilStopped, float PlayTime)
{
    ImyICHULoadingScreenModule& LoadingScreenModule = ImyICHULoadingScreenModule::Get();
    LoadingScreenModule.StartInGameLoadingScreen(bPlayUntilStopped, PlayTime);
}

void UICHUBlueprintFunctionLibrary::StopLoadingScreen()
{
    ImyICHULoadingScreenModule& LoadingScreenModule = ImyICHULoadingScreenModule::Get();
    LoadingScreenModule.StopInGameLoadingScreen();
}

bool UICHUBlueprintFunctionLibrary::IsInEditor()
{
    return GIsEditor;
}



