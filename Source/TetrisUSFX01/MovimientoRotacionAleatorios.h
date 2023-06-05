// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "MovimientoRotacionAleatorios.generated.h"

UCLASS()
class TETRISUSFX01_API AMovimientoRotacionAleatorios : public AActor
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	AMovimientoRotacionAleatorios();
	UFUNCTION(BlueprintCallable)
	void MovimientoLateral(float _Mx, float _My, float _Mz, AActor* actor);
	UFUNCTION(BlueprintCallable)
	void MovimientoRotacion(float _Rx, float _Ry, float _Rz, AActor* actor);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float Mx, My, Mz, Rx, Ry, Rz;
	float Tiempo;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
