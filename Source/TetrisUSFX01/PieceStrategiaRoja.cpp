// Fill out your copyright notice in the Description page of Project Settings.


#include "PieceStrategiaRoja.h"
#include "BlockFuego.h"
// Sets default values
APieceStrategiaRoja::APieceStrategiaRoja()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Material = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/CorazonYZ_Mat.CorazonYZ_Mat'"));
	Componente = CreateDefaultSubobject<USceneComponent>("Pieces Scene");
	RootComponent = Componente;
}

// Called when the game starts or when spawned
void APieceStrategiaRoja::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APieceStrategiaRoja::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APieceStrategiaRoja::Rotar(AActor* actor)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Rotando"));
	FRotator Rotacion = actor->GetActorRotation() + FRotator(FMath::RandRange(-36, 36) * 10, FMath::RandRange(-36, 36) * 10, FMath::RandRange(-36, 36) * 10);
	actor->SetActorRotation(Rotacion);
	if (FMath::RandRange(1, 100) == 7) ABlockFuego* Block = GetWorld()->SpawnActor<ABlockFuego>(FVector(0.0f, FMath::RandRange(-4, 4) * 10, FMath::RandRange(0, 16) * 10), Rotacion);
}

void APieceStrategiaRoja::MoverIzquierdaDerecha(AActor* actor)
{
	FVector Posicion = FVector(0.0f, FMath::RandRange(-5, 5) + 105.0f, 175.0f);
	actor->SetActorLocation(Posicion);
}

void APieceStrategiaRoja::MoverAdelanteAtras(AActor* actor)
{
	FVector Posicion = FVector(FMath::RandRange(-5, 5), 105.0f, 175.0f);
	actor->SetActorLocation(Posicion);
}

void APieceStrategiaRoja::MoverArribaAbajo(AActor* actor)
{
	FVector Posicion = FVector(0.0f, 105.0f, FMath::RandRange(-5, 5) + 175.0f);
	actor->SetActorLocation(Posicion);
}

