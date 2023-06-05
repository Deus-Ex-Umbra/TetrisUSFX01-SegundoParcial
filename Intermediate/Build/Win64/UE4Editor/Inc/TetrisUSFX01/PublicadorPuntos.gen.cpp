// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/PublicadorPuntos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePublicadorPuntos() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_APublicadorPuntos_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APublicadorPuntos();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APublicador();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void APublicadorPuntos::StaticRegisterNativesAPublicadorPuntos()
	{
	}
	UClass* Z_Construct_UClass_APublicadorPuntos_NoRegister()
	{
		return APublicadorPuntos::StaticClass();
	}
	struct Z_Construct_UClass_APublicadorPuntos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APublicadorPuntos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APublicador,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APublicadorPuntos_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PublicadorPuntos.h" },
		{ "ModuleRelativePath", "PublicadorPuntos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APublicadorPuntos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APublicadorPuntos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APublicadorPuntos_Statics::ClassParams = {
		&APublicadorPuntos::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APublicadorPuntos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APublicadorPuntos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APublicadorPuntos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APublicadorPuntos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APublicadorPuntos, 2560085924);
	template<> TETRISUSFX01_API UClass* StaticClass<APublicadorPuntos>()
	{
		return APublicadorPuntos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APublicadorPuntos(Z_Construct_UClass_APublicadorPuntos, &APublicadorPuntos::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("APublicadorPuntos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APublicadorPuntos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
