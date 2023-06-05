// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockObservador.h"
#include "PublicadorPuntos.h"
ABlockObservador::ABlockObservador()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockMeshBrilloso(TEXT("StaticMesh'/Game/Mesh/BlockObservador.BlockObservador'"));
	if (BlockMeshBrilloso.Succeeded()) {
		BlockMesh->SetStaticMesh(BlockMeshBrilloso.Object);
		BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		BlockMesh->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	}
}

void ABlockObservador::Tick(float DeltaTime)
{ 
	Super::Tick(DeltaTime);
}

void ABlockObservador::EstablecerPublicador(APublicadorPuntos* _PublicadorPuntos)
{
	PublicadorPuntos = _PublicadorPuntos;
	PublicadorPuntos->Suscribir(this);
}

void ABlockObservador::Destroyed()
{
	Super::Destroyed();
	if (!PublicadorPuntos) {
		PublicadorPuntos->Desuscribir(this);
	}
}

void ABlockObservador::Actualizar(APublicador* Publicador)
{
	CambiosClase();
}

void ABlockObservador::CambiosClase()
{
	if (PublicadorPuntos->ObtenerPuntos() > 100) {
		FVector Posicion = this->GetActorLocation() + FVector(0, 0, FMath::RandRange(-30, 30) + 1);
		FRotator Rotacion = this->GetActorRotation() + FRotator(10, 10, 10);
		this->SetActorLocation(Posicion);
		this->SetActorRotation(Rotacion);
		/*GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Posicion cambiada"));*/
	}
	if (PublicadorPuntos->ObtenerPuntos() > 700) {
		FRotator Rotacion = FRotator(FMath::RandRange(-100, 100), FMath::RandRange(-100, 100), FMath::RandRange(-100, 100));
		this->SetActorRotation(Rotacion);
		/*GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Rotacion cambiada"));*/
	}
}

void ABlockObservador::BeginPlay()
{
	Super::BeginPlay();
}
