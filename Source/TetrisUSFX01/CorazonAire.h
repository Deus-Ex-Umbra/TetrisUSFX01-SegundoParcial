// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderVida.h"
#include "Block.h"
#include "BlockAire.h"
#include "BlockHelado.h"
#include <vector>
#include "Corazon.h"
#include "Movimiento.h"
#include "CorazonAire.generated.h"

UCLASS()
class TETRISUSFX01_API ACorazonAire : public AActor, public IBuilderVida, public ICorazon, public IMovimiento
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACorazonAire();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual class ACorazonVida* ObtenerCorazonVida() override;
	//virtual void CrearBlock() override;
	virtual void CrearVida() override;
	virtual void MoverAzar(float x, float y, float z) override;
	virtual void Colorear(UMaterialInterface* Material) override;
	virtual void MovimientoAzar(float x, float y, float z) override;
	void EstablecerMovimiento(AActor* _Movimiento);
private:
	TArray<ABlock*> blocks;
	UPROPERTY()
		class ACorazonVida* Vida;
	UPROPERTY()
		class USceneComponent* SceneComponent;
	IMovimiento* Movimiento;
};
