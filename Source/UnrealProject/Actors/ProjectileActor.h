#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectileActor.generated.h"

UCLASS()
class UNREALPROJECT_API AProjectileActor : public AActor
{
	GENERATED_BODY()
	
public:
	// Establece los valores predeterminados para las propiedades de este actor
	AProjectileActor();

protected:
	// Se llama cuando se inicia el juego o cuando se genera
	virtual void BeginPlay() override;

public:
	// Llamada a cada fotograma
	virtual void Tick(float DeltaTime) override;
};
