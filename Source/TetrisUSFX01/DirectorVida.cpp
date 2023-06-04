// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorVida.h"
#include "BuilderVida.h"
// Sets default values
ADirectorVida::ADirectorVida()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorVida::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorVida::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirectorVida::EstablecerBuilderVida(AActor* newBuilderVida)
{
	BuilderVida = Cast<IBuilderVida>(newBuilderVida);
}

void ADirectorVida::ConstruirVida()
{
	BuilderVida->CrearVida();
}

ACorazonVida* ADirectorVida::ObtenerVida()
{
	return BuilderVida->ObtenerCorazonVida();
}
