// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Block.h"
#include "CambiosClase.h"
#include "Suscriptor.h"
#include "BlockObservador.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API ABlockObservador : public ABlock, public ICambiosClase, public ISuscriptor
{
	GENERATED_BODY()
public:
	ABlockObservador();
	virtual void Tick(float DeltaTime) override;
	virtual void Destroyed() override;
	virtual void Actualizar(class APublicador* Publicador) override;
	virtual void CambiosClase() override;
	void EstablecerPublicador(class APublicadorPuntos* _PublicadorPuntos);
protected:
	virtual void BeginPlay() override;
private:
	UPROPERTY()
		class APublicadorPuntos* PublicadorPuntos;
};
