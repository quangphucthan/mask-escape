#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MaskEscapeGameMode.generated.h"

UCLASS()
class MASKESCAPE_API AMaskEscapeGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    AMaskEscapeGameMode();

    virtual void StartPlay() override;
    virtual void RestartPlayer(AController* NewPlayer) override;
};
