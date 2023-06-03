// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/EstadodelEscenario.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadodelEscenario() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UEstadodelEscenario_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UEstadodelEscenario();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UEstadodelEscenario::StaticRegisterNativesUEstadodelEscenario()
	{
	}
	UClass* Z_Construct_UClass_UEstadodelEscenario_NoRegister()
	{
		return UEstadodelEscenario::StaticClass();
	}
	struct Z_Construct_UClass_UEstadodelEscenario_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEstadodelEscenario_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEstadodelEscenario_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "EstadodelEscenario.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEstadodelEscenario_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEstadodelEscenario>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEstadodelEscenario_Statics::ClassParams = {
		&UEstadodelEscenario::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEstadodelEscenario_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEstadodelEscenario_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEstadodelEscenario()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEstadodelEscenario_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEstadodelEscenario, 1864348515);
	template<> TETRISUSFX01_API UClass* StaticClass<UEstadodelEscenario>()
	{
		return UEstadodelEscenario::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEstadodelEscenario(Z_Construct_UClass_UEstadodelEscenario, &UEstadodelEscenario::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UEstadodelEscenario"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEstadodelEscenario);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
