// Fill out your copyright notice in the Description page of Project Settings.


#include "NuevaNuevaPieceFachada.h"
#include "Piece.h"

// Sets default values
ANuevaNuevaPieceFachada::ANuevaNuevaPieceFachada()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Componente = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Componente"));
	RootComponent = Componente;
}

// Called when the game starts or when spawned
void ANuevaNuevaPieceFachada::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ANuevaNuevaPieceFachada::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

APiece* ANuevaNuevaPieceFachada::ObtenerPiece()
{
	NuevaNuevaPiece = GetWorld()->SpawnActor<APiece>(FVector(0.0f, 100.0f, 100.0f), FRotator(0.0f, 0.0f, 0.0f));
	NuevaNuevaPiece->SetIndice(FMath::RandRange(0, 6));
	NuevaNuevaPiece->SpawnBlocks();
	return NuevaNuevaPiece;
}

void ANuevaNuevaPieceFachada::EstablecerIndice()
{
	Indice = NuevaNuevaPiece->getIndice();
}

void ANuevaNuevaPieceFachada::EliminarPiece()
{
	NuevaNuevaPiece->EliminarPieza();
}

void ANuevaNuevaPieceFachada::MoverPiece()
{
	NuevaNuevaPiece->Mover();
}

int ANuevaNuevaPieceFachada::ObtenerIndice()
{
	EstablecerIndice();
	return Indice;
}

