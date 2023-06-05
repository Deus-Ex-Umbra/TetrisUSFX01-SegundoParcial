// Fill out your copyright notice in the Description page of Project Settings.


#include "PieceEstrategiaVerde.h"
#include "BlockHelado.h"

// Sets default values
APieceEstrategiaVerde::APieceEstrategiaVerde()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Componente = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Componente"));
	RootComponent = Componente;
}

// Called when the game starts or when spawned
void APieceEstrategiaVerde::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APieceEstrategiaVerde::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APieceEstrategiaVerde::Rotar(AActor* actor)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Rotando"));
	FRotator Rotacion = actor->GetActorRotation() + FRotator(FMath::RandRange(-36, 36) * 10, FMath::RandRange(-36, 36) * 10, FMath::RandRange(-36, 36) * 10);
	actor->SetActorRotation(Rotacion);
	if (FMath::RandRange(1, 150) == 132) ABlockHelado* Block = GetWorld()->SpawnActor<ABlockHelado>(FVector(0.0f, FMath::RandRange(-4, 4) * 10, FMath::RandRange(0, 16) * 10), Rotacion);
}

void APieceEstrategiaVerde::MoverIzquierdaDerecha(AActor* actor)
{
	FVector Posicion = FVector(0.0f, FMath::RandRange(-30, 30) + 105.0f, 175.0f);
	actor->SetActorLocation(Posicion);
}

void APieceEstrategiaVerde::MoverAdelanteAtras(AActor* actor)
{
	FVector Posicion = FVector(FMath::RandRange(-30, 30), 105.0f, 175.0f);
	actor->SetActorLocation(Posicion);
}

void APieceEstrategiaVerde::MoverArribaAbajo(AActor* actor)
{
	FVector Posicion = FVector(0.0f, 105.0f, FMath::RandRange(-30, 30) + 175.0f);
	actor->SetActorLocation(Posicion);
}

