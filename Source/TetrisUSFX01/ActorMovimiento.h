// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorMovimiento.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TETRISUSFX01_API UActorMovimiento : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UActorMovimiento();
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void RotarEnVariosAngulos(float rotacionx, float rotaciony, float rotacionz, AActor* actor);
	void AparecerEnVariosAngulos(float aparicionx, float apariciony, float aparicionz, AActor* actor);
private:
	float TiempoActivacion;
	float MovimientoX;
	float MovimientoY;
	float MovimientoZ;
	float RotacionX;
	float RotacionY;
	float RotacionZ;
};
