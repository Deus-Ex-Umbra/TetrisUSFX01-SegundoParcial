// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.h"
#include "BlockBrilloso.h"
#include "BlockDorado.h"
#include <functional>
#include "PieceCaracteristicasEstrategia.h"
#include "Piece.generated.h"
UCLASS()
class TETRISUSFX01_API APiece : public AActor
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	APiece();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY()
		class USceneComponent* SceneComponent;
	int getIndice();
	void SetIndice(int indice);
	void DrawDebugLines();
	void TestRotate();
	void MoveLeft();
	void MoveRight();
	bool MoveDown(bool PlaySound = true);
	void Dismiss();
	bool CheckWillCollision(std::function<FVector(FVector OldLocation)> ChangeBeforeCheck);
	void EliminarPieza();
	void EstablecerEstrategia(AActor* _Estrategia);
	void Mover();
	UPROPERTY(EditAnywhere)
	/*TArray<class UMaterial*> Colors;*/
	class AMaterialesPiece* Materiales;
private:
	int Indice;
	IPieceCaracteristicasEstrategia* Estrategia;
	TArray<ABlock*> Blocks;
public:
	void SpawnBlocks();
};
