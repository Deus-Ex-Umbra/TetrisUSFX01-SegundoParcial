// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DirectorVida.generated.h"

UCLASS()
class TETRISUSFX01_API ADirectorVida : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorVida();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void EstablecerBuilderVida(AActor* newBuilderVida);
	void ConstruirVida();
	class ACorazonVida* ObtenerVida();
private:
	class IBuilderVida* BuilderVida;
};
