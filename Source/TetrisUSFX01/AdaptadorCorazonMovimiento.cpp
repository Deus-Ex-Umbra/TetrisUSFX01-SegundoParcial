// Fill out your copyright notice in the Description page of Project Settings.


#include "AdaptadorCorazonMovimiento.h"
#include "MovimientoRotacionAleatorios.h"

// Sets default values
AAdaptadorCorazonMovimiento::AAdaptadorCorazonMovimiento()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateAbstractDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;
}

void AAdaptadorCorazonMovimiento::MovimientoAzar(float x, float y, float z, AActor* actor)
{
	Movimientos = GetWorld()->SpawnActor<AMovimientoRotacionAleatorios>(AMovimientoRotacionAleatorios::StaticClass());
	Movimientos->MovimientoLateral(x, y, z, actor);
	Movimientos->MovimientoRotacion(x, y, z, actor);
}

// Called when the game starts or when spawned
void AAdaptadorCorazonMovimiento::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Adaptador Corazon Movimiento"));
}

// Called every frame
void AAdaptadorCorazonMovimiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

