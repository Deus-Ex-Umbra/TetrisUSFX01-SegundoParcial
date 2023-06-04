// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DecoradorCorazon.h"
#include "CorazonColoreo.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API ACorazonColoreo : public ADecoradorCorazon
{
	GENERATED_BODY()
public:
	ACorazonColoreo();
	virtual void Colorear(UMaterialInterface* Color) override;
};
