// Fill out your copyright notice in the Description page of Project Settings.


#include "EscenarioDeAgua.h"
#include "DirectorVida.h"
#include "BuilderVida.h"
#include "CorazonAire.h"
#include "CorazonVida.h"
#include "EstadodelEscenario.h"
#include "EstadoNormalRoca.h"
#include "EstadoCalienteFuego.h"
#include "EstadoFrioHielo.h"
#include "AdaptadorCorazonMovimiento.h"
#include "EstadoTurbulentoAgua.h"

AEscenarioDeAgua::AEscenarioDeAgua()
{
	UE_LOG(LogTemp, Warning, TEXT("EscenarioDeAgua"));
	NumeroEscenario = 3;
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
	EscenarioMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/EscenarioAgua_Mat.EscenarioAgua_Mat'"));
	LimitePiezasMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/StarterContent/Materials/M_Water_Ocean.M_Water_Ocean'"));
	Tiempo = 0.0f;
}

void AEscenarioDeAgua::BeginPlay()
{
	Super::BeginPlay();
	AAdaptadorCorazonMovimiento* Adaptador = GetWorld()->SpawnActor<AAdaptadorCorazonMovimiento>(AAdaptadorCorazonMovimiento::StaticClass());
	CorazonAire = GetWorld()->SpawnActor<ACorazonAire>(FVector(0.0f, -150.0f, 75.0f), FRotator(0.0f, 0.0f, 0.0f));
	CorazonAire->EstablecerMovimiento(Adaptador);
	Director = GetWorld()->SpawnActor<ADirectorVida>(ADirectorVida::StaticClass());
	CrearEscenario();
	CorazonAire->Colorear(LimitePiezasMaterial);
	Inicializar();
}

void AEscenarioDeAgua::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//if(Tiempo >= 0.5f)
	//{
	//	CorazonAire->MoverAzar(FMath::RandRange(1, 3), FMath::RandRange(1, 3), FMath::RandRange(1, 3));
	//	Tiempo = 0.0f;
	//}
	//Tiempo += DeltaTime;
}

void AEscenarioDeAgua::CrearEscenario()
{
	EscenarioMesh->SetMaterial(0, EscenarioMaterial);
	LimitePiezasMesh->SetMaterial(0, LimitePiezasMaterial);
	Director->EstablecerBuilderVida(CorazonAire);
	Director->ConstruirVida();
}

void AEscenarioDeAgua::Inicializar()
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

//AEscenario* AEscenarioDeAgua::ObtenerEscenario(AEscenario* escenario)
//{
//	CrearEscenario(escenario);
//	return GetWorld()->SpawnActor<AEscenarioDeAgua>(AEscenarioDeAgua::StaticClass());
//}

//void AEscenarioDeAgua::MostrarInformacion()
//{
//	UE_LOG(LogTemp, Warning, TEXT("EscenarioDeAgua"));
//	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, TEXT("Escenario Agua ha sido creado"));
//}
