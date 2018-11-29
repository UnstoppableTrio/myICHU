// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UObject/PrimaryAssetId.h"
#include "/home/estebagel/UE_4.20-unstoppable/Engine/Plugins/Runtime/GameplayAbilities/Source/GameplayAbilities/Public/GameplayEffectTypes.h"
#include "/home/estebagel/UE_4.20-unstoppable/Engine/Plugins/Runtime/GameplayAbilities/Source/GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ICHUBlueprintFunctionLibrary.generated.h"

/**
 * Game-specific blueprint library, adds loading screen functions.
 */

UCLASS()
class UICHUBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
    /** Show the native loading screen, such as on a map transfer. If bPlayUntilStopped is false, it will be displayed for PlayTime and automatically stop */
    UFUNCTION(BlueprintCallable, Category = Loading)
    static void PlayLoadingScreen(bool bPlayUntilStopped, float PlayTime);

    /** Turns off the native loading screen if it is visible. This must be called if bPlayUntilStopped was true */
    UFUNCTION(BlueprintCallable, Category = Loading)
    static void StopLoadingScreen();

    /** Returns true if this is being run from an editor preview */
    UFUNCTION(BlueprintPure, Category = Loading)
    static bool IsInEditor();

	
	
};
