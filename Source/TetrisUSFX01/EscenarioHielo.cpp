// Fill out your copyright notice in the Description page of Project Settings.


#include "EscenarioHielo.h"

AEscenarioHielo::AEscenarioHielo()
{
	UE_LOG(LogTemp, Warning, TEXT("EscenarioDeHielo"));
	NumeroEscenario = 2;
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
	EscenarioMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/EscenarioHielo_Mat.EscenarioHielo_Mat'"));
	LimitePiezasMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/Dragon_Mat.Dragon_Mat'"));
}

void AEscenarioHielo::BeginPlay()
{
	Super::BeginPlay();
	CrearEscenario();
}

void AEscenarioHielo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEscenarioHielo::CrearEscenario()
{
	EscenarioMesh->SetMaterial(0, EscenarioMaterial);
	LimitePiezasMesh->SetMaterial(0, LimitePiezasMaterial);
}

//AEscenario* AEscenarioHielo::ObtenerEscenario(AEscenario* escenario)
//{
//	return CrearEscenario(escenario);
//}

//void AEscenarioHielo::MostrarInformacion()
//{
//	UE_LOG(LogTemp, Warning, TEXT("EscenarioDeHielo"));
//	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::White, TEXT("Escenario Hielo ha sido creado"));
//}
