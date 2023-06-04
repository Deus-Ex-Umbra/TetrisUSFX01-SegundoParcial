// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Corazon.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UCorazon : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TETRISUSFX01_API ICorazon
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void MoverAzar(float x, float y, float z) = 0;
	virtual void Colorear(UMaterialInterface* Material) = 0;
};
