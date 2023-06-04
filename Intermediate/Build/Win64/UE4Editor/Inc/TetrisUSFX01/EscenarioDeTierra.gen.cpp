// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/EscenarioDeTierra.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscenarioDeTierra() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenarioDeTierra_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenarioDeTierra();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenario();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ADirectorVida_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ACorazonFuego_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ACorazonVida_NoRegister();
// End Cross Module References
	void AEscenarioDeTierra::StaticRegisterNativesAEscenarioDeTierra()
	{
	}
	UClass* Z_Construct_UClass_AEscenarioDeTierra_NoRegister()
	{
		return AEscenarioDeTierra::StaticClass();
	}
	struct Z_Construct_UClass_AEscenarioDeTierra_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Director_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Director;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CorazonFuego_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CorazonFuego;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Corazon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Corazon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscenarioDeTierra_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEscenario,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscenarioDeTierra_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EscenarioDeTierra.h" },
		{ "ModuleRelativePath", "EscenarioDeTierra.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscenarioDeTierra_Statics::NewProp_Director_MetaData[] = {
		{ "Category", "Principal" },
		{ "ModuleRelativePath", "EscenarioDeTierra.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscenarioDeTierra_Statics::NewProp_Director = { "Director", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscenarioDeTierra, Director), Z_Construct_UClass_ADirectorVida_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscenarioDeTierra_Statics::NewProp_Director_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscenarioDeTierra_Statics::NewProp_Director_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscenarioDeTierra_Statics::NewProp_CorazonFuego_MetaData[] = {
		{ "Category", "Principal" },
		{ "ModuleRelativePath", "EscenarioDeTierra.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscenarioDeTierra_Statics::NewProp_CorazonFuego = { "CorazonFuego", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscenarioDeTierra, CorazonFuego), Z_Construct_UClass_ACorazonFuego_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscenarioDeTierra_Statics::NewProp_CorazonFuego_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscenarioDeTierra_Statics::NewProp_CorazonFuego_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscenarioDeTierra_Statics::NewProp_Corazon_MetaData[] = {
		{ "Category", "Principal" },
		{ "ModuleRelativePath", "EscenarioDeTierra.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscenarioDeTierra_Statics::NewProp_Corazon = { "Corazon", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscenarioDeTierra, Corazon), Z_Construct_UClass_ACorazonVida_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscenarioDeTierra_Statics::NewProp_Corazon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscenarioDeTierra_Statics::NewProp_Corazon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEscenarioDeTierra_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscenarioDeTierra_Statics::NewProp_Director,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscenarioDeTierra_Statics::NewProp_CorazonFuego,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscenarioDeTierra_Statics::NewProp_Corazon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscenarioDeTierra_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscenarioDeTierra>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscenarioDeTierra_Statics::ClassParams = {
		&AEscenarioDeTierra::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEscenarioDeTierra_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEscenarioDeTierra_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEscenarioDeTierra_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscenarioDeTierra_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscenarioDeTierra()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscenarioDeTierra_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscenarioDeTierra, 221000402);
	template<> TETRISUSFX01_API UClass* StaticClass<AEscenarioDeTierra>()
	{
		return AEscenarioDeTierra::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscenarioDeTierra(Z_Construct_UClass_AEscenarioDeTierra, &AEscenarioDeTierra::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AEscenarioDeTierra"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscenarioDeTierra);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
