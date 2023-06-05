// Fill out your copyright notice in the Description page of Project Settings.


#include "PieceStrategiaAmarilla.h"
#include "BlockDorado.h"

// Sets default values
APieceStrategiaAmarilla::APieceStrategiaAmarilla()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Componente = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Componente"));
	RootComponent = Componente;
}

// Called when the game starts or when spawned
void APieceStrategiaAmarilla::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APieceStrategiaAmarilla::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APieceStrategiaAmarilla::Rotar(AActor* actor)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Rotando"));
	FRotator Rotacion = actor->GetActorRotation() + FRotator(FMath::RandRange(-36, 36) * 10, FMath::RandRange(-36, 36) * 10, FMath::RandRange(-36, 36) * 10);
	actor->SetActorRotation(Rotacion);
	if (FMath::RandRange(1, 75) == 45) ABlockDorado* Block = GetWorld()->SpawnActor<ABlockDorado>(FVector(0.0f, FMath::RandRange(-4, 4) * 10, FMath::RandRange(0, 16) * 10), Rotacion);
}

void APieceStrategiaAmarilla::MoverIzquierdaDerecha(AActor* actor)
{
	FVector Posicion = actor->GetActorLocation() + FVector(0.0f, FMath::RandRange(-5, 5), 0.0f);
	actor->SetActorLocation(Posicion);
}

void APieceStrategiaAmarilla::MoverAdelanteAtras(AActor* actor)
{
	FVector Posicion = actor->GetActorLocation() + FVector(FMath::RandRange(-5, 5), 0.0f, 0.0f);
	actor->SetActorLocation(Posicion);
}

void APieceStrategiaAmarilla::MoverArribaAbajo(AActor* actor)
{
	FVector Posicion = actor->GetActorLocation() + FVector(0.0f, 0.0f, FMath::RandRange(-5, 5));
	actor->SetActorLocation(Posicion);
}

