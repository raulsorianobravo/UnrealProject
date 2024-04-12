#include "ProjectileActor.h"

// Establece valores predeterminados
AProjectileActor::AProjectileActor()
{
	// Establezca esta actor para llamar. Marca() cada fotograma. Puede desactivar esta opción para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = true;
}

// Se llama cuando se inicia el juego o cuando se genera
void AProjectileActor::BeginPlay()
{
	Super::BeginPlay();
}

// Llamada a cada fotograma
void AProjectileActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
