// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/CorazonColoreo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorazonColoreo() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ACorazonColoreo_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ACorazonColoreo();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ADecoradorCorazon();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void ACorazonColoreo::StaticRegisterNativesACorazonColoreo()
	{
	}
	UClass* Z_Construct_UClass_ACorazonColoreo_NoRegister()
	{
		return ACorazonColoreo::StaticClass();
	}
	struct Z_Construct_UClass_ACorazonColoreo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACorazonColoreo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADecoradorCorazon,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorazonColoreo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CorazonColoreo.h" },
		{ "ModuleRelativePath", "CorazonColoreo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACorazonColoreo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACorazonColoreo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACorazonColoreo_Statics::ClassParams = {
		&ACorazonColoreo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACorazonColoreo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACorazonColoreo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACorazonColoreo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACorazonColoreo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACorazonColoreo, 3417556636);
	template<> TETRISUSFX01_API UClass* StaticClass<ACorazonColoreo>()
	{
		return ACorazonColoreo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACorazonColoreo(Z_Construct_UClass_ACorazonColoreo, &ACorazonColoreo::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ACorazonColoreo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACorazonColoreo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
