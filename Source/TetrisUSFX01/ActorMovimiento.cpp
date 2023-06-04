#include "ActorMovimiento.h"

// Sets default values for this component's properties
UActorMovimiento::UActorMovimiento()
{
	PrimaryComponentTick.bCanEverTick = true;
	TiempoActivacion = 0.0f;
	MovimientoX = FMath::RandRange(-3, 3);
	MovimientoY = FMath::RandRange(-3, 3);
	MovimientoZ = FMath::RandRange(-3, 3);
	RotacionX = FMath::RandRange(-3, 3);
	RotacionY = FMath::RandRange(-3, 3);
	RotacionZ = FMath::RandRange(-3, 3);
}


void UActorMovimiento::BeginPlay()
{
	Super::BeginPlay();

	
}


// Called every frame
void UActorMovimiento::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	AActor* ActorC = GetOwner();
	if (TiempoActivacion >= 0.3) {
		AparecerEnVariosAngulos(MovimientoX, MovimientoY, MovimientoZ, ActorC);
		RotarEnVariosAngulos(RotacionX, RotacionY, RotacionZ, ActorC);
		TiempoActivacion = 0.0f;
	}
	TiempoActivacion += DeltaTime;
}

void UActorMovimiento::RotarEnVariosAngulos(float rotarx, float rotary, float rotarz, AActor* actor)
{
	auto NuevoAngulo = actor->GetActorRotation() + FRotator(rotarz , rotary, rotarx);
	actor->SetActorRotation(NuevoAngulo);
}

void UActorMovimiento::AparecerEnVariosAngulos(float aparicionx, float apariciony, float aparicionz, AActor* actor)
{
	auto NuevaPosicion = actor->GetActorLocation() + FVector(aparicionx, apariciony, aparicionz);
	actor->SetActorLocation(NuevaPosicion);
}