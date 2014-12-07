

#pragma once

#include "pickUp.h"
#include "batteryPickUp.generated.h"

/**
 * 
 */
UCLASS()
class SUPERKEWL_API AbatteryPickUp : public ApickUp
{
	GENERATED_UCLASS_BODY()

	// Sets power of battery to give to player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Power)
	float PowerLevel;

	//overrides function because of blueprint magic
	void OnPickedUp_Implementation() OVERRIDE;
	
};
