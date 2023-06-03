// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/EstadoFrioHielo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoFrioHielo() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEstadoFrioHielo_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEstadoFrioHielo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenario_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UEstadodelEscenario_NoRegister();
// End Cross Module References
	void AEstadoFrioHielo::StaticRegisterNativesAEstadoFrioHielo()
	{
	}
	UClass* Z_Construct_UClass_AEstadoFrioHielo_NoRegister()
	{
		return AEstadoFrioHielo::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoFrioHielo_Statics
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
	UObject* (*const Z_Construct_UClass_AEstadoFrioHielo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoFrioHielo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoFrioHielo.h" },
		{ "ModuleRelativePath", "EstadoFrioHielo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoFrioHielo_Statics::NewProp_Escenario_MetaData[] = {
		{ "ModuleRelativePath", "EstadoFrioHielo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEstadoFrioHielo_Statics::NewProp_Escenario = { "Escenario", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEstadoFrioHielo, Escenario), Z_Construct_UClass_AEscenario_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEstadoFrioHielo_Statics::NewProp_Escenario_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoFrioHielo_Statics::NewProp_Escenario_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEstadoFrioHielo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEstadoFrioHielo_Statics::NewProp_Escenario,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoFrioHielo_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstadodelEscenario_NoRegister, (int32)VTABLE_OFFSET(AEstadoFrioHielo, IEstadodelEscenario), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoFrioHielo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoFrioHielo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoFrioHielo_Statics::ClassParams = {
		&AEstadoFrioHielo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEstadoFrioHielo_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoFrioHielo_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstadoFrioHielo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoFrioHielo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoFrioHielo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoFrioHielo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoFrioHielo, 4042809660);
	template<> TETRISUSFX01_API UClass* StaticClass<AEstadoFrioHielo>()
	{
		return AEstadoFrioHielo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoFrioHielo(Z_Construct_UClass_AEstadoFrioHielo, &AEstadoFrioHielo::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AEstadoFrioHielo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoFrioHielo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
