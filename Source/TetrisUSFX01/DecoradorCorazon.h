// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Corazon.h"
#include "DecoradorCorazon.generated.h"

UCLASS()
class TETRISUSFX01_API ADecoradorCorazon : public AActor, public ICorazon
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADecoradorCorazon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void MoverAzar(float x, float y, float z) override;
	virtual void Colorear(UMaterialInterface* Color) override;
	void EstablecerCorazon(ICorazon* _Corazon);
private:
	ICorazon* Corazon;
};
