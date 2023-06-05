// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NuevaNuevaPieceFachada.generated.h"

UCLASS()
class TETRISUSFX01_API ANuevaNuevaPieceFachada : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANuevaNuevaPieceFachada();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	class APiece* ObtenerPiece();
	void EstablecerIndice();
	void EliminarPiece();
	void MoverPiece();
	int ObtenerIndice();
private:
	UPROPERTY()
		class APiece* Piece;
	int Indice;
	UPROPERTY()
		class USceneComponent* Componente;
	UPROPERTY()
		class APiece* NuevaNuevaPiece;
};
