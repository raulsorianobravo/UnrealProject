#include "PlayerCharacter.h"

// Establece valores predeterminados
APlayerCharacter::APlayerCharacter()
{
	// Establezca esta character para llamar. Marca() cada fotograma. Puede desactivar esta opción para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = false;
}

// Se llama cuando se inicia el juego o cuando se genera
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Llamada a cada fotograma
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Se llama para enlazar la funcionalidad a la entrada
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
