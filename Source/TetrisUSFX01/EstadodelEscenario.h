// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EstadodelEscenario.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEstadodelEscenario : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TETRISUSFX01_API IEstadodelEscenario
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void EstablecerMaterialEscenario(class AEscenario* escenario) = 0;
	virtual void EstablecerEscenario(class AEscenario* escenario) = 0;
	virtual void EstablecerVelocidadEscenario(float _CoolDown, float _CoolLeft) = 0;
};
