// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Escenario.h"
#include "EscenarioDeTierra.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API AEscenarioDeTierra : public AEscenario
{
	GENERATED_BODY()
public:
	AEscenarioDeTierra();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void CrearEscenario();
	//virtual AEscenario* ObtenerEscenario(AEscenario* escenario);
	//virtual void MostrarInformacion();
};
