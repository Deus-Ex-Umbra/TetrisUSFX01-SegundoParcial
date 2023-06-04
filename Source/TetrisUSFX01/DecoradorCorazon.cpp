// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoradorCorazon.h"

// Sets default values
ADecoradorCorazon::ADecoradorCorazon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADecoradorCorazon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADecoradorCorazon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADecoradorCorazon::MoverAzar(float x, float y, float z)
{
	Corazon->MoverAzar(x, y, z);
}

void ADecoradorCorazon::Colorear(UMaterialInterface* Material)
{
	Corazon->Colorear(Material);
}

void ADecoradorCorazon::EstablecerCorazon(ICorazon* _Corazon)
{
	Corazon = _Corazon;
}

