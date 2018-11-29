// Unstoppable Trio 2018

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ICHUInstance.generated.h"

//class UICHUItem;
class UICHUSaveGame;
/**
 * Based off Epic's ActionmyICHU sample.
 */





UCLASS()
class MYICHU_API UICHUInstance : public UGameInstance
{
	GENERATED_BODY()

public:
    // Constructor
    UICHUInstance();

    /** List of inventory items to add to new players */
//    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Inventory)
//    TMap<FPrimaryAssetId, FICHUItemData> DefaultInventory;

    /** Number of slots for each type of item */
//    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Inventory)
//    TMap<FPrimaryAssetType, int32> ItemSlotsPerType;

    /** The slot name used for saving */
    UPROPERTY(BlueprintReadWrite, Category = Save)
    FString SaveSlot;

    /** The platform-specific user index */
    UPROPERTY(BlueprintReadWrite, Category = Save)
    int32 SaveUserIndex;

    /**
     * Adds the default inventory to the inventory array
     * @param InventoryArray Inventory to modify
     * @param RemoveExtra If true, remove anything other than default inventory
     */
    UFUNCTION(BlueprintCallable, Category = Inventory)
    void AddDefaultInventory(UICHUSaveGame* SaveGame, bool bRemoveExtra = false);

    /** Returns true if this is a valid inventory slot */
//    UFUNCTION(BlueprintCallable, Category = Inventory)
//    bool IsValidItemSlot(FICHUItemSlot ItemSlot) const;

    /** Returns the current save game, so it can be used to initialize state. Changes are not written until WriteSaveGame is called */
    UFUNCTION(BlueprintCallable, Category = Save)
    UICHUSaveGame* GetCurrentSaveGame();

    /** Sets rather save/load is enabled. If disabled it will always count as a new character */
    UFUNCTION(BlueprintCallable, Category = Save)
    void SetSavingEnabled(bool bEnabled);

    /** Loads a save game. If it fails, it will create a new one for you. Returns true if it loaded, false if it created one */
    UFUNCTION(BlueprintCallable, Category = Save)
    bool LoadOrCreateSaveGame();

    /** Writes the current save game object to disk */
    UFUNCTION(BlueprintCallable, Category = Save)
    bool WriteSaveGame();

    /** Resets the current save game to it's default. This will erase player data! This won't save to disk until the next WriteSaveGame */
    UFUNCTION(BlueprintCallable, Category = Save)
    void ResetSaveGame();

protected:
    /** The current save game object */
    UPROPERTY()
    UICHUSaveGame* CurrentSaveGame;

    /** Rather it will attempt to actually save to disk */
    UPROPERTY()
    bool bSavingEnabled;
};
	
	
