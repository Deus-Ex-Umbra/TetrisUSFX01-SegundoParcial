// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Movimiento.generated.h"
UINTERFACE(MinimalAPI)
class UMovimiento : public UInterface
{
	GENERATED_BODY()
};
class TETRISUSFX01_API IMovimiento
{
	GENERATED_BODY()
public:
	virtual void MovimientoAzar(float x, float y, float z) = 0;
};
