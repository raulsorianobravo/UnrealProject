#include "PlayerCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputSubsystems.h"
#include <EnhancedInputComponent.h>

// Establece valores predeterminados
APlayerCharacter::APlayerCharacter()
{
	// Establezca esta character para llamar. Marca() cada fotograma. Puede desactivar esta opción para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = false;

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringArmComponent");
	SpringArmComponent->SetupAttachment(RootComponent);
	SpringArmComponent->TargetArmLength = 400.0f;

	SpringArmComponent->bUsePawnControlRotation = true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	CameraComponent->SetupAttachment(SpringArmComponent);

	CameraComponent->bUsePawnControlRotation = true;
}


// Se llama cuando se inicia el juego o cuando se genera
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Orange, TEXT("PlayerCharacter"));
	UE_LOG(LogTemp,Log,TEXT("Log PlayerCharacter"));

	//Añadir mapa de botones por defecto
	APlayerController* PlayerController = Cast<APlayerController>(Controller);
	if (!IsValid(PlayerController)) return;

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());

	if (!IsValid(Subsystem)) return;
	Subsystem->AddMappingContext(DefaultMappingContext, 0);


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

	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);

	if (!IsValid(EnhancedInputComponent)) return;

	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Move);

	EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Look);

	EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);

	EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

}

void APlayerCharacter::Move(const FInputActionValue& InputActionValue)
{
	UE_LOG(LogTemp, Log, TEXT("Move"));

	if (!IsValid(Controller)) return;
	FVector2D MovementVector = InputActionValue.Get<FVector2d>();

	const FRotator Rotation = Controller->GetControlRotation();

	const FRotator YawRotation = FRotator(0, Rotation.Yaw, 0);

	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	AddMovementInput(ForwardDirection, MovementVector.Y);
	AddMovementInput(RightDirection, MovementVector.X);

}

void APlayerCharacter::Look(const FInputActionValue& InputActionValue)
{
		if (!IsValid(Controller)) return;

		FVector2D LookVector = InputActionValue.Get<FVector2d>();

		AddControllerYawInput(LookVector.X);
		AddControllerPitchInput(LookVector.Y);

}
