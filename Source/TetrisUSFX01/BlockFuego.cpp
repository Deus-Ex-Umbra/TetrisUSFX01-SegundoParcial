// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockFuego.h"

ABlockFuego::ABlockFuego()
{
	UE_LOG(LogTemp, Warning, TEXT("Constructor de BlockFuego"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockMeshBrilloso(TEXT("StaticMesh'/Game/Mesh/BlockFuego.BlockFuego'"));
	if (BlockMeshBrilloso.Succeeded()) {
		BlockMesh->SetStaticMesh(BlockMeshBrilloso.Object);
		BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		BlockMesh->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	}
}

void ABlockFuego::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABlockFuego::MostrarInformacion()
{
	UE_LOG(LogTemp, Warning, TEXT("Soy un bloque fuego"));
}

void ABlockFuego::BeginPlay()
{
	Super::BeginPlay();
	MostrarInformacion();
}
