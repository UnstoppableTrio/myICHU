// Unstoppable Trio 2018

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ICHUGameModeBase.generated.h"

/**
 * 
 */
/** Base class for GameMode, should be blueprinted */
UCLASS()
class MYICHU_API AICHUGameModeBase : public AGameModeBase
{
    GENERATED_BODY()

public:
    /** Constructor */
    AICHUGameModeBase();
};

