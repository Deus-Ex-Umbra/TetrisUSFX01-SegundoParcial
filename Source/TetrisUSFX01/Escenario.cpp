// Fill out your copyright notice in the Description page of Project Settings.


#include "Escenario.h"
#include "EstadoNormalRoca.h"
#include "EstadoCalienteFuego.h"
#include "EstadoFrioHielo.h"
#include "EstadoTurbulentoAgua.h"
#include "EscenarioFactory.h"
// Sets default values
AEscenario::AEscenario()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEscenario::BeginPlay()
{
	Super::BeginPlay();
}

AEscenario* AEscenario::Inicializar()
{
	/*EstadoCalienteFuego = GetWorld()->SpawnActor<AEstadoCalienteFuego>(AEstadoCalienteFuego::StaticClass());
	EstadoCalienteFuego->EstablecerEscenario(this);
	EstadoFrioHielo = GetWorld()->SpawnActor<AEstadoFrioHielo>(AEstadoFrioHielo::StaticClass());
	EstadoFrioHielo->EstablecerEscenario(this);
	EstadoNormalRoca = GetWorld()->SpawnActor<AEstadoNormalRoca>(AEstadoNormalRoca::StaticClass());
	EstadoNormalRoca->EstablecerEscenario(this);
	EstadoTurbulentoAgua = GetWorld()->SpawnActor<AEstadoTurbulentoAgua>(AEstadoTurbulentoAgua::StaticClass());
	EstadoTurbulentoAgua->EstablecerEscenario(this);
	EstadoPrincipal = ObtenerEstadoalAzar();*/
	/*AEscenarioFactory* EscenarioFabrica = GetWorld()->SpawnActor<AEscenarioFactory>(AEscenarioFactory::StaticClass());
	AEscenario* Escena = EscenarioFabrica->FabricarEscenario(FMath::RandRange(1, 4));
	return Escena;*/
	return nullptr;
}
// Called every frame
void AEscenario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEscenario::CambiarEscenario(AEscenario* _escenario)
{
	EstadoPrincipal->EstablecerMaterialEscenario(_escenario);
}

void AEscenario::CambiarEstado(IEstadodelEscenario* _estado)
{
	EstadoPrincipal = _estado;
}

IEstadodelEscenario* AEscenario::ObtenerEstadoalAzar()
{
	/*switch (FMath::RandRange(1, 4)) {*/
	/*case 1:
		return EstadoCalienteFuego;
	case 2:
		return EstadoFrioHielo;
	case 3:
		return EstadoNormalRoca;
	case 4:
		return EstadoTurbulentoAgua;*/
	/*default:*/
		return nullptr;
	/*}*/
}

