

#include "SuperKewl.h"
#include "batteryPickUp.h"


AbatteryPickUp::AbatteryPickUp(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	// Base power of battery pickup
	PowerLevel = 150.f;
}

void AbatteryPickUp::OnPickedUp_Implementation(){

	// Calls parent function first, hence super prefix
	Super::OnPickedUp_Implementation();
	
	// kills the battery
	Destroy();
}


