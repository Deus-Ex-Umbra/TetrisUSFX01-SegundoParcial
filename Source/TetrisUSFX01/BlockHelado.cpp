// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockHelado.h"

void ABlockHelado::BeginPlay()
{
	Super::BeginPlay();
}

ABlockHelado::ABlockHelado()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockMeshHelado(TEXT("StaticMesh'/Game/Mesh/BlockHielo.BlockHielo'"));
	if (BlockMeshHelado.Succeeded()) {
		BlockMesh->SetStaticMesh(BlockMeshHelado.Object);
		BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		BlockMesh->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	}
}

void ABlockHelado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABlockHelado::MostrarInformacion()
{

}
