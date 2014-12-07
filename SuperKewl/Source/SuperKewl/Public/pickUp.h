

#pragma once

#include "GameFramework/Actor.h"
#include "pickUp.generated.h"

/**
 * 
 */
UCLASS()
class SUPERKEWL_API ApickUp : public AActor
{
	GENERATED_UCLASS_BODY()

	// True when stuff is picked up
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = pickUp)
	bool bIsActive;

	// Simple collison primitive
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = pickUp)
	TSubobjectPtr<USphereComponent> BaseCollisionComponent;

	//Das Mesh
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = pickUp)
		TSubobjectPtr<UStaticMeshComponent> pickUpMesh;

	//pick up function
	UFUNCTION(BlueprintNativeEvent)
	void OnPickedUp();
	
};
