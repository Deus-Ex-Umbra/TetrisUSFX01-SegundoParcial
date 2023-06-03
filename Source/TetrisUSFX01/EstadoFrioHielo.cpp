// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoFrioHielo.h"
#include "Escenario.h"

// Sets default values
AEstadoFrioHielo::AEstadoFrioHielo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MaterialEscenario = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/EscenarioHielo_Mat.EscenarioHielo_Mat'"));
}

// Called when the game starts or when spawned
void AEstadoFrioHielo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoFrioHielo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoFrioHielo::EstablecerMaterialEscenario(AEscenario* escenario)
{
	escenario->EscenarioMesh->SetMaterial(0, MaterialEscenario);
	escenario->CambiarEstado(escenario->ObtenerEstadoalAzar());
}

void AEstadoFrioHielo::EstablecerEscenario(AEscenario* escenario)
{
	Escenario = escenario;
}

void AEstadoFrioHielo::EstablecerVelocidadEscenario(float _CoolDown, float _CoolLeft)
{
}

