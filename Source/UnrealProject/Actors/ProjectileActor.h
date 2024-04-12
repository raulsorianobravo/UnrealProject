#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectileActor.generated.h"

class USphereComponent;
class UProjectileMovementComponent;

UCLASS()
class UNREALPROJECT_API AProjectileActor : public AActor
{
	GENERATED_BODY()
	
public:
	// Establece los valores predeterminados para las propiedades de este actor
	AProjectileActor();

protected:

	UPROPERTY(EditDefaultsOnly, Category=Components)
	UStaticMeshComponent* ProjectileMeshComponent;

	UPROPERTY(EditDefaultsOnly, Category = Components)
	USphereComponent* ProjectileCollisionComponent;

	UPROPERTY(EditDefaultsOnly, Category = Components)
	UProjectileMovementComponent* ProjectileMovementComponent;


	// Se llama cuando se inicia el juego o cuando se genera
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	void OnProjectHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

public:
	// Llamada a cada fotograma
	virtual void Tick(float DeltaTime) override;
};
