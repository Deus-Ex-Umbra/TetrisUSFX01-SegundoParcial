// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoNormalRoca.h"
#include "Escenario.h"

// Sets default values
AEstadoNormalRoca::AEstadoNormalRoca()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MaterialEscenario = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/EscenarioTierra_Mat.EscenarioTierra_Mat'"));
}

// Called when the game starts or when spawned
void AEstadoNormalRoca::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoNormalRoca::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoNormalRoca::EstablecerMaterialEscenario(AEscenario* escenario)
{
	escenario->EscenarioMesh->SetMaterial(0, MaterialEscenario);
	Escenario->CambiarEstado(Escenario->ObtenerEstadoalAzar());
}

void AEstadoNormalRoca::EstablecerEscenario(AEscenario* escenario)
{
	Escenario = escenario;
}

void AEstadoNormalRoca::EstablecerVelocidadEscenario(float _CoolDown, float _CoolLeft)
{
}

