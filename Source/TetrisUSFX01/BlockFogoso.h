// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Block.h"
#include "BlockFogoso.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API ABlockFogoso : public ABlock
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;
public:
	ABlockFogoso();
	virtual void Tick(float DeltaTime) override;
	virtual void MostrarInformacion();
};
