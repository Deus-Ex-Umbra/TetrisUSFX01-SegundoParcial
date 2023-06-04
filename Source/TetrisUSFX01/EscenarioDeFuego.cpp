// Fill out your copyright notice in the Description page of Project Settings.


#include "EscenarioDeFuego.h"
#include "DirectorVida.h"
#include "BuilderVida.h"
#include "CorazonFuego.h"
#include "CorazonVida.h"
#include "EstadodelEscenario.h"
#include "EstadoNormalRoca.h"
#include "EstadoCalienteFuego.h"
#include "EstadoFrioHielo.h"
#include "AdaptadorCorazonMovimiento.h"
#include "EstadoTurbulentoAgua.h"

AEscenarioDeFuego::AEscenarioDeFuego()
{
	UE_LOG(LogTemp, Warning, TEXT("EscenarioDeFuego"));
	NumeroEscenario = 1;
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
	EscenarioMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/FuegoYAgua_Mat.FuegoYAgua_Mat'"));
	LimitePiezasMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/EscenarioFuego_Mat.EscenarioFuego_Mat'"));
	Tiempo = 0.0f;
}

void AEscenarioDeFuego::BeginPlay()
{
	Super::BeginPlay();
	AAdaptadorCorazonMovimiento* Adaptador = GetWorld()->SpawnActor<AAdaptadorCorazonMovimiento>(AAdaptadorCorazonMovimiento::StaticClass());
	Director = GetWorld()->SpawnActor<ADirectorVida>(ADirectorVida::StaticClass());
	CorazonFuego = GetWorld()->SpawnActor<ACorazonFuego>(FVector(0.0f, -125.0f, 125.0f), FRotator(0.0f, 0.0f, 0.0f));
	CorazonFuego->EstablecerMovimiento(Adaptador);
	CrearEscenario();
	CorazonFuego->Colorear(LimitePiezasMaterial);
	Inicializar();
	/*CorazonFuego->SetActorLocation(FVector(0.0f, 0.0f, 100.0f));*/
}

void AEscenarioDeFuego::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Tiempo >= 0.3f)
	{
		CorazonFuego->MoverAzar(FMath::RandRange(1, 4), FMath::RandRange(1, 4), FMath::RandRange(1, 4));
		Tiempo = 0.0f;
	}
	Tiempo += DeltaTime;
}

void AEscenarioDeFuego::CrearEscenario()
{
	EscenarioMesh->SetMaterial(0, EscenarioMaterial);
	LimitePiezasMesh->SetMaterial(0, LimitePiezasMaterial);
	Director->EstablecerBuilderVida(CorazonFuego);
	Director->ConstruirVida();
}
void AEscenarioDeFuego::Inicializar()
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
//AEscenario* AEscenarioDeFuego::ObtenerEscenario(AEscenario* escenario)
//{
//	return CrearEscenario(escenario);
//}
//
//void AEscenarioDeFuego::MostrarInformacion()
//{
//	UE_LOG(LogTemp, Warning, TEXT("EscenarioDeFuego"));
//	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("Escenario Fuego ha sido creado"));
//}
