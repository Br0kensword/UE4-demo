

#include "SuperKewl.h"
#include "pickUp.h"


ApickUp::ApickUp(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	// Is active
	bIsActive = true;

	//Create the root sphere for collison
	BaseCollisionComponent = PCIP.CreateDefaultSubobject<USphereComponent>(this, TEXT("BaseSphereComponent"));

	// setting sphere as root component
	RootComponent = BaseCollisionComponent;

	//Make the mesh component
	pickUpMesh = PCIP.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("pickupMesh"));

	//Turn on da physics bitches
	pickUpMesh->SetSimulatePhysics(true);

	//attach mesh to root compoment
	pickUpMesh->AttachTo(RootComponent);
}

void ApickUp::OnPickedUp_Implementation(){

	//This can be something like giving health or something like that
}


