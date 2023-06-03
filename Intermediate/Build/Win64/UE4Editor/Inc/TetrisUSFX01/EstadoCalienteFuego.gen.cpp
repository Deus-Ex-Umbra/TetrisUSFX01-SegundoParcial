// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/EstadoCalienteFuego.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoCalienteFuego() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEstadoCalienteFuego_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEstadoCalienteFuego();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenario_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UEstadodelEscenario_NoRegister();
// End Cross Module References
	void AEstadoCalienteFuego::StaticRegisterNativesAEstadoCalienteFuego()
	{
	}
	UClass* Z_Construct_UClass_AEstadoCalienteFuego_NoRegister()
	{
		return AEstadoCalienteFuego::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoCalienteFuego_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Escenario_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Escenario;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoCalienteFuego_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoCalienteFuego_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoCalienteFuego.h" },
		{ "ModuleRelativePath", "EstadoCalienteFuego.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoCalienteFuego_Statics::NewProp_Escenario_MetaData[] = {
		{ "ModuleRelativePath", "EstadoCalienteFuego.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEstadoCalienteFuego_Statics::NewProp_Escenario = { "Escenario", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEstadoCalienteFuego, Escenario), Z_Construct_UClass_AEscenario_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEstadoCalienteFuego_Statics::NewProp_Escenario_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoCalienteFuego_Statics::NewProp_Escenario_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEstadoCalienteFuego_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEstadoCalienteFuego_Statics::NewProp_Escenario,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoCalienteFuego_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstadodelEscenario_NoRegister, (int32)VTABLE_OFFSET(AEstadoCalienteFuego, IEstadodelEscenario), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoCalienteFuego_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoCalienteFuego>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoCalienteFuego_Statics::ClassParams = {
		&AEstadoCalienteFuego::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEstadoCalienteFuego_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoCalienteFuego_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstadoCalienteFuego_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoCalienteFuego_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoCalienteFuego()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoCalienteFuego_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoCalienteFuego, 2637034963);
	template<> TETRISUSFX01_API UClass* StaticClass<AEstadoCalienteFuego>()
	{
		return AEstadoCalienteFuego::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoCalienteFuego(Z_Construct_UClass_AEstadoCalienteFuego, &AEstadoCalienteFuego::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AEstadoCalienteFuego"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoCalienteFuego);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
