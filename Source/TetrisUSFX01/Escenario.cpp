// Fill out your copyright notice in the Description page of Project Settings.


#include "Escenario.h"
#include "EstadodelEscenario.h"
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
	EstadoCalienteFuego = GetWorld()->SpawnActor<AEstadoCalienteFuego>(AEstadoCalienteFuego::StaticClass());
	EstadoCalienteFuego->EstablecerEscenario(this);
	EstadoFrioHielo = GetWorld()->SpawnActor<AEstadoFrioHielo>(AEstadoFrioHielo::StaticClass());
	EstadoFrioHielo->EstablecerEscenario(this);
	EstadoNormalRoca = GetWorld()->SpawnActor<AEstadoNormalRoca>(AEstadoNormalRoca::StaticClass());
	EstadoNormalRoca->EstablecerEscenario(this);
	EstadoTurbulentoAgua = GetWorld()->SpawnActor<AEstadoTurbulentoAgua>(AEstadoTurbulentoAgua::StaticClass());
	EstadoTurbulentoAgua->EstablecerEscenario(this);
	EstadoPrincipal = EstadoNormalRoca;
	EstablecerNumeroEstado(EstadoPrincipal);
}

//AEscenario* AEscenario::Inicializar()
//{
//	return this;
//}
// Called every frame
void AEscenario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

AEscenario* AEscenario::Inicializar()
{
	return this;
}

void AEscenario::CambiarEscenario(AEscenario* _escenario)
{
	EstadoPrincipal->EstablecerMaterialEscenario(_escenario);
}

void AEscenario::CambiarEstado(IEstadodelEscenario* _estado)
{
	EstadoPrincipal = _estado;
	EstablecerNumeroEstado(_estado);
}

IEstadodelEscenario* AEscenario::ObtenerEstadoalAzar()
{
	switch (FMath::RandRange(1, 4)) {
	case 1:
		return EstadoCalienteFuego;
	case 2:
		return EstadoFrioHielo;
	case 3:
		return EstadoNormalRoca;
	case 4:
		return EstadoTurbulentoAgua;
	default:
		return EstadoNormalRoca;
	}
}

void AEscenario::EstablecerNumeroEstado(IEstadodelEscenario* _estado)
{
	if (_estado == EstadoCalienteFuego) NumeroEscenario = 1;
	else if (_estado == EstadoFrioHielo) NumeroEscenario = 2;
	else if (_estado == EstadoNormalRoca) NumeroEscenario = 3;
	else if (_estado == EstadoTurbulentoAgua) NumeroEscenario = 4;
}

int AEscenario::ObtenerEstado()
{
	return NumeroEscenario;
}



