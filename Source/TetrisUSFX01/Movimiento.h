// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Movimiento.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UMovimiento : public UInterface
{
	GENERATED_BODY()
};

class TETRISUSFX01_API IMovimiento
{
	GENERATED_BODY()
protected:
	float TiempoActivacion;
	float X;
	float Y;
	float Z;
public:
	virtual void MoverAleatoriamente(float x, float y, float z, AActor* actor) = 0;
};
