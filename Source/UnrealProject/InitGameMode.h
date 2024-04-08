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

};
