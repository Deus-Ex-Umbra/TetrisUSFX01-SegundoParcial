// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/EscenarioDeFuego.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscenarioDeFuego() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenarioDeFuego_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenarioDeFuego();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenario();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void AEscenarioDeFuego::StaticRegisterNativesAEscenarioDeFuego()
	{
	}
	UClass* Z_Construct_UClass_AEscenarioDeFuego_NoRegister()
	{
		return AEscenarioDeFuego::StaticClass();
	}
	struct Z_Construct_UClass_AEscenarioDeFuego_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscenarioDeFuego_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEscenario,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscenarioDeFuego_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EscenarioDeFuego.h" },
		{ "ModuleRelativePath", "EscenarioDeFuego.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscenarioDeFuego_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscenarioDeFuego>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscenarioDeFuego_Statics::ClassParams = {
		&AEscenarioDeFuego::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEscenarioDeFuego_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscenarioDeFuego_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscenarioDeFuego()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscenarioDeFuego_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscenarioDeFuego, 3281789715);
	template<> TETRISUSFX01_API UClass* StaticClass<AEscenarioDeFuego>()
	{
		return AEscenarioDeFuego::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscenarioDeFuego(Z_Construct_UClass_AEscenarioDeFuego, &AEscenarioDeFuego::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AEscenarioDeFuego"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscenarioDeFuego);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
