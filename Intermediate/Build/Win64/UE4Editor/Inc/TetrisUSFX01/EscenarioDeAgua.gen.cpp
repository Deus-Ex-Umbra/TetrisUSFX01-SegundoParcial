// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/EscenarioDeAgua.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscenarioDeAgua() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenarioDeAgua_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenarioDeAgua();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenario();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void AEscenarioDeAgua::StaticRegisterNativesAEscenarioDeAgua()
	{
	}
	UClass* Z_Construct_UClass_AEscenarioDeAgua_NoRegister()
	{
		return AEscenarioDeAgua::StaticClass();
	}
	struct Z_Construct_UClass_AEscenarioDeAgua_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscenarioDeAgua_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEscenario,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscenarioDeAgua_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EscenarioDeAgua.h" },
		{ "ModuleRelativePath", "EscenarioDeAgua.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscenarioDeAgua_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscenarioDeAgua>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscenarioDeAgua_Statics::ClassParams = {
		&AEscenarioDeAgua::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEscenarioDeAgua_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscenarioDeAgua_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscenarioDeAgua()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscenarioDeAgua_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscenarioDeAgua, 2840790308);
	template<> TETRISUSFX01_API UClass* StaticClass<AEscenarioDeAgua>()
	{
		return AEscenarioDeAgua::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscenarioDeAgua(Z_Construct_UClass_AEscenarioDeAgua, &AEscenarioDeAgua::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AEscenarioDeAgua"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscenarioDeAgua);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
