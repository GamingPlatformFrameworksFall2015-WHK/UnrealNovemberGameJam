// This document is available under the GNU Public License v2. Its original authors are Will Nations, Hailee Ammons, and Kevin Wang, all of whom are to be credited in any derivative works.

#include "November2015Jam.h"
#include "MicroOrganismPawn.h"


// Sets default values
AMicroOrganismPawn::AMicroOrganismPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMicroOrganismPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMicroOrganismPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AMicroOrganismPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

