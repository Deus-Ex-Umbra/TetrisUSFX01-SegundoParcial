// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Movimiento.h"
#include "MovimientoRotacionAleatorios.h"
#include "AdaptadorCorazonMovimiento.generated.h"

UCLASS()
class TETRISUSFX01_API AAdaptadorCorazonMovimiento : public AActor, public IMovimiento
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAdaptadorCorazonMovimiento();
	virtual void MovimientoAzar(float x, float y, float z) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	UPROPERTY()
		class AMovimientoRotacionAleatorios* Movimientos;
};
