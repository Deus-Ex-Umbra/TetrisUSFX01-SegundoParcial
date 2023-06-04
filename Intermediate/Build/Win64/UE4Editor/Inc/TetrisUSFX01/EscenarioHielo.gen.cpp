// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/EscenarioHielo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscenarioHielo() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenarioHielo_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenarioHielo();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenario();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ADirectorVida_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ACorazonAire_NoRegister();
// End Cross Module References
	void AEscenarioHielo::StaticRegisterNativesAEscenarioHielo()
	{
	}
	UClass* Z_Construct_UClass_AEscenarioHielo_NoRegister()
	{
		return AEscenarioHielo::StaticClass();
	}
	struct Z_Construct_UClass_AEscenarioHielo_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CorazonAire_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CorazonAire;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscenarioHielo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEscenario,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscenarioHielo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EscenarioHielo.h" },
		{ "ModuleRelativePath", "EscenarioHielo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscenarioHielo_Statics::NewProp_Director_MetaData[] = {
		{ "Category", "Director" },
		{ "ModuleRelativePath", "EscenarioHielo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscenarioHielo_Statics::NewProp_Director = { "Director", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscenarioHielo, Director), Z_Construct_UClass_ADirectorVida_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscenarioHielo_Statics::NewProp_Director_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscenarioHielo_Statics::NewProp_Director_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscenarioHielo_Statics::NewProp_CorazonAire_MetaData[] = {
		{ "ModuleRelativePath", "EscenarioHielo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscenarioHielo_Statics::NewProp_CorazonAire = { "CorazonAire", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscenarioHielo, CorazonAire), Z_Construct_UClass_ACorazonAire_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscenarioHielo_Statics::NewProp_CorazonAire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscenarioHielo_Statics::NewProp_CorazonAire_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEscenarioHielo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscenarioHielo_Statics::NewProp_Director,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscenarioHielo_Statics::NewProp_CorazonAire,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscenarioHielo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscenarioHielo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscenarioHielo_Statics::ClassParams = {
		&AEscenarioHielo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEscenarioHielo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEscenarioHielo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEscenarioHielo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscenarioHielo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscenarioHielo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscenarioHielo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscenarioHielo, 1172182573);
	template<> TETRISUSFX01_API UClass* StaticClass<AEscenarioHielo>()
	{
		return AEscenarioHielo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscenarioHielo(Z_Construct_UClass_AEscenarioHielo, &AEscenarioHielo::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AEscenarioHielo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscenarioHielo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
