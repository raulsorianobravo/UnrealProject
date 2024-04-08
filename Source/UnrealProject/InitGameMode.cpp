#include "InitGameMode.h"

// Establece valores predeterminados
AInitGameMode::AInitGameMode()
{
	// Establezca esta character para llamar. Marca() cada fotograma. Puede desactivar esta opción para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = true;
}

// Se llama cuando se inicia el juego o cuando se genera
void AInitGameMode::BeginPlay()
{
	Super::BeginPlay();
}

// Llamada a cada fotograma
void AInitGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Se llama para enlazar la funcionalidad a la entrada
void AInitGameMode::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
