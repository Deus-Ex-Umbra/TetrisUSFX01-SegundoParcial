// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadodelEscenario.h"
#include "EstadoFrioHielo.generated.h"

UCLASS()
class TETRISUSFX01_API AEstadoFrioHielo : public AActor, public IEstadodelEscenario
{
	GENERATED_BODY()
private:
	UPROPERTY()
		class AEscenario* Escenario;
	
public:	
	// Sets default values for this actor's properties
	AEstadoFrioHielo();
	UMaterialInterface* MaterialEscenario;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void EstablecerMaterialEscenario(class AEscenario* escenario) override;
	virtual void EstablecerEscenario(class AEscenario* escenario) override;
	virtual void EstablecerVelocidadEscenario(float _CoolDown, float _CoolLeft) override;
};
