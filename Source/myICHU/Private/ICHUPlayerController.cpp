// Unstoppable Trio 2018


#include "ICHUPlayerController.h"
#include "myICHU.h"
#include "ICHUCharacter.h"
#include "ICHUInstance.h"
#include "ICHUSaveGame.h"
//#include "Items/ICHUItem.h"

/*bool AICHUPlayerController::AddInventoryItem(UICHUItem* NewItem, int32 ItemCount, int32 ItemLevel, bool bAutoSlot)
{
    bool bChanged = false;
    if (!NewItem)
    {
        UE_LOG(LogmyICHU, Warning, TEXT("AddInventoryItem: Failed trying to add null item!"));
        return false;
    }

    if (ItemCount <= 0 || ItemLevel <= 0)
    {
        UE_LOG(LogmyICHU, Warning, TEXT("AddInventoryItem: Failed trying to add item %s with negative count or level!"), *NewItem->GetName());
        return false;
    }

*/    // Find current item data, which may be empty
 //   FICHUItemData OldData;
 //   GetInventoryItemData(NewItem, OldData);

    // Find modified data
 //   FICHUItemData NewData = OldData;
 //   NewData.UpdateItemData(FICHUItemData(ItemCount, ItemLevel), NewItem->MaxCount, NewItem->MaxLevel);

 //   if (OldData != NewData)
    //{
        // If data changed, need to update storage and call callback
 //       InventoryData.Add(NewItem, NewData);
 //       NotifyInventoryItemChanged(true, NewItem);
 //       bChanged = true;
 //   }

 //   if (bAutoSlot)
  //  {
        // Slot item if required
 //       bChanged |= FillEmptySlotWithItem(NewItem);
 //   }

 //   if (bChanged)
  //  {
        // If anything changed, write to save game
 //       SaveInventory();
 //       return true;
 //   }
 //   return false;
//}

//bool AICHUPlayerController::RemoveInventoryItem(UICHUItem* RemovedItem, int32 RemoveCount)
//{
  //  if (!RemovedItem)
  //  {
 //       UE_LOG(LogmyICHU, Warning, TEXT("RemoveInventoryItem: Failed trying to remove null item!"));
  //      return false;
 //   }

    // Find current item data, which may be empty
 //   FICHUItemData NewData;
 //   GetInventoryItemData(RemovedItem, NewData);

 //   if (!NewData.IsValid())
    //{
        // Wasn't found
 //       return false;
  //  }

    // If RemoveCount <= 0, delete all
 /*   if (RemoveCount <= 0)
    {
        NewData.ItemCount = 0;
    }
    else
    {
        NewData.ItemCount -= RemoveCount;
    }

    if (NewData.ItemCount > 0)
  */ // {
        // Update data with new count
  //      InventoryData.Add(RemovedItem, NewData);
  //  }
  //  else
 //   {
        // Remove item entirely, make sure it is unslotted
 //       InventoryData.Remove(RemovedItem);

 //       for (TPair<FICHUItemSlot, UICHUItem*>& Pair : SlottedItems)
   //     {
  //          if (Pair.Value == RemovedItem)
   //         {
  //              Pair.Value = nullptr;
  //              NotifySlottedItemChanged(Pair.Key, Pair.Value);
   //         }
   //     }
   // }

    // If we got this far, there is a change so notify and save
 //   NotifyInventoryItemChanged(false, RemovedItem);

  //  SaveInventory();
 //   return true;
//}
/*
void AICHUPlayerController::GetInventoryItems(TArray<UICHUItem*>& Items, FPrimaryAssetType ItemType)
{
    for (const TPair<UICHUItem*, FICHUItemData>& Pair : InventoryData)
    {
        if (Pair.Key)
        {
            FPrimaryAssetId AssetId = Pair.Key->GetPrimaryAssetId();

            // Filters based on item type
            if (AssetId.PrimaryAssetType == ItemType || !ItemType.IsValid())
            {
                Items.Add(Pair.Key);
            }
        }
    }
}

bool AICHUPlayerController::SetSlottedItem(FICHUItemSlot ItemSlot, UICHUItem* Item)
{
*/    // Iterate entire inventory because we need to remove from old slot
 //   bool bFound = false;
 //   for (TPair<FICHUItemSlot, UICHUItem*>& Pair : SlottedItems)
   // {
 //       if (Pair.Key == ItemSlot)
