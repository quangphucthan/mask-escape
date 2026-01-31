#include "MaskEscapeGameMode.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"

AMaskEscapeGameMode::AMaskEscapeGameMode()
{
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(
        TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter")
    );
    if (PlayerPawnClassFinder.Class != nullptr)
    {
        DefaultPawnClass = PlayerPawnClassFinder.Class;
    }
}

void AMaskEscapeGameMode::StartPlay()
{
    Super::StartPlay();

    if (ACharacter* Character = Cast<ACharacter>(UGameplayStatics::GetPlayerCharacter(this, 0)))
    {
        Character->JumpMaxCount = 2;
    }
}

void AMaskEscapeGameMode::RestartPlayer(AController* NewPlayer)
{
    Super::RestartPlayer(NewPlayer);

    if (!NewPlayer)
    {
        return;
    }

    if (ACharacter* Character = Cast<ACharacter>(NewPlayer->GetPawn()))
    {
        Character->JumpMaxCount = 2;
    }
}
