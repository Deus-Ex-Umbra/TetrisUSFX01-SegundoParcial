// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoTurbulentoAgua.h"
#include "Escenario.h"

// Sets default values
AEstadoTurbulentoAgua::AEstadoTurbulentoAgua()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MaterialEscenario = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/EscenarioAgua_Mat.EscenarioAgua_Mat'"));
}

// Called when the game starts or when spawned
void AEstadoTurbulentoAgua::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoTurbulentoAgua::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoTurbulentoAgua::EstablecerMaterialEscenario(AEscenario* escenario)
{
	escenario->EscenarioMesh->SetMaterial(0, MaterialEscenario);
	Escenario->CambiarEstado(Escenario->ObtenerEstadoalAzar());
}

void AEstadoTurbulentoAgua::EstablecerEscenario(AEscenario* escenario)
{
	Escenario = escenario;
}

void AEstadoTurbulentoAgua::EstablecerVelocidadEscenario(float _CoolDown, float _CoolLeft)
{
}

