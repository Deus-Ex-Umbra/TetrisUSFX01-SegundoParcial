// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockAire.h"

ABlockAire::ABlockAire()
{
	UE_LOG(LogTemp, Warning, TEXT("Constructor de BlockAire"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockMeshBrilloso(TEXT("StaticMesh'/Game/Mesh/BlockAire.BlockAire'"));
	if (BlockMeshBrilloso.Succeeded()) {
		BlockMesh->SetStaticMesh(BlockMeshBrilloso.Object);
		BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		BlockMesh->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	}
}

void ABlockAire::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABlockAire::MostrarInformacion()
{
	UE_LOG(LogTemp, Warning, TEXT("Soy un bloque aire"));
}

void ABlockAire::BeginPlay()
{
	
	Super::BeginPlay();
	MostrarInformacion();
}
