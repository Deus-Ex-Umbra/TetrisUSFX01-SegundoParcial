// Fill out your copyright notice in the Description page of Project Settings.


#include "CorazonVida.h"

// Sets default values
ACorazonVida::ACorazonVida()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACorazonVida::BeginPlay()
{
	Super::BeginPlay();
	//CrearVidas();
}

// Called every frame
void ACorazonVida::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//void ACorazonVida::CrearVidas()
//{
//	BlockCoordenadas = { { -10.0f, 30.0f }, { 10.0f, 30.0f },
//	{ -20.0f, 20.0f }, { -10.0f, 20.0f }, { 0.0f, 20.0f }, { 10.0f, 20.0f }, { 20.0f, 20.0f },
//	{ -10.0f, 10.0f }, { 0.0f, 10.0f }, { 10.0f, 10.0f },
//	{ 0.0f, 10.0f } };
//	for (auto& Coordenadas : BlockCoordenadas) {
//		ABlock* B = GetWorld()->SpawnActor<ABlock>(this->GetActorLocation(), FRotator(0, 0, 0));
//		blocks.Add(B);
//		B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
//		B->SetActorLocation(FVector(0, Coordenadas.first, Coordenadas.second));
//	}
//}

//void ACorazonVida::EstablecerBlock(ABlock* _block)
//{
//	block = _block;
//}


