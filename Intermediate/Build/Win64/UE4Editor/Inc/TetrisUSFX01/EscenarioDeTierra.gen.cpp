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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscenarioDeTierra_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscenarioDeTierra>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscenarioDeTierra_Statics::ClassParams = {
		&AEscenarioDeTierra::StaticClass,
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
	IMPLEMENT_CLASS(AEscenarioDeTierra, 1551921214);
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
