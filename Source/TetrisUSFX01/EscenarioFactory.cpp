#include "EscenarioFactory.h"
#include "Escenario.h"
#include "EscenarioDeFuego.h"
#include "EscenarioDeAgua.h"
#include "EscenarioDeTierra.h"
#include "EscenarioHielo.h"

AEscenarioFactory::AEscenarioFactory()
{
	PrimaryActorTick.bCanEverTick = true;
	/*escenarioagua = NewObject<AEscenarioDeAgua>();
	escenariofuego = NewObject<AEscenarioDeFuego>();
	escenariotierra = NewObject<AEscenarioDeTierra>();
	escenariohielo = NewObject<AEscenarioHielo>();*/
}
void AEscenarioFactory::BeginPlay()
{
	Super::BeginPlay();
	
}

void AEscenarioFactory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AEscenario* AEscenarioFactory::FabricarEscenario(int _numeroescenario)
{
	switch (_numeroescenario)
	{
	case 1:
		/*escenariofuego->CrearEscenario();*/
		return GetWorld()->SpawnActor<AEscenarioDeFuego>(AEscenarioDeFuego::StaticClass());
	case 2:
		/*escenariohielo->ObtenerEscenario();*/
		return GetWorld()->SpawnActor<AEscenarioHielo>(AEscenarioHielo::StaticClass());
	case 3:
		/*escenarioagua->ObtenerEscenario();*/
		return GetWorld()->SpawnActor<AEscenarioDeAgua>(AEscenarioDeAgua::StaticClass());
	case 4:
		/*escenariotierra->ObtenerEscenario();*/
		return GetWorld()->SpawnActor<AEscenarioDeTierra>(AEscenarioDeTierra::StaticClass());
	default:
		return nullptr;
	}
}

