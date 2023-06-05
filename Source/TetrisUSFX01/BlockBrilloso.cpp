// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockBrilloso.h"

ABlockBrilloso::ABlockBrilloso()
{
	UE_LOG(LogTemp, Warning, TEXT("Constructor de BlockBrilloso"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockMeshBrilloso(TEXT("StaticMesh'/Game/Mesh/BlockBrilloso.BlockBrilloso'"));
	if (BlockMeshBrilloso.Succeeded()) {
		BlockMesh->SetStaticMesh(BlockMeshBrilloso.Object);
		BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		BlockMesh->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	}
}

void ABlockBrilloso::BeginPlay()
{
	Super::BeginPlay();
}

void ABlockBrilloso::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABlockBrilloso::MostrarInformacion()
{
	UE_LOG(LogTemp, Warning, TEXT("Soy un bloque brilloso"));
	GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::White, TEXT("BloqueBrilloso"));
}
