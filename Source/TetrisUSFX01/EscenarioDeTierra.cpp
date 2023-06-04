// Fill out your copyright notice in the Description page of Project Settings.


#include "EscenarioDeTierra.h"
#include "DirectorVida.h"
#include "BuilderVida.h"
#include "CorazonVida.h"
#include "CorazonFuego.h"
#include "EstadodelEscenario.h"
#include "EstadoNormalRoca.h"
#include "EstadoCalienteFuego.h"
#include "EstadoFrioHielo.h"
#include "AdaptadorCorazonMovimiento.h"
#include "EstadoTurbulentoAgua.h"

AEscenarioDeTierra::AEscenarioDeTierra()
{
	NumeroEscenario = 4;
	EscenarioMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EscenarioMesh"));
	LimitePiezasMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LimitePiezasMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>EMesh(TEXT("StaticMesh'/Game/Mesh/Shape_Plane.Shape_Plane'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>LMesh(TEXT("StaticMesh'/Game/Mesh/frame.frame'"));
	if (EMesh.Succeeded())
	{
		EscenarioMesh->SetStaticMesh(EMesh.Object);
		EscenarioMesh->SetRelativeLocation(FVector(50.0f, 0.0f, 100.0f));
		EscenarioMesh->SetWorldScale3D(FVector(3.0f, 4.0f, 1.0f));
		EscenarioMesh->SetRelativeRotation(FRotator(90.0f, 90.0f, 90.0f));
	}
	if (LMesh.Succeeded())
	{
		LimitePiezasMesh->SetStaticMesh(LMesh.Object);
		LimitePiezasMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
	EscenarioMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/EscenarioTierra_Mat.EscenarioTierra_Mat'"));
	LimitePiezasMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/StarterContent/Materials/M_Rock_Sandstone.M_Rock_Sandstone'"));
	Tiempo = 0.0f;
}

void AEscenarioDeTierra::BeginPlay()
{
	Super::BeginPlay();
	AAdaptadorCorazonMovimiento* Adaptador = GetWorld()->SpawnActor<AAdaptadorCorazonMovimiento>(AAdaptadorCorazonMovimiento::StaticClass());
	Director = GetWorld()->SpawnActor<ADirectorVida>(ADirectorVida::StaticClass());
	CorazonFuego = GetWorld()->SpawnActor<ACorazonFuego>(FVector(0.0f, -125.0f, 125.0f), FRotator(0.0f, 0.0f, 0.0f));
	CorazonFuego->EstablecerMovimiento(Adaptador);
	CrearEscenario();
	CorazonFuego->Colorear(LimitePiezasMaterial);
	Inicializar();
}

void AEscenarioDeTierra::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Tiempo >= 1.0f)
	{
		CorazonFuego->MoverAzar(FMath::RandRange(1, 3), FMath::RandRange(1, 3), FMath::RandRange(1, 3));
		Tiempo = 0.0f;
	}
	else
	Tiempo += DeltaTime;
}

void AEscenarioDeTierra::CrearEscenario()
{
	EscenarioMesh->SetMaterial(0, EscenarioMaterial);
	LimitePiezasMesh->SetMaterial(0, LimitePiezasMaterial);
	Director->EstablecerBuilderVida(CorazonFuego);
	Director->ConstruirVida();
	Corazon = Director->ObtenerVida();
}

void AEscenarioDeTierra::Inicializar()
{
	EstadoCalienteFuego = GetWorld()->SpawnActor<AEstadoCalienteFuego>(AEstadoCalienteFuego::StaticClass());
	EstadoCalienteFuego->EstablecerEscenario(this);
	EstadoFrioHielo = GetWorld()->SpawnActor<AEstadoFrioHielo>(AEstadoFrioHielo::StaticClass());
	EstadoFrioHielo->EstablecerEscenario(this);
	EstadoNormalRoca = GetWorld()->SpawnActor<AEstadoNormalRoca>(AEstadoNormalRoca::StaticClass());
	EstadoNormalRoca->EstablecerEscenario(this);
	EstadoTurbulentoAgua = GetWorld()->SpawnActor<AEstadoTurbulentoAgua>(AEstadoTurbulentoAgua::StaticClass());
	EstadoTurbulentoAgua->EstablecerEscenario(this);
	EstadoPrincipal = EstadoNormalRoca;
}

//AEscenario* AEscenarioDeTierra::ObtenerEscenario(AEscenario* escenario)
//{
//	return CrearEscenario(escenario);
//}

//void AEscenarioDeTierra::MostrarInformacion()
//{
//	UE_LOG(LogTemp, Warning, TEXT("EscenarioDeTierra"));
//	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("Escenario Tierra ha sido creado"));
//}
