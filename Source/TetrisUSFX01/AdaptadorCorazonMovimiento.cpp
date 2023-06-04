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
	Mx = x;
	My = y;
	Mz = z;
	Rx = x;
	Ry = y;
	Rz = z;
}

// Called when the game starts or when spawned
void AAdaptadorCorazonMovimiento::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAdaptadorCorazonMovimiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

