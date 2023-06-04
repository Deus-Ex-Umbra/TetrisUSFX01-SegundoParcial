// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include <vector>
#include "EstructuraVida.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEstructuraVida : public UInterface
{
	GENERATED_BODY()
};

class TETRISUSFX01_API IEstructuraVida
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void EstablecerBlock(class ABlock* block) = 0;
	virtual void EstablecerCoordenadas(std::vector<std::pair<float, float>> coordenadas) = 0;
};
