// Fill out your copyright notice in the Description page of Project Settings.


#include "Board.h"
#include "EngineUtils.h"
#include "DrawDebugHelpers.h"
#include "Escenario.h"
#include "EscenarioDeTierra.h"
#include "EscenarioDeAgua.h"
#include "EscenarioDeFuego.h"
#include "EscenarioHielo.h"
#include "EscenarioFactory.h"
#include "Kismet/GameplayStatics.h"
#include "DirectorVida.h"
#include "CorazonVida.h"
#include "CorazonFuego.h"
#include "CorazonAire.h"
#include "PublicadorPuntos.h"
#include "BlockObservador.h"
#include "PieceStrategiaRoja.h"
#include "PieceStrategiaAmarilla.h"
#include "PieceEstrategiaVerde.h"
ABoard::ABoard()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    tiempo = 0.0f;
    tiempocambio = 0.0f;
    Puntos = 0.0f;
}

// Called when the game starts or when spawned
void ABoard::BeginPlay()
{
    Super::BeginPlay();
    EstrategiaRoja = GetWorld()->SpawnActor<APieceStrategiaRoja>(APieceStrategiaRoja::StaticClass());
    EstrategiaAmarilla = GetWorld()->SpawnActor<APieceStrategiaAmarilla>(APieceStrategiaAmarilla::StaticClass());
    EstrategiaVerde = GetWorld()->SpawnActor<APieceEstrategiaVerde>(APieceEstrategiaVerde::StaticClass());
    PublicadorPuntos = GetWorld()->SpawnActor<APublicadorPuntos>(APublicadorPuntos::StaticClass());
    Observador = GetWorld()->SpawnActor<ABlockObservador>(FVector(-20.0f, -150.0f, 50.0f), FRotator(90.0f, 270.0f, 0.0f));
    Observador->EstablecerPublicador(PublicadorPuntos);
    for (TActorIterator<APiece> it(GetWorld()); it; ++it)
    {
        if (it->GetFName() == TEXT("DissmissPieces"))
        {
            it->Dismiss();
            it->Destroy();
        }
    }
    FabricadeEscenario = GetWorld()->SpawnActor<AEscenarioFactory>(AEscenarioFactory::StaticClass());
    Escenario = FabricadeEscenario->FabricarEscenario(FMath::RandRange(1, 4));
    Escen = Escenario->Inicializar();
    /*Escen = EscenarioF->FabricarEscenario(FMath::RandRange(1, 4));*/
    /*Escenario = GetWorld()->SpawnActor<AEscenario>(AEscenario::StaticClass());
    Escen = F*/
    /*Escen = Escenario->Inicializar();*/
    ////Escenario = EscenarioFabrica->FabricarEscenario(1);
}

/*No fue necesario hacer lo del libro, con esto bastaba, el del libro no me corrió :c*/
ABoard* ABoard::instancia = nullptr;
ABoard* ABoard::GetInstancia()
{
    if (instancia == nullptr) { //Como no hay instancia (nullptr) entonces se crea un nuevo ABoard
        instancia = NewObject<ABoard>(); //No se puede poner instancia = new ABoard(), así que se aplica esta forma
        GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, FString::Printf(TEXT("Board ha sido creado c:"))); //Mensaje de que se ha creado un nuevo ABoard
    }
    return instancia; //Se retorna la instancia c:
}
// Called every frame
void ABoard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (bGameOver)
    {
        return;
    }

    switch (Status)
    {
    case PS_NOT_INITED:
        SpawnearPiezas();
        EstablecerCoolLeft(CoolDown);
        Status = PS_MOVING;
        break;
    case PS_MOVING:
        /*CoolLeft -= DeltaTime;*/
        EstablecerCoolLeft(ObtenerCoolLeft() - DeltaTime);
        if (ObtenerCoolLeft() <= 0.0f)
        {
            MoveDown();
        }
        break;
    case PS_GOT_BOTTOM:
        /*NuevaPieza->Dismiss();
        NuevaPieza->Destroy();*/
        NuevaPieza->EliminarPieza();
        /*CoolLeft -= DeltaTime;*/
        EstablecerCoolLeft(ObtenerCoolLeft() - DeltaTime);
        if (CoolLeft <= 0.0f)
        {
            if (CurrentPiece)
            {
                CurrentPiece->Dismiss();
                CurrentPiece->Destroy();
            }
            CurrentPiece = nullptr;
            NewPiece();
            CoolLeft = CoolDown;
            EstablecerCoolLeft(CoolDown);
            Status = PS_MOVING;
            Puntos += 10;
            PublicadorPuntos->EstablecerPuntos(Puntos);
        }
        break;
    default:
        break;
    }
}

// Called to bind functionality to input
void ABoard::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAction("Rotate", IE_Pressed, this, &ABoard::Rotate);
    PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this, &ABoard::MoveLeft);
    PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this, &ABoard::MoveRight);
    PlayerInputComponent->BindAction("MoveDownToEnd", IE_Pressed, this, &ABoard::MoveDownToEnd);
    PlayerInputComponent->BindAction("NewPiece", IE_Pressed, this, &ABoard::NewPiece);
    //PlayerInputComponent->BindAction("CheckLine", IE_Pressed, this, &ABoard::CheckLine);

}

