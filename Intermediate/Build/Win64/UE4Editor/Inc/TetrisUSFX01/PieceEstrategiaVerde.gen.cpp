// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/PieceEstrategiaVerde.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePieceEstrategiaVerde() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_APieceEstrategiaVerde_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APieceEstrategiaVerde();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UPieceCaracteristicasEstrategia_NoRegister();
// End Cross Module References
	void APieceEstrategiaVerde::StaticRegisterNativesAPieceEstrategiaVerde()
	{
	}
	UClass* Z_Construct_UClass_APieceEstrategiaVerde_NoRegister()
	{
		return APieceEstrategiaVerde::StaticClass();
	}
	struct Z_Construct_UClass_APieceEstrategiaVerde_Statics
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
	UObject* (*const Z_Construct_UClass_APieceEstrategiaVerde_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APieceEstrategiaVerde_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PieceEstrategiaVerde.h" },
		{ "ModuleRelativePath", "PieceEstrategiaVerde.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APieceEstrategiaVerde_Statics::NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "PieceEstrategiaVerde.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APieceEstrategiaVerde_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APieceEstrategiaVerde, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APieceEstrategiaVerde_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APieceEstrategiaVerde_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APieceEstrategiaVerde_Statics::NewProp_Componente_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PieceEstrategiaVerde.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APieceEstrategiaVerde_Statics::NewProp_Componente = { "Componente", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APieceEstrategiaVerde, Componente), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APieceEstrategiaVerde_Statics::NewProp_Componente_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APieceEstrategiaVerde_Statics::NewProp_Componente_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APieceEstrategiaVerde_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APieceEstrategiaVerde_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APieceEstrategiaVerde_Statics::NewProp_Componente,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APieceEstrategiaVerde_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPieceCaracteristicasEstrategia_NoRegister, (int32)VTABLE_OFFSET(APieceEstrategiaVerde, IPieceCaracteristicasEstrategia), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APieceEstrategiaVerde_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APieceEstrategiaVerde>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APieceEstrategiaVerde_Statics::ClassParams = {
		&APieceEstrategiaVerde::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APieceEstrategiaVerde_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APieceEstrategiaVerde_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APieceEstrategiaVerde_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APieceEstrategiaVerde_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APieceEstrategiaVerde()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APieceEstrategiaVerde_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APieceEstrategiaVerde, 3654146164);
	template<> TETRISUSFX01_API UClass* StaticClass<APieceEstrategiaVerde>()
	{
		return APieceEstrategiaVerde::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APieceEstrategiaVerde(Z_Construct_UClass_APieceEstrategiaVerde, &APieceEstrategiaVerde::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("APieceEstrategiaVerde"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APieceEstrategiaVerde);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
