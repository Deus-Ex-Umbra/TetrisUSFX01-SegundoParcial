// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoRotacionAleatorios.h"

// Sets default values
AMovimientoRotacionAleatorios::AMovimientoRotacionAleatorios()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Tiempo = 0.0f;
}

void AMovimientoRotacionAleatorios::MovimientoLateral(float _Mx, float _My, float _Mz)
{
	FVector NuevaPosicion = GetActorLocation() + FVector(FMath::RandRange(-_Mx, _Mx), FMath::RandRange(-_My, _My), FMath::RandRange(-_Mz, _Mz));
	SetActorLocation(NuevaPosicion);
}

void AMovimientoRotacionAleatorios::MovimientoRotacion(float _Rx, float _Ry, float _Rz)
{
	FRotator NuevaRotacion = FRotator(FMath::RandRange(-_Rx, _Rx), FMath::RandRange(-_Ry, _Ry), FMath::RandRange(-_Rz, _Rz));
	SetActorRotation(NuevaRotacion);
}

// Called when the game starts or when spawned
void AMovimientoRotacionAleatorios::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMovimientoRotacionAleatorios::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Tiempo >= 0.5f)
	{
		MovimientoLateral(Mx, My, Mz);
		MovimientoRotacion(Rx, Ry, Rz);
		Tiempo = 0.0f;
	}
	Tiempo += DeltaTime;
}