void ABoard::Rotate()
{
    if (CurrentPiece && Status != PS_GOT_BOTTOM)
    {
        CurrentPiece->TestRotate();
    }
}

void ABoard::MoveLeft()
{
    if (CurrentPiece)
    {
        CurrentPiece->MoveLeft();
        if (Status == PS_GOT_BOTTOM)
        {
            MoveDownToEnd();
        }
    }
}

void ABoard::MoveRight()
{
    if (CurrentPiece)
    {
        CurrentPiece->MoveRight();
        if (Status == PS_GOT_BOTTOM)
        {
            MoveDownToEnd();
        }
    }
}

void ABoard::MoveDown()
{
    if (CurrentPiece)
    {
        if (!CurrentPiece->MoveDown())
        {
            Status = PS_GOT_BOTTOM;
        }
        CoolLeft = CoolDown;
    }
}

void ABoard::NewPiece()
{
    CheckLine();
    if (CurrentPiece) {
        CurrentPiece->Dismiss();
        CurrentPiece->Destroy();
    }
    int AntiguoIndice = NuevaPieza->getIndice();
    CurrentPiece = GetWorld()->SpawnActor<APiece>(FVector(0.0f, 5.0f, 195.0f), FRotator(0.0f, 0.0f, 0.0f));
    CurrentPiece->SetIndice(AntiguoIndice);
    CurrentPiece->SpawnBlocks();
    if (NuevaPieza) {
        NuevaPieza->Dismiss();
        NuevaPieza->Destroy();
    }
    NuevaPieza = GetWorld()->SpawnActor<APiece>(FVector(0.0f, 105.0f, 175.0f), FRotator(0.0f, 0.0f, 0.0f));
    NuevaPieza->SetIndice(FMath::RandRange(0, 6));
    NuevaPieza->SpawnBlocks();
    bGameOver = CheckGameOver();
    switch (FMath::RandRange(1, 3)) {
    case 1:
        NuevaPieza->EstablecerEstrategia(EstrategiaRoja);
        break;
    case 2:
        NuevaPieza->EstablecerEstrategia(EstrategiaAmarilla);
        break;
    case 3:
        NuevaPieza->EstablecerEstrategia(EstrategiaVerde);
        break;
    default:
        break;
    }
    NuevaPieza->Mover();
    if (bGameOver)
    {
        UE_LOG(LogTemp, Warning, TEXT("Game Over!!!!!!!!"));
        /*if (GameOverSoundCue)
        {
            UGameplayStatics::PlaySoundAtLocation(GetWorld(), GameOverSoundCue, GetActorLocation(), GetActorRotation());
        }*/
    }
}

void ABoard::CheckLine()
{
    auto MoveDownFromLine = [this](int z) {
        FVector Location(0.0f, 0.0f, 5.0 * z + 100.0);
        FRotator Rotation(0.0f, 0.0f, 0.0f);
        TArray<struct FOverlapResult> OutOverlaps;
        FCollisionShape CollisionShape;
        FVector Extent(4.5f, 49.5f, 95.0 + 4.5 - 5.0 * z);
        CollisionShape.SetBox(Extent);
        DrawDebugBox(GetWorld(), Location, Extent, FColor::Purple, false, 1, 0, 1);
        FCollisionQueryParams Params;
        FCollisionResponseParams ResponseParam;
        if (GetWorld()->OverlapMultiByChannel(OutOverlaps,
            Location, Rotation.Quaternion(), ECollisionChannel::ECC_WorldDynamic,
            CollisionShape, Params, ResponseParam))
        {
            for (auto&& Result : OutOverlaps)
            {
                FVector NewLocation = Result.GetActor()->GetActorLocation();
                NewLocation.Z -= 10.0f;
                Result.GetActor()->SetActorLocation(NewLocation);
            }
        }
    };

    int z = 0;
    while (z < 20)
    {
        FVector Location(0.0f, 0.0f, 10.0f * z + 5.0f);
        FRotator Rotation(0.0f, 0.0f, 0.0f);
        TArray<struct FOverlapResult> OutOverlaps;
        FCollisionShape CollisionShape;
        CollisionShape.SetBox(FVector(4.0f, 49.0f, 4.0f));
        //DrawDebugBox(GetWorld(), Location, FVector(4.5f, 49.5f, 4.5f), FColor::Purple, false, 1, 0, 1);
        FCollisionQueryParams Params;
        FCollisionResponseParams ResponseParam;
        bool b = GetWorld()->OverlapMultiByChannel(OutOverlaps,
            Location, Rotation.Quaternion(), ECollisionChannel::ECC_WorldDynamic,
            CollisionShape, Params, ResponseParam);
        if (!b || OutOverlaps.Num() < 10)
        {
            ++z;
            continue;
        }
        else // this line is full, remove the line
        {
            UE_LOG(LogTemp, Warning, TEXT("Find FULL LINE at z=%d"), z);
            for (auto&& Result : OutOverlaps)
            {
                Result.GetActor()->Destroy();
            }
            MoveDownFromLine(z);
            Escenario->CambiarEscenario(Escen);
            Puntos += 40;
            PublicadorPuntos->EstablecerPuntos(Puntos);
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Puntos: %d"), PublicadorPuntos->ObtenerPuntos()));
            switch (Escenario->ObtenerEstado()) {
            case 1:
                EstablecerCoolDown(0.2);
                EstablecerCoolLeft(0.2);
            case 2:
                EstablecerCoolDown(0.7);
                EstablecerCoolLeft(0.7);
            case 3:
                EstablecerCoolDown(0.5);
                EstablecerCoolLeft(0.5);
            case 4:
                EstablecerCoolDown(FMath::RandRange(1, 10) * 0.1);
                EstablecerCoolLeft(FMath::RandRange(1, 10) * 0.1);
            }
            /*if (LineRemoveSoundCue)
            {
                UGameplayStatics::PlaySoundAtLocation(GetWorld(), LineRemoveSoundCue, GetActorLocation(), GetActorRotation());
            }*/
        }
    }
}