//        {
            // Add to new slot
  //          bFound = true;
//            Pair.Value = Item;
//            NotifySlottedItemChanged(Pair.Key, Pair.Value);
//        }
//        else if (Item != nullptr && Pair.Value == Item)
  //      {
            // If this item was found in another slot, remove it
//            Pair.Value = nullptr;
//            NotifySlottedItemChanged(Pair.Key, Pair.Value);
  //      }
 //   }

 //   if (bFound)
  //  {
 //       SaveInventory();
//        return true;
  //  }

  //  return false;
//}

/*int32 AICHUPlayerController::GetInventoryItemCount(UICHUItem* Item) const
{
    const FICHUItemData* FoundItem = InventoryData.Find(Item);

    if (FoundItem)
    {
        return FoundItem->ItemCount;
    }
    return 0;
}

bool AICHUPlayerController::GetInventoryItemData(UICHUItem* Item, FICHUItemData& ItemData) const
{
    const FICHUItemData* FoundItem = InventoryData.Find(Item);

    if (FoundItem)
    {
        ItemData = *FoundItem;
        return true;
    }
    ItemData = FICHUItemData(0, 0);
    return false;
}

UICHUItem* AICHUPlayerController::GetSlottedItem(FICHUItemSlot ItemSlot) const
{
    UICHUItem* const* FoundItem = SlottedItems.Find(ItemSlot);

    if (FoundItem)
    {
        return *FoundItem;
    }
    return nullptr;
}

void AICHUPlayerController::FillEmptySlots()
{
    bool bShouldSave = false;
    for (const TPair<UICHUItem*, FICHUItemData>& Pair : InventoryData)
    {
        bShouldSave |= FillEmptySlotWithItem(Pair.Key);
    }

    if (bShouldSave)
    {
        SaveInventory();
    }
}

bool AICHUPlayerController::SaveInventory()
{
    UWorld* World = GetWorld();
    UICHUInstance* GameInstance = World ? World->GetGameInstance<UICHUInstance>() : nullptr;

    if (!GameInstance)
    {
        return false;
    }

    UICHUSaveGame* CurrentSaveGame = GameInstance->GetCurrentSaveGame();
    if (CurrentSaveGame)
    {
*/        // Reset cached data in save game before writing to it
//        CurrentSaveGame->InventoryData.Reset();
//        CurrentSaveGame->SlottedItems.Reset();

//        for (const TPair<UICHUItem*, FICHUItemData>& ItemPair : InventoryData)
 //       {
//            FPrimaryAssetId AssetId;

 //           if (ItemPair.Key)
  //          {
//                AssetId = ItemPair.Key->GetPrimaryAssetId();
 //               CurrentSaveGame->InventoryData.Add(AssetId, ItemPair.Value);
//            }
 //       }

  //      for (const TPair<FICHUItemSlot, UICHUItem*>& SlotPair : SlottedItems)
 //       {
 //           FPrimaryAssetId AssetId;

  //          if (SlotPair.Value)
   //         {
 //               AssetId = SlotPair.Value->GetPrimaryAssetId();
  //          }
 //           CurrentSaveGame->SlottedItems.Add(SlotPair.Key, AssetId);
  //      }

        // Now that cache is updated, write to disk
  //      GameInstance->WriteSaveGame();
 //       return true;
    //}
  //  return false;
//}

//bool AICHUPlayerController::LoadInventory()
//{
 //   InventoryData.Reset();
 //   SlottedItems.Reset();

    // Fill in slots from game instance
 //   UWorld* World = GetWorld();
//    UICHUInstance* GameInstance = World ? World->GetGameInstance<UICHUInstance>() : nullptr;

//    if (!GameInstance)
    //{
//        return false;
  //  }

 //   for (const TPair<FPrimaryAssetType, int32>& Pair : GameInstance->ItemSlotsPerType)
  //  {
 //       for (int32 SlotNumber = 0; SlotNumber < Pair.Value; SlotNumber++)
   //     {
