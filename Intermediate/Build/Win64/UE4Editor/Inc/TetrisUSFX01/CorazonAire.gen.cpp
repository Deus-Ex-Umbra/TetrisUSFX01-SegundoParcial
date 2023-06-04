// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/CorazonAire.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorazonAire() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ACorazonAire_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ACorazonAire();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ACorazonVida_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UBuilderVida_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UCorazon_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UMovimiento_NoRegister();
// End Cross Module References
	void ACorazonAire::StaticRegisterNativesACorazonAire()
	{
	}
	UClass* Z_Construct_UClass_ACorazonAire_NoRegister()
	{
		return ACorazonAire::StaticClass();
	}
	struct Z_Construct_UClass_ACorazonAire_Statics
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
	UObject* (*const Z_Construct_UClass_ACorazonAire_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorazonAire_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CorazonAire.h" },
		{ "ModuleRelativePath", "CorazonAire.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorazonAire_Statics::NewProp_Vida_MetaData[] = {
		{ "ModuleRelativePath", "CorazonAire.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACorazonAire_Statics::NewProp_Vida = { "Vida", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACorazonAire, Vida), Z_Construct_UClass_ACorazonVida_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACorazonAire_Statics::NewProp_Vida_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACorazonAire_Statics::NewProp_Vida_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorazonAire_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CorazonAire.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACorazonAire_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACorazonAire, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACorazonAire_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACorazonAire_Statics::NewProp_SceneComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACorazonAire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorazonAire_Statics::NewProp_Vida,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorazonAire_Statics::NewProp_SceneComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACorazonAire_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilderVida_NoRegister, (int32)VTABLE_OFFSET(ACorazonAire, IBuilderVida), false },
			{ Z_Construct_UClass_UCorazon_NoRegister, (int32)VTABLE_OFFSET(ACorazonAire, ICorazon), false },
			{ Z_Construct_UClass_UMovimiento_NoRegister, (int32)VTABLE_OFFSET(ACorazonAire, IMovimiento), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACorazonAire_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACorazonAire>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACorazonAire_Statics::ClassParams = {
		&ACorazonAire::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACorazonAire_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACorazonAire_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACorazonAire_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACorazonAire_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACorazonAire()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACorazonAire_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACorazonAire, 1589556189);
	template<> TETRISUSFX01_API UClass* StaticClass<ACorazonAire>()
	{
		return ACorazonAire::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACorazonAire(Z_Construct_UClass_ACorazonAire, &ACorazonAire::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ACorazonAire"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACorazonAire);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
