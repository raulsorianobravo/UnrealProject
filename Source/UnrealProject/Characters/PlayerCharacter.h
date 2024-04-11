#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

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

	UPROPERTY(EditDefaultsOnly, Category = Input)
	UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditDefaultsOnly, Category = Input)
	UInputAction* MoveAction;

	// Se llama cuando se inicia el juego o cuando se genera
	virtual void BeginPlay() override;

	void Move(const FInputActionValue& Value);

public:
	// Llamada a cada fotograma
	virtual void Tick(float DeltaTime) override;

	// Se llama para enlazar la funcionalidad a la entrada
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
