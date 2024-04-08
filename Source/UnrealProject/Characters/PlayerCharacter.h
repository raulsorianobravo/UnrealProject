#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class UNREALPROJECT_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Establece los valores predeterminados para las propiedades de este character
	APlayerCharacter();

protected:

	UPROPERTY(EditDefaultsOnly,Category=Components)
	USpringArmComponent* SpringArmComponent;

	UPROPERTY(EditDefaultsOnly, Category = Components)
	UCameraComponent* CameraComponent;

	// Se llama cuando se inicia el juego o cuando se genera
	virtual void BeginPlay() override;

public:
	// Llamada a cada fotograma
	virtual void Tick(float DeltaTime) override;

	// Se llama para enlazar la funcionalidad a la entrada
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
