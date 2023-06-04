// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Movimiento.h"
#include "AdaptadorMovimientoPieza.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TETRISUSFX01_API UAdaptadorMovimientoPieza : public UActorComponent, public IMovimiento
{
	GENERATED_BODY()
private:
	class UActorMovimiento* ActorMovimiento;
public:	
	// Sets default values for this component's properties
	UAdaptadorMovimientoPieza();
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void MoverAleatoriamente(float x, float y, float z, AActor* actor) override;
};
