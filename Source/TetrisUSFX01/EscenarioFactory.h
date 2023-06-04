// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EscenarioFactory.generated.h"

UCLASS()
class TETRISUSFX01_API AEscenarioFactory : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEscenarioFactory();
	/*UPROPERTY()
		class AEscenarioDeAgua* escenarioagua;
	UPROPERTY()
		class AEscenarioDeFuego* escenariofuego;
	UPROPERTY()
		class AEscenarioDeTierra* escenariotierra;
	UPROPERTY()
		class AEscenarioHielo* escenariohielo;*/
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	class AEscenario* FabricarEscenario(int _numeroescenario);
};
