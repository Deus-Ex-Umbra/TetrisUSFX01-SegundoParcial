// Fill out your copyright notice in the Description page of Project Settings.


#include "MaterialesPiece.h"

// Sets default values
AMaterialesPiece::AMaterialesPiece()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_0;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_1;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_2;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_3;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_4;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_5;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_6;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> Material_1;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> Material_2;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> Material_3;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> Material_4;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> Material_5;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> Material_6;
		FConstructorStatics()
			: Color_0(TEXT("Material'/Game/Mesh/Material_0.Material_0'"))
			, Color_1(TEXT("Material'/Game/Mesh/Material_1.Material_1'"))
			, Color_2(TEXT("Material'/Game/Mesh/Material_2.Material_2'"))
			, Color_3(TEXT("Material'/Game/Mesh/Material_3.Material_3'"))
			, Color_4(TEXT("Material'/Game/Mesh/Material_4.Material_4'"))
			, Color_5(TEXT("Material'/Game/Mesh/Material_5.Material_5'"))
			, Color_6(TEXT("Material'/Game/Mesh/Material_6.Material_6'"))
			, Material_1(TEXT("Material'/Game/Mesh/EscenarioAgua_Mat.EscenarioAgua_Mat'"))
			, Material_2(TEXT("Material'/Game/Mesh/EscenarioTierra_Mat.EscenarioTierra_Mat'"))
			, Material_3(TEXT("Material'/Game/Mesh/FuegoYAgua_Mat.FuegoYAgua_Mat'"))
			, Material_4(TEXT("Material'/Game/Mesh/Hielo_Mat.Hielo_Mat'"))
			, Material_5(TEXT("Material'/Game/Mesh/Foto_pared_de_fuego_ardiente_Mat.Foto_pared_de_fuego_ardiente_Mat'"))
			, Material_6(TEXT("Material'/Game/Mesh/Aire_Mat.Aire_Mat'"))
		{}
	};
	static FConstructorStatics ConstructorStatics;
	Materiales.Add(ConstructorStatics.Color_0.Get());
	Materiales.Add(ConstructorStatics.Color_1.Get());
	Materiales.Add(ConstructorStatics.Color_2.Get());
	Materiales.Add(ConstructorStatics.Color_3.Get());
	Materiales.Add(ConstructorStatics.Color_4.Get());
	Materiales.Add(ConstructorStatics.Color_5.Get());
	Materiales.Add(ConstructorStatics.Color_6.Get());
	Materiales.Add(ConstructorStatics.Material_1.Get());
	Materiales.Add(ConstructorStatics.Material_2.Get());
	Materiales.Add(ConstructorStatics.Material_3.Get());
	Materiales.Add(ConstructorStatics.Material_4.Get());
	Materiales.Add(ConstructorStatics.Material_5.Get());
	Materiales.Add(ConstructorStatics.Material_6.Get());
}

// Called when the game starts or when spawned
void AMaterialesPiece::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMaterialesPiece::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

UMaterial* AMaterialesPiece::ObtenerMaterial(int Indice)
{
	return Materiales[Indice];
}

