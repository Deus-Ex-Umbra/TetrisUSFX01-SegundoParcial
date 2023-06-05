// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockDorado.h"

ABlockDorado::ABlockDorado()
{
	UE_LOG(LogTemp, Warning, TEXT("Constructor BlockDorado"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockMeshDorado(TEXT("StaticMesh'/Game/Mesh/BlockDorado.BlockDorado'"));
	if (BlockMeshDorado.Succeeded()) {
		BlockMesh->SetStaticMesh(BlockMeshDorado.Object);
		BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		BlockMesh->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	}
}

void ABlockDorado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABlockDorado::MostrarInformacion()
{
	UE_LOG(LogTemp, Warning, TEXT("Soy un BloqueDorado"));
	GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("BloqueDorado"));
}

void ABlockDorado::BeginPlay()
{
	Super::BeginPlay();
}
