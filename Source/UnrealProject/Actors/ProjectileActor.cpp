#include "ProjectileActor.h"
#include "Components/SphereComponent.h"
#include <GameFramework/ProjectileMovementComponent.h>

// Establece valores predeterminados
AProjectileActor::AProjectileActor()
{
	// Establezca esta actor para llamar. Marca() cada fotograma. Puede desactivar esta opción para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = false;

	ProjectileMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("ProjectileMeshComponent");
	SetRootComponent(ProjectileMeshComponent);
	ProjectileMeshComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);

	ProjectileCollisionComponent = CreateDefaultSubobject<USphereComponent>("ProjectileCollisionComponent");
	ProjectileCollisionComponent->SetupAttachment(RootComponent);
	ProjectileCollisionComponent->SetCollisionProfileName("BlockAll");

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovementComponent");
	ProjectileMovementComponent->ProjectileGravityScale = 0.0f;
	ProjectileMovementComponent->InitialSpeed = 750.0f;


}

// Se llama cuando se inicia el juego o cuando se genera
void AProjectileActor::BeginPlay()
{
	Super::BeginPlay();

	ProjectileCollisionComponent->OnComponentHit.AddUniqueDynamic(this, &AProjectileActor::OnProjectHit);
}

void AProjectileActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	ProjectileCollisionComponent->OnComponentHit.RemoveAll(this);
}

void AProjectileActor::OnProjectHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	Destroy();
}

// Llamada a cada fotograma
void AProjectileActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
