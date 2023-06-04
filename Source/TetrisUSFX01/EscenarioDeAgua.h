// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Escenario.h"
#include "EscenarioDeAgua.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API AEscenarioDeAgua : public AEscenario
{
	GENERATED_BODY()
public:
	AEscenarioDeAgua();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void CrearEscenario();
	void Inicializar();
	/*virtual AEscenario* ObtenerEscenario(AEscenario* escenario);*/
	//virtual void MostrarInformacion();
private:
	UPROPERTY(VisibleAnywhere, Category = "Principal")
		class ADirectorVida* Director;
	UPROPERTY(VisibleAnywhere, Category = "Principal")
		class ACorazonAire* CorazonAire;
	UPROPERTY(VisibleAnywhere, Category = "Principal")
		class ACorazonVida* Corazon;
	float Tiempo;
};
