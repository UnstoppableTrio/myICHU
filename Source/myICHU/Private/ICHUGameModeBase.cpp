// Unstoppable Trio 2018


#include "ICHUGameModeBase.h"
#include "myICHU.h"
#include "ICHUGameModeBase.h"
//#include "ICHUGameStateBase.h"
#include "ICHUPlayerController.h"

AICHUGameModeBase::AICHUGameModeBase()
{
    //GameStateClass = AICHUGameStateBase::StaticClass();
    PlayerControllerClass = AICHUPlayerController::StaticClass();
}



