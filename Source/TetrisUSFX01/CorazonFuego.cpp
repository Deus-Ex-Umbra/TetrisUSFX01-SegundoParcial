// Fill out your copyright notice in the Description page of Project Settings.


#include "CorazonFuego.h"
#include "CorazonVida.h"

// Sets default values
ACorazonFuego::ACorazonFuego()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SceneComponent = CreateDefaultSubobject<USceneComponent>("Root");
	RootComponent = SceneComponent;
}

// Called when the game starts or when spawned
void ACorazonFuego::BeginPlay()
{
	/*Vida->GetWorld()->SpawnActor<ACorazonVida>(ACorazonVida::StaticClass());*/
	Super::BeginPlay();
}

// Called every frame
void ACorazonFuego::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ACorazonVida* ACorazonFuego::ObtenerCorazonVida()
{
	return Vida;
}

void ACorazonFuego::CrearVida()
{
	std::vector<std::pair<float, float>> Coordenadas = { 
							{ -10.0f, 30.0f },					{ 10.0f, 30.0f },
		{ -20.0f, 20.0f }, { -10.0f, 20.0f }, { 0.0f, 20.0f }, { 10.0f, 20.0f }, { 20.0f, 20.0f },
							{ -10.0f, 10.0f }, { 0.0f, 10.0f }, { 10.0f, 10.0f },
												{ 0.0f, 0.0f } 
	};
	for (auto& Coordenada : Coordenadas)
	{
		ABlock* block = nullptr;
		if (FMath::RandRange(0, 1) == 0) block = GetWorld()->SpawnActor<ABlockFuego>(this->GetActorLocation(), FRotator(0.0f, 0.0f, 0.0f));
		else block = GetWorld()->SpawnActor<ABlockFogoso>(this->GetActorLocation(), FRotator(0.0f, 0.0f, 0.0f));
		blocks.Add(block);
		block->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
		block->SetActorRelativeLocation(FVector(0.0f, Coordenada.first, Coordenada.second));
	}
	Vida = GetWorld()->SpawnActor<ACorazonVida>(FVector(0.0f, -150.0f, 100.0f), FRotator(0.0f, 0.0f, 0.0f));
	Vida->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

void ACorazonFuego::MoverAzar(float x, float y, float z)
{
	MovimientoAzar(x, y, z);
}

void ACorazonFuego::Colorear(UMaterialInterface* Material)
{
	for (auto& block : blocks)
	{
		block->BlockMesh->SetMaterial(0, Material);
	}

}

void ACorazonFuego::MovimientoAzar(float x, float y, float z)
{
	Movimiento->MovimientoAzar(x, y, z);
}

void ACorazonFuego::EstablecerMovimiento(AActor* _Movimiento)
{
	Movimiento = Cast<IMovimiento>(_Movimiento);
}

//void ACorazonFuego::CrearBlock()
//{
//	Vida->EstablecerBlock(block);
//}

