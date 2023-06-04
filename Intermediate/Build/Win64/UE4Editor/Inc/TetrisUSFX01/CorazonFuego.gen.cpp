// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/CorazonFuego.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorazonFuego() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ACorazonFuego_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ACorazonFuego();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ACorazonVida_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UBuilderVida_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UCorazon_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UMovimiento_NoRegister();
// End Cross Module References
	void ACorazonFuego::StaticRegisterNativesACorazonFuego()
	{
	}
	UClass* Z_Construct_UClass_ACorazonFuego_NoRegister()
	{
		return ACorazonFuego::StaticClass();
	}
	struct Z_Construct_UClass_ACorazonFuego_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vida_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Vida;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACorazonFuego_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorazonFuego_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CorazonFuego.h" },
		{ "ModuleRelativePath", "CorazonFuego.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorazonFuego_Statics::NewProp_Vida_MetaData[] = {
		{ "ModuleRelativePath", "CorazonFuego.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACorazonFuego_Statics::NewProp_Vida = { "Vida", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACorazonFuego, Vida), Z_Construct_UClass_ACorazonVida_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACorazonFuego_Statics::NewProp_Vida_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACorazonFuego_Statics::NewProp_Vida_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorazonFuego_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CorazonFuego.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACorazonFuego_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACorazonFuego, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACorazonFuego_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACorazonFuego_Statics::NewProp_SceneComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACorazonFuego_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorazonFuego_Statics::NewProp_Vida,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorazonFuego_Statics::NewProp_SceneComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACorazonFuego_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilderVida_NoRegister, (int32)VTABLE_OFFSET(ACorazonFuego, IBuilderVida), false },
			{ Z_Construct_UClass_UCorazon_NoRegister, (int32)VTABLE_OFFSET(ACorazonFuego, ICorazon), false },
			{ Z_Construct_UClass_UMovimiento_NoRegister, (int32)VTABLE_OFFSET(ACorazonFuego, IMovimiento), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACorazonFuego_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACorazonFuego>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACorazonFuego_Statics::ClassParams = {
		&ACorazonFuego::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACorazonFuego_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACorazonFuego_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACorazonFuego_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACorazonFuego_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACorazonFuego()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACorazonFuego_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACorazonFuego, 2170481316);
	template<> TETRISUSFX01_API UClass* StaticClass<ACorazonFuego>()
	{
		return ACorazonFuego::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACorazonFuego(Z_Construct_UClass_ACorazonFuego, &ACorazonFuego::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ACorazonFuego"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACorazonFuego);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
