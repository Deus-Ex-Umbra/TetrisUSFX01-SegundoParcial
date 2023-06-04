// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Escenario.h"
#include "EscenarioDeFuego.generated.h"
UCLASS()
class TETRISUSFX01_API AEscenarioDeFuego : public AEscenario
{
	GENERATED_BODY()
public:
	AEscenarioDeFuego();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void CrearEscenario();
	void Inicializar();
	//virtual AEscenario* ObtenerEscenario(AEscenario* escenario);
	//virtual void MostrarInformacion();
private:
	UPROPERTY(VisibleAnywhere, Category = "Principal")
		class ADirectorVida* Director;
	UPROPERTY(VisibleAnywhere, Category = "Principal")
		class ACorazonFuego* CorazonFuego;
	UPROPERTY(VisibleAnywhere, Category = "Principal")
		class ACorazonVida* Corazon;
	float Tiempo;
};
