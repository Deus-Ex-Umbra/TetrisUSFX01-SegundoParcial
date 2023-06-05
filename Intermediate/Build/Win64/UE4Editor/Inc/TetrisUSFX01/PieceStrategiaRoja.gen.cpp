// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/PieceStrategiaRoja.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePieceStrategiaRoja() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_APieceStrategiaRoja_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APieceStrategiaRoja();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UPieceCaracteristicasEstrategia_NoRegister();
// End Cross Module References
	void APieceStrategiaRoja::StaticRegisterNativesAPieceStrategiaRoja()
	{
	}
	UClass* Z_Construct_UClass_APieceStrategiaRoja_NoRegister()
	{
		return APieceStrategiaRoja::StaticClass();
	}
	struct Z_Construct_UClass_APieceStrategiaRoja_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Componente_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Componente;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APieceStrategiaRoja_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APieceStrategiaRoja_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PieceStrategiaRoja.h" },
		{ "ModuleRelativePath", "PieceStrategiaRoja.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APieceStrategiaRoja_Statics::NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "PieceStrategiaRoja.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APieceStrategiaRoja_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APieceStrategiaRoja, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APieceStrategiaRoja_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APieceStrategiaRoja_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APieceStrategiaRoja_Statics::NewProp_Componente_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PieceStrategiaRoja.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APieceStrategiaRoja_Statics::NewProp_Componente = { "Componente", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APieceStrategiaRoja, Componente), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APieceStrategiaRoja_Statics::NewProp_Componente_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APieceStrategiaRoja_Statics::NewProp_Componente_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APieceStrategiaRoja_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APieceStrategiaRoja_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APieceStrategiaRoja_Statics::NewProp_Componente,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APieceStrategiaRoja_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPieceCaracteristicasEstrategia_NoRegister, (int32)VTABLE_OFFSET(APieceStrategiaRoja, IPieceCaracteristicasEstrategia), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APieceStrategiaRoja_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APieceStrategiaRoja>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APieceStrategiaRoja_Statics::ClassParams = {
		&APieceStrategiaRoja::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APieceStrategiaRoja_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APieceStrategiaRoja_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APieceStrategiaRoja_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APieceStrategiaRoja_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APieceStrategiaRoja()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APieceStrategiaRoja_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APieceStrategiaRoja, 1264296569);
	template<> TETRISUSFX01_API UClass* StaticClass<APieceStrategiaRoja>()
	{
		return APieceStrategiaRoja::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APieceStrategiaRoja(Z_Construct_UClass_APieceStrategiaRoja, &APieceStrategiaRoja::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("APieceStrategiaRoja"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APieceStrategiaRoja);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
