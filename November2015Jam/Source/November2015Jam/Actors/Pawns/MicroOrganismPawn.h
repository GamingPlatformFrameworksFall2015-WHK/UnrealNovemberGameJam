// This document is available under the GNU Public License v2. Its original authors are Will Nations, Hailee Ammons, and Kevin Wang, all of whom are to be credited in any derivative works.

#pragma once

#include "GameFramework/Pawn.h"
#include "MicroOrganismPawn.generated.h"

UCLASS()
class NOVEMBER2015JAM_API AMicroOrganismPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMicroOrganismPawn();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	
	
};
