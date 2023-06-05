// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/CambiosClase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCambiosClase() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UCambiosClase_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UCambiosClase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UCambiosClase::StaticRegisterNativesUCambiosClase()
	{
	}
	UClass* Z_Construct_UClass_UCambiosClase_NoRegister()
	{
		return UCambiosClase::StaticClass();
	}
	struct Z_Construct_UClass_UCambiosClase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCambiosClase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCambiosClase_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "CambiosClase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCambiosClase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICambiosClase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCambiosClase_Statics::ClassParams = {
		&UCambiosClase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCambiosClase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCambiosClase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCambiosClase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCambiosClase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCambiosClase, 1846649708);
	template<> TETRISUSFX01_API UClass* StaticClass<UCambiosClase>()
	{
		return UCambiosClase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCambiosClase(Z_Construct_UClass_UCambiosClase, &UCambiosClase::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UCambiosClase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCambiosClase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
