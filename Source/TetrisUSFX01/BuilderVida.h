// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BuilderVida.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBuilderVida : public UInterface
{
	GENERATED_BODY()
};
class TETRISUSFX01_API IBuilderVida
{
	GENERATED_BODY()
public:
	virtual class ACorazonVida* ObtenerCorazonVida() = 0;
	virtual void CrearBlock() = 0;
};
