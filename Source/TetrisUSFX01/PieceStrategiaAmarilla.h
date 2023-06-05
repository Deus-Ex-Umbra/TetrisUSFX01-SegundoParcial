// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PieceCaracteristicasEstrategia.h"
#include "PieceStrategiaAmarilla.generated.h"

UCLASS()
class TETRISUSFX01_API APieceStrategiaAmarilla : public AActor, public IPieceCaracteristicasEstrategia
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APieceStrategiaAmarilla();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Rotar(AActor* actor) override;
	virtual void MoverIzquierdaDerecha(AActor* actor) override;
	virtual void MoverAdelanteAtras(AActor* actor) override;
	virtual void MoverArribaAbajo(AActor* actor) override;
private:
	UPROPERTY()
		class UMaterialInterface* Material;
	UPROPERTY()
		class USceneComponent* Componente;
};
