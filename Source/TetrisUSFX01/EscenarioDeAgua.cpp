// Fill out your copyright notice in the Description page of Project Settings.


#include "EscenarioDeAgua.h"
#include "DirectorVida.h"
#include "CorazonAire.h"
#include "CorazonVida.h"

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
}

void AEscenarioDeAgua::BeginPlay()
{
	Super::BeginPlay();
	CrearEscenario();
	Director = GetWorld()->SpawnActor<ADirectorVida>(ADirectorVida::StaticClass());
	CorazonAire = GetWorld()->SpawnActor<ACorazonAire>(ACorazonAire::StaticClass());
	Director->EstablecerBuilderVida(CorazonAire);
	Director->ConstruirVida();
	ACorazonVida* Corazon = Director->ObtenerVida();
}

void AEscenarioDeAgua::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEscenarioDeAgua::CrearEscenario()
{
	EscenarioMesh->SetMaterial(0, EscenarioMaterial);
	LimitePiezasMesh->SetMaterial(0, LimitePiezasMaterial);
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
