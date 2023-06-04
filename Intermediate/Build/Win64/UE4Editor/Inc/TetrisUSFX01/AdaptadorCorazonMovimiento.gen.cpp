// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/AdaptadorCorazonMovimiento.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdaptadorCorazonMovimiento() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AAdaptadorCorazonMovimiento_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AAdaptadorCorazonMovimiento();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AMovimientoRotacionAleatorios_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UMovimiento_NoRegister();
// End Cross Module References
	void AAdaptadorCorazonMovimiento::StaticRegisterNativesAAdaptadorCorazonMovimiento()
	{
	}
	UClass* Z_Construct_UClass_AAdaptadorCorazonMovimiento_NoRegister()
	{
		return AAdaptadorCorazonMovimiento::StaticClass();
	}
	struct Z_Construct_UClass_AAdaptadorCorazonMovimiento_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movimientos_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Movimientos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdaptadorCorazonMovimiento_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdaptadorCorazonMovimiento_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdaptadorCorazonMovimiento.h" },
		{ "ModuleRelativePath", "AdaptadorCorazonMovimiento.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdaptadorCorazonMovimiento_Statics::NewProp_Movimientos_MetaData[] = {
		{ "ModuleRelativePath", "AdaptadorCorazonMovimiento.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdaptadorCorazonMovimiento_Statics::NewProp_Movimientos = { "Movimientos", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdaptadorCorazonMovimiento, Movimientos), Z_Construct_UClass_AMovimientoRotacionAleatorios_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdaptadorCorazonMovimiento_Statics::NewProp_Movimientos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdaptadorCorazonMovimiento_Statics::NewProp_Movimientos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdaptadorCorazonMovimiento_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdaptadorCorazonMovimiento_Statics::NewProp_Movimientos,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAdaptadorCorazonMovimiento_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovimiento_NoRegister, (int32)VTABLE_OFFSET(AAdaptadorCorazonMovimiento, IMovimiento), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdaptadorCorazonMovimiento_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdaptadorCorazonMovimiento>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdaptadorCorazonMovimiento_Statics::ClassParams = {
		&AAdaptadorCorazonMovimiento::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAdaptadorCorazonMovimiento_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdaptadorCorazonMovimiento_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAdaptadorCorazonMovimiento_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdaptadorCorazonMovimiento_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdaptadorCorazonMovimiento()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdaptadorCorazonMovimiento_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdaptadorCorazonMovimiento, 1197471813);
	template<> TETRISUSFX01_API UClass* StaticClass<AAdaptadorCorazonMovimiento>()
	{
		return AAdaptadorCorazonMovimiento::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdaptadorCorazonMovimiento(Z_Construct_UClass_AAdaptadorCorazonMovimiento, &AAdaptadorCorazonMovimiento::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AAdaptadorCorazonMovimiento"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdaptadorCorazonMovimiento);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
