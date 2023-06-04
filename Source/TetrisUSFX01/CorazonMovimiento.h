// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DecoradorCorazon.h"
#include "CorazonMovimiento.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API ACorazonMovimiento : public ADecoradorCorazon
{
	GENERATED_BODY()
public: 
	ACorazonMovimiento();
	virtual void MoverAzar(float x, float y, float z) override;
};
