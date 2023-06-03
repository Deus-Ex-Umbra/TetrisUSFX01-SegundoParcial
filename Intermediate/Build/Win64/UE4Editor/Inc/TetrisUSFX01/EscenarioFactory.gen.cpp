// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/EscenarioFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscenarioFactory() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenarioFactory_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenarioFactory();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void AEscenarioFactory::StaticRegisterNativesAEscenarioFactory()
	{
	}
	UClass* Z_Construct_UClass_AEscenarioFactory_NoRegister()
	{
		return AEscenarioFactory::StaticClass();
	}
	struct Z_Construct_UClass_AEscenarioFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscenarioFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscenarioFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EscenarioFactory.h" },
		{ "ModuleRelativePath", "EscenarioFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscenarioFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscenarioFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscenarioFactory_Statics::ClassParams = {
		&AEscenarioFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEscenarioFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscenarioFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscenarioFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscenarioFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscenarioFactory, 1128636936);
	template<> TETRISUSFX01_API UClass* StaticClass<AEscenarioFactory>()
	{
		return AEscenarioFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscenarioFactory(Z_Construct_UClass_AEscenarioFactory, &AEscenarioFactory::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AEscenarioFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscenarioFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
