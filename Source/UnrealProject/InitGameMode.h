#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "InitGameMode.generated.h"

UCLASS()
class UNREALPROJECT_API AInitGameMode : public AGameModeBase

{
	GENERATED_BODY()

public:
	// Establece los valores predeterminados para las propiedades de este character
	AInitGameMode();

protected:
	// Se llama cuando se inicia el juego o cuando se genera
	virtual void BeginPlay() override;

public:
	// Llamada a cada fotograma
	virtual void Tick(float DeltaTime) override;

	// Se llama para enlazar la funcionalidad a la entrada
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
