// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/PieceCaracteristicasEstrategia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePieceCaracteristicasEstrategia() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UPieceCaracteristicasEstrategia_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UPieceCaracteristicasEstrategia();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UPieceCaracteristicasEstrategia::StaticRegisterNativesUPieceCaracteristicasEstrategia()
	{
	}
	UClass* Z_Construct_UClass_UPieceCaracteristicasEstrategia_NoRegister()
	{
		return UPieceCaracteristicasEstrategia::StaticClass();
	}
	struct Z_Construct_UClass_UPieceCaracteristicasEstrategia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPieceCaracteristicasEstrategia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPieceCaracteristicasEstrategia_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PieceCaracteristicasEstrategia.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPieceCaracteristicasEstrategia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPieceCaracteristicasEstrategia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPieceCaracteristicasEstrategia_Statics::ClassParams = {
		&UPieceCaracteristicasEstrategia::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPieceCaracteristicasEstrategia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPieceCaracteristicasEstrategia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPieceCaracteristicasEstrategia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPieceCaracteristicasEstrategia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPieceCaracteristicasEstrategia, 507832860);
	template<> TETRISUSFX01_API UClass* StaticClass<UPieceCaracteristicasEstrategia>()
	{
		return UPieceCaracteristicasEstrategia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPieceCaracteristicasEstrategia(Z_Construct_UClass_UPieceCaracteristicasEstrategia, &UPieceCaracteristicasEstrategia::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UPieceCaracteristicasEstrategia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPieceCaracteristicasEstrategia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
