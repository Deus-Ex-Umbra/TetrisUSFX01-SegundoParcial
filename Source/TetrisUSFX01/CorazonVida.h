// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlockFuego.h"
#include "BlockAire.h"
#include "EstructuraVida.h"
#include "BuilderVida.h"
#include <vector>
#include "CorazonVida.generated.h"

UCLASS()
class TETRISUSFX01_API ACorazonVida : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACorazonVida();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//void CrearVidas();
	//void EstablecerBlock(ABlock* block);
private:
	ABlock* block;
	std::vector<std::pair<float, float>> BlockCoordenadas;
	TArray<ABlock*> blocks;
};