//            SlottedItems.Add(FICHUItemSlot(Pair.Key, SlotNumber), nullptr);
  //      }
  //  }

 //   UICHUSaveGame* CurrentSaveGame = GameInstance->GetCurrentSaveGame();
 //   UICHUAssetManager& AssetManager = UICHUAssetManager::Get();
 //   if (CurrentSaveGame)
  //  {
        // Copy from save game into controller data
 //       bool bFoundAnySlots = false;
 //       for (const TPair<FPrimaryAssetId, FICHUItemData>& ItemPair : CurrentSaveGame->InventoryData)
 //       {
 //           UICHUItem* LoadedItem = AssetManager.ForceLoadItem(ItemPair.Key);

  //          if (LoadedItem != nullptr)
  //          {
  //              InventoryData.Add(LoadedItem, ItemPair.Value);
   //         }
  //      }

  //      for (const TPair<FICHUItemSlot, FPrimaryAssetId>& SlotPair : CurrentSaveGame->SlottedItems)
   //     {
/*            if (SlotPair.Value.IsValid())
            {
                UICHUItem* LoadedItem = AssetManager.ForceLoadItem(SlotPair.Value);
                if (GameInstance->IsValidItemSlot(SlotPair.Key) && LoadedItem)
                {
                    SlottedItems.Add(SlotPair.Key, LoadedItem);
                    bFoundAnySlots = true;
                }
            }
        }

        if (!bFoundAnySlots)
        {
*/            // Auto slot items as no slots were saved
//            FillEmptySlots();
  //      }

//        NotifyInventoryLoaded();

//        return true;
 //   }

    // Load failed but we reset inventory, so need to notify UI
//    NotifyInventoryLoaded();

//    return false;
//}

//bool AICHUPlayerController::FillEmptySlotWithItem(UICHUItem* NewItem)
//{
    // Look for an empty item slot to fill with this item
 //   FPrimaryAssetType NewItemType = NewItem->GetPrimaryAssetId().PrimaryAssetType;
 //   FICHUItemSlot EmptySlot;
//    for (TPair<FICHUItemSlot, UICHUItem*>& Pair : SlottedItems)
//    {
 //       if (Pair.Key.ItemType == NewItemType)
  //      {
 //           if (Pair.Value == NewItem)
 //           {
                // Item is already slotted
 //               return false;
  //          }
 //           else if (Pair.Value == nullptr && (!EmptySlot.IsValid() || EmptySlot.SlotNumber > Pair.Key.SlotNumber))
  //          {
                // We found an empty slot worth filling
 //               EmptySlot = Pair.Key;
  //          }
  //      }
  //  }

 //   if (EmptySlot.IsValid())
  //  {
  //      SlottedItems[EmptySlot] = NewItem;
 //       NotifySlottedItemChanged(EmptySlot, NewItem);
 //       return true;
 //   }

 //   return false;
//}

//void AICHUPlayerController::NotifyInventoryItemChanged(bool bAdded, UICHUItem* Item)
//{
    // Notify native before blueprint
//    OnInventoryItemChangedNative.Broadcast(bAdded, Item);
//    OnInventoryItemChanged.Broadcast(bAdded, Item);
//}

//void AICHUPlayerController::NotifySlottedItemChanged(FICHUItemSlot ItemSlot, UICHUItem* Item)
//{
    // Notify native before blueprint
 //   OnSlottedItemChangedNative.Broadcast(ItemSlot, Item);
//    OnSlottedItemChanged.Broadcast(ItemSlot, Item);
//}

//void AICHUPlayerController::NotifyInventoryLoaded()
//{
    // Notify native before blueprint
//    OnInventoryLoadedNative.Broadcast();
//    OnInventoryLoaded.Broadcast();
//}

void AICHUPlayerController::BeginPlay()
{
    // Load inventory off save game before starting play
//    LoadInventory();

    Super::BeginPlay();
}

void AICHUPlayerController::Possess(APawn* NewPawn)
{
    Super::Possess(NewPawn);

    // Notify blueprint about the possession, only if it is valid
    // In a network game this would need to be replicated
    if (NewPawn)
    {
        ReceivePossess(NewPawn);
    }
}

void AICHUPlayerController::UnPossess()
{
    APawn* PreviousPawn = GetPawn();

    if (PreviousPawn)
    {
        // Only call if we had one before
        ReceiveUnPossess(PreviousPawn);
    }

    Super::UnPossess();
}


