// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockFogoso.h"

void ABlockFogoso::BeginPlay()
{
	Super::BeginPlay();
}

ABlockFogoso::ABlockFogoso()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockMeshFogoso(TEXT("StaticMesh'/Game/Mesh/BlockFogoso.BlockFogoso'"));
	if (BlockMeshFogoso.Succeeded()) {
		BlockMesh->SetStaticMesh(BlockMeshFogoso.Object);
		BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		BlockMesh->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	}
}

void ABlockFogoso::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABlockFogoso::MostrarInformacion()
{

}
