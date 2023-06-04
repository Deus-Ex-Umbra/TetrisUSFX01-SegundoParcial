// Fill out your copyright notice in the Description page of Project Settings.


#include "CorazonAire.h"
#include "CorazonVida.h"


// Sets default values
ACorazonAire::ACorazonAire()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACorazonAire::BeginPlay()
{
	Vida = GetWorld()->SpawnActor<ACorazonVida>(ACorazonVida::StaticClass());
	Super::BeginPlay();
	block = GetWorld()->SpawnActor<ABlockAire>(ABlockAire::StaticClass());
}

// Called every frame
void ACorazonAire::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ACorazonVida* ACorazonAire::ObtenerCorazonVida()
{
	return Vida;
}


void ACorazonAire::CrearBlock()
{
	Vida->EstablecerBlock(block);
}

