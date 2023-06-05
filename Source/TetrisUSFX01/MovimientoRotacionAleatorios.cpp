// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoRotacionAleatorios.h"

// Sets default values
AMovimientoRotacionAleatorios::AMovimientoRotacionAleatorios()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Tiempo = 0.0f;
}

void AMovimientoRotacionAleatorios::MovimientoLateral(float _Mx, float _My, float _Mz, AActor* actor)
{
	/*GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Movimiento Lateral"));*/
	FVector NuevaPosicion = actor->GetActorLocation() + FVector(FMath::RandRange(-_Mx, _Mx), FMath::RandRange(-_My, _My), FMath::RandRange(-_Mz, _Mz));
	actor->SetActorRelativeLocation(NuevaPosicion);
}

void AMovimientoRotacionAleatorios::MovimientoRotacion(float _Rx, float _Ry, float _Rz, AActor* actor)
{
	/*GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Movimiento Rotacion"));*/
	FRotator NuevaRotacion = FRotator(FMath::RandRange(-_Rx, _Rx), FMath::RandRange(-_Ry, _Ry), FMath::RandRange(-_Rz, _Rz));
	actor->SetActorRelativeRotation(NuevaRotacion);
}

// Called when the game starts or when spawned
void AMovimientoRotacionAleatorios::BeginPlay()
{
	Super::BeginPlay();
	/*GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Movimiento Rotacion Aleatorios"));*/
}

// Called every frame
void AMovimientoRotacionAleatorios::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

