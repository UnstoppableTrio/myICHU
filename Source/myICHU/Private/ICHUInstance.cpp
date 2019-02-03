// Unstoppable Trio 2018



#include "ICHUInstance.h"
#include "myICHU.h"
#include "ICHUSaveGame.h"
#include "Kismet/GameplayStatics.h"

UICHUInstance::UICHUInstance()
    : SaveSlot(TEXT("SaveGame"))
    , SaveUserIndex(0)
{}

void UICHUInstance::AddDefaultInventory(UICHUSaveGame* SaveGame, bool bRemoveExtra)
{
    // If we want to remove extra, clear out the existing inventory
    if (bRemoveExtra)
    {
  //      SaveGame->InventoryData.Reset();
    }

    // Now add the default inventory, this only adds if not already in hte inventory
 //   for (const TPair<FPrimaryAssetId, FICHUItemData>& Pair : DefaultInventory)
    {
 //       if (!SaveGame->InventoryData.Contains(Pair.Key))
        {
 //           SaveGame->InventoryData.Add(Pair.Key, Pair.Value);
        }
    }
}

/*bool UICHUInstance::IsValidItemSlot(FICHUItemSlot ItemSlot) const
{
    if (ItemSlot.IsValid())
    {
        const int32* FoundCount = ItemSlotsPerType.Find(ItemSlot.ItemType);

        if (FoundCount)
        {
            return ItemSlot.SlotNumber < *FoundCount;
        }
    }
    return false;
}*/

UICHUSaveGame* UICHUInstance
::GetCurrentSaveGame()
{
    return CurrentSaveGame;
}

void UICHUInstance
::SetSavingEnabled(bool bEnabled)
{
    bSavingEnabled = bEnabled;
}

bool UICHUInstance
::LoadOrCreateSaveGame()
{
    // Drop reference to old save game, this will GC out
    CurrentSaveGame = nullptr;

    if (UGameplayStatics::DoesSaveGameExist(SaveSlot, SaveUserIndex) && bSavingEnabled)
    {
        CurrentSaveGame = Cast<UICHUSaveGame>(UGameplayStatics::LoadGameFromSlot(SaveSlot, SaveUserIndex));
    }

    if (CurrentSaveGame)
    {
        // Make sure it has any newly added default inventory
        AddDefaultInventory(CurrentSaveGame, false);

        return true;
    }
    else
    {
        // This creates it on demand
        CurrentSaveGame = Cast<UICHUSaveGame>(UGameplayStatics::CreateSaveGameObject(UICHUSaveGame::StaticClass()));

        AddDefaultInventory(CurrentSaveGame, true);

        return false;
    }
}

bool UICHUInstance
::WriteSaveGame()
{
    if (bSavingEnabled)
    {
        return UGameplayStatics::SaveGameToSlot(GetCurrentSaveGame(), SaveSlot, SaveUserIndex);
    }
    return false;
}

void UICHUInstance
::ResetSaveGame()
{
    bool bWasSavingEnabled = bSavingEnabled;
    bSavingEnabled = false;
    LoadOrCreateSaveGame();
    bSavingEnabled = bWasSavingEnabled;
}