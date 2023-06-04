// Fill out your copyright notice in the Description page of Project Settings.


#include "CorazonFuego.h"
#include "CorazonVida.h"

// Sets default values
ACorazonFuego::ACorazonFuego()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACorazonFuego::BeginPlay()
{
	Vida->GetWorld()->SpawnActor<ACorazonVida>(ACorazonVida::StaticClass());
	Super::BeginPlay();
	block = GetWorld()->SpawnActor<ABlockFuego>(ABlockFuego::StaticClass());
}

// Called every frame
void ACorazonFuego::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ACorazonVida* ACorazonFuego::ObtenerCorazonVida()
{
	return Vida;
}

void ACorazonFuego::CrearBlock()
{
	Vida->EstablecerBlock(block);
}

