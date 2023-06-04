// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoCalienteFuego.h"
#include "Escenario.h"

// Sets default values
AEstadoCalienteFuego::AEstadoCalienteFuego()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MaterialEscenario = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/FuegoYAgua_Mat.FuegoYAgua_Mat'"));
}

// Called when the game starts or when spawned
void AEstadoCalienteFuego::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoCalienteFuego::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoCalienteFuego::EstablecerMaterialEscenario(AEscenario* escenario)
{
	escenario->EscenarioMesh->SetMaterial(0, MaterialEscenario);
	Escenario->CambiarEstado(Escenario->ObtenerEstadoalAzar());
}

void AEstadoCalienteFuego::EstablecerEscenario(AEscenario* escenario)
{
	Escenario = escenario;
}

void AEstadoCalienteFuego::EstablecerVelocidadEscenario(float _CoolDown, float _CoolLeft)
{
}

