// Fill out your copyright notice in the Description page of Project Settings.


#include "AdaptadorMovimientoPieza.h"
#include "ActorMovimiento.h"

// Sets default values for this component's properties
UAdaptadorMovimientoPieza::UAdaptadorMovimientoPieza()
{
	PrimaryComponentTick.bCanEverTick = true;
	TiempoActivacion = 0.0f;
	X = FMath::RandRange(-5, 5);
	Y = FMath::RandRange(-5, 5);
	Z = FMath::RandRange(-5, 5);
}


// Called when the game starts
void UAdaptadorMovimientoPieza::BeginPlay()
{
	Super::BeginPlay();
	ActorMovimiento = NewObject<UActorMovimiento>(this);
	/*ActorMovimiento = GetWordl()->SpawnActor<UActorMovimiento>(UActorMovimiento::StaticClass());*/
}


// Called every frame
void UAdaptadorMovimientoPieza::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	AActor* ActorC = GetOwner();
	if (TiempoActivacion >= 0.4f) {
		MoverAleatoriamente(X, Y, Z, ActorC);
		TiempoActivacion = 0.0f;
	}
	TiempoActivacion += DeltaTime;
}

void UAdaptadorMovimientoPieza::MoverAleatoriamente(float x, float y, float z, AActor* actor)
{
	ActorMovimiento->AparecerEnVariosAngulos(x, y, z, actor);
	ActorMovimiento->RotarEnVariosAngulos(3.0f, 3.0f, 3.0f, actor);
}

