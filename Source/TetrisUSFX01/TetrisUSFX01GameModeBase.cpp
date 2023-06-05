// Copyright Epic Games, Inc. All Rights Reserved.

/*Aquí se implementa el Singleton*/
#include "TetrisUSFX01GameModeBase.h"
#include "Board.h"
#include "Camera/CameraActor.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"

ATetrisUSFX01GameModeBase::ATetrisUSFX01GameModeBase() {
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    /*DefaultPawnClass = ABoard::StaticClass();*/ //Se comenta esto para demostrar que ABoard se crea con el Singleton
    tiempo = 0;
}

void ATetrisUSFX01GameModeBase::BeginPlay()
{
    
    Super::BeginPlay();
    //SINGLETON BOARD
    ABoard* instancia = ABoard::GetInstancia(); //Se crea la instancia de ABoard (solo una)
    ABoard* instanciasecundaria = ABoard::GetInstancia(); //Se crea la instancia de ABoard (de nuevo, pero no se crea otra instancia, se usa la misma)
    FString direccion_puntero = FString::Printf(TEXT("Se ha spawneado un Board de tipo: %p"), instancia); //Se imprime la dirección de memoria de la direccion de memoria de instancia
    GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Cyan, direccion_puntero);
    FString direccion_puntero2 = FString::Printf(TEXT("Se ha spawneado un Board de tipo: %p"), instanciasecundaria); //Se imprime la dirección de memoria de la direccion de memoria de instancia2
    GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Purple, direccion_puntero2);
    for (TActorIterator<ACameraActor> it(GetWorld()); it; ++it)
    {
        UE_LOG(LogTemp, Warning, TEXT("Find camera: %s"), *(it->GetFName().ToString()));
        if (it->GetFName() == TEXT("BoardCamera"))
        {
            APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
            PC->SetViewTargetWithBlend(*it, 0.5);
            break;
        }
    }
}

// Called every frame
void ATetrisUSFX01GameModeBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    /*if (tiempo >= 30.0f) {
        UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
        tiempo = 0;
    }
    tiempo += DeltaTime;*/
}

void ATetrisUSFX01GameModeBase::ReiniciarJuego()
{
    UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
}

void ATetrisUSFX01GameModeBase::DestroyActorFunction()
{
    if (SpawnedPiece != nullptr)
    {
        // Displays a red message on the screen for 10 seconds
        GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Actor Block destruido"));
        SpawnedPiece->Destroy();
    }
}

