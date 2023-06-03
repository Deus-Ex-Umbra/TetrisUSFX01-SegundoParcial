// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Block.h"
#include "BlockDorado.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API ABlockDorado : public ABlock
{
	GENERATED_BODY()
public:
	ABlockDorado();
	virtual void Tick(float DeltaTime) override;
	virtual void MostrarInformacion();
protected:
	virtual void BeginPlay() override;
};
