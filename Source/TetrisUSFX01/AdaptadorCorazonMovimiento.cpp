// Fill out your copyright notice in the Description page of Project Settings.


#include "AdaptadorCorazonMovimiento.h"
#include "MovimientoRotacionAleatorios.h"

// Sets default values
AAdaptadorCorazonMovimiento::AAdaptadorCorazonMovimiento()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AAdaptadorCorazonMovimiento::MovimientoAzar(float x, float y, float z)
{
	Movimientos->MovimientoLateral(x, y, z);
	Movimientos->MovimientoRotacion(x, y, z);
}

// Called when the game starts or when spawned
void AAdaptadorCorazonMovimiento::BeginPlay()
{
	Super::BeginPlay();
	Movimientos = GetWorld()->SpawnActor<AMovimientoRotacionAleatorios>(AMovimientoRotacionAleatorios::StaticClass());
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Adaptador Corazon Movimiento"));
}

// Called every frame
void AAdaptadorCorazonMovimiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