void ABoard::MoveDownToEnd()
{
    if (!CurrentPiece)
    {
        return;
    }

    while (CurrentPiece->MoveDown())
    {
    }

    /*if (MoveToEndSoundCue)
    {
        UGameplayStatics::PlaySoundAtLocation(GetWorld(), MoveToEndSoundCue, GetActorLocation(), GetActorRotation());
    }*/

    switch (Status)
    {
    case PS_MOVING:
        Status = PS_GOT_BOTTOM;
        CoolLeft = CoolDown;
        break;
    case PS_GOT_BOTTOM:
        break;
    default:
        UE_LOG(LogTemp, Warning, TEXT("Wrong status for MoveDownToEnd"));
        break;
    }
}

void ABoard::EstablecerCoolDown(float _CoolDown)
{
    CoolDown = _CoolDown;
}

void ABoard::EstablecerCoolLeft(float _CoolLeft)
{
    CoolLeft = _CoolLeft;
}

float ABoard::ObtenerCoolDown()
{
    return CoolDown;
}

float ABoard::ObtenerCoolLeft()
{
    return CoolLeft;
}

void ABoard::EstablecerGameOver(bool _bGameOver)
{
    bGameOver = _bGameOver;
}

bool ABoard::ObtenerGameOver()
{
    return true;
}

//void ABoard::SpawnearPiezas()
//{
//    UAdaptadorMovimientoPieza* Movimiento = NewObject<UAdaptadorMovimientoPieza>(this);
//    NuevaPieza = GetWorld()->SpawnActor<APiece>(FVector(0.0f, 105.0f, 175.0f), FRotator(0.0f, 0.0f, 0.0f), );
//    NuevaPieza->SetIndice(FMath::RandRange(0, 6));
//    NuevaPieza->SpawnBlocks();
//    NuevaPieza->EstablecerMovimiento(Movimiento);
//    NuevaPieza->MoverAleatoriamente(FMath::RandRange(-3, 3), FMath::RandRange(-3, 3), FMath::RandRange(-3, 3), this);
//   /* Movimiento->MoverAleatoriamente(FMath::RandRange(-4, 4), FMath::RandRange(-4, 4), FMath::RandRange(-4, 4), NuevaPieza);*/
//    CurrentPiece = GetWorld()->SpawnActor<APiece>(FVector(0.0f, 5.0f, 195.0f), FRotator(0.0f, 0.0f, 0.0f));
//    CurrentPiece->SetIndice(FMath::RandRange(0, 6));
//    CurrentPiece->SpawnBlocks();
//}

void ABoard::SpawnearPiezas()
{
    NuevaPieza = GetWorld()->SpawnActor<APiece>(FVector(0.0f, 105.0f, 175.0f), FRotator(0.0f, 0.0f, 0.0f));
    NuevaPieza->SetIndice(FMath::RandRange(0, 6));
    NuevaPieza->SpawnBlocks();
    CurrentPiece = GetWorld()->SpawnActor<APiece>(FVector(0.0f, 5.0f, 195.0f), FRotator(0.0f, 0.0f, 0.0f));
    CurrentPiece->SetIndice(FMath::RandRange(0, 6));
    CurrentPiece->SpawnBlocks();
    /*switch (FMath::RandRange(1, 3)) {
    case 1:
        NuevaPieza->EstablecerEstrategia(EstrategiaRoja);
        break;
    case 2:
        NuevaPieza->EstablecerEstrategia(EstrategiaAmarilla);
        break;
    case 3:
        NuevaPieza->EstablecerEstrategia(EstrategiaVerde);
        break;
    default:
        break;
    }
    NuevaPieza->Mover();*/
}

bool ABoard::CheckGameOver()
{
    if (!CurrentPiece)
    {
        UE_LOG(LogTemp, Warning, TEXT("NoPieces"));
        EstablecerGameOver(true);
        return true;
    }
    return CurrentPiece->CheckWillCollision([](FVector OldVector) { return OldVector; });
}
