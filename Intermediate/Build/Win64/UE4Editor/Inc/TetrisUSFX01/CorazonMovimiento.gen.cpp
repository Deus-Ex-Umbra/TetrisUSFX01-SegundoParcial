// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/CorazonMovimiento.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorazonMovimiento() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ACorazonMovimiento_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ACorazonMovimiento();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ADecoradorCorazon();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void ACorazonMovimiento::StaticRegisterNativesACorazonMovimiento()
	{
	}
	UClass* Z_Construct_UClass_ACorazonMovimiento_NoRegister()
	{
		return ACorazonMovimiento::StaticClass();
	}
	struct Z_Construct_UClass_ACorazonMovimiento_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACorazonMovimiento_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADecoradorCorazon,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorazonMovimiento_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CorazonMovimiento.h" },
		{ "ModuleRelativePath", "CorazonMovimiento.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACorazonMovimiento_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACorazonMovimiento>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACorazonMovimiento_Statics::ClassParams = {
		&ACorazonMovimiento::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACorazonMovimiento_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACorazonMovimiento_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACorazonMovimiento()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACorazonMovimiento_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACorazonMovimiento, 292563989);
	template<> TETRISUSFX01_API UClass* StaticClass<ACorazonMovimiento>()
	{
		return ACorazonMovimiento::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACorazonMovimiento(Z_Construct_UClass_ACorazonMovimiento, &ACorazonMovimiento::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ACorazonMovimiento"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACorazonMovimiento);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
