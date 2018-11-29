// Unstoppable Trio 2018


#include "ICHUCharacter.h"
#include "myICHU.h"

// Sets default values
AICHUCharacter::AICHUCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AICHUCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AICHUCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AICHUCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

