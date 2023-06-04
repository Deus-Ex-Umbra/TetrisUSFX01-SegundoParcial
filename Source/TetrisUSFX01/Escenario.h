#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadodelEscenario.h"
#include "Escenario.generated.h"

UCLASS(Abstract)
class TETRISUSFX01_API AEscenario : public AActor
{
	GENERATED_BODY()
public:
	AEscenario();
	UPROPERTY()
		class UStaticMeshComponent* EscenarioMesh;
	UPROPERTY()
		class UStaticMeshComponent* LimitePiezasMesh;
	UPROPERTY()
		class UMaterialInterface* EscenarioMaterial;
	UPROPERTY()
		class UMaterialInterface* LimitePiezasMaterial;
	UPROPERTY()
		class AEscenarioFactory* EscenarioF;
protected:
	class IEstadodelEscenario* EstadoPrincipal;
	class IEstadodelEscenario* EstadoCalienteFuego;
	class IEstadodelEscenario* EstadoFrioHielo;
	class IEstadodelEscenario* EstadoNormalRoca;
	class IEstadodelEscenario* EstadoTurbulentoAgua;
	virtual void BeginPlay() override;
	int NumeroEscenario;
public:	
	//AEscenario* Inicializar();
	//AEscenario* EscenarioP;
	virtual void Tick(float DeltaTime) override;
	void CrearEscenario() PURE_VIRTUAL(AEscenario::CrearEscenario, );
	AEscenario* Inicializar();
	/*static AEscenario* ObtenerEscenario(int _numeroEscenario);*/
	void CambiarEscenario(AEscenario* _escenario);
	void CambiarEstado(IEstadodelEscenario* _estado);
	IEstadodelEscenario* ObtenerEstadoalAzar();
	void EstablecerNumeroEstado(IEstadodelEscenario* _estado);
	int ObtenerEstado();
	/*void MostrarInformacion() PURE_VIRTUAL(AEscenario::MostrarInformacion, );*/
	//AEscenario* ObtenerEscenario(AEscenario* escenario) PURE_VIRTUAL(AEscenario::ObrenerEscenario, return nullptr;)
};
