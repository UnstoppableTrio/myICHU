// Unstoppable Trio 2018



#include "ICHUSaveGame.h"
#include "myICHU.h"
#include "ICHUInstance.h"

void UICHUSaveGame::Serialize(FArchive& Ar)
{
    Super::Serialize(Ar);

    if (Ar.IsLoading() && SavedDataVersion != EICHUSaveGameVersion::LatestVersion)
    {
        if (SavedDataVersion < EICHUSaveGameVersion::AddedItemData)
        /*{
            // Convert from list to item data map
            for (const FPrimaryAssetId& ItemId : InventoryItems_DEPRECATED)
            {
                InventoryData.Add(ItemId, FICHUItemData(1, 1));
            }

            InventoryItems_DEPRECATED.Empty();
        }*/

        SavedDataVersion = EICHUSaveGameVersion::LatestVersion;
    }
}



