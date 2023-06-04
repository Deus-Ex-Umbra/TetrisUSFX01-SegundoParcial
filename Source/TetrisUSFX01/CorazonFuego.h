// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderVida.h"
#include "Block.h"
#include "BlockFuego.h"
#include <vector>
#include "CorazonFuego.generated.h"

UCLASS()
class TETRISUSFX01_API ACorazonFuego : public AActor, public IBuilderVida
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACorazonFuego();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual class ACorazonVida* ObtenerCorazonVida() override;
	virtual void CrearBlock() override;
private:
	ABlock* block;
	UPROPERTY()
		class ACorazonVida* Vida;
};
