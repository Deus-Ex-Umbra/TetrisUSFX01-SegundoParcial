// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Corazon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorazon() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UCorazon_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UCorazon();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UCorazon::StaticRegisterNativesUCorazon()
	{
	}
	UClass* Z_Construct_UClass_UCorazon_NoRegister()
	{
		return UCorazon::StaticClass();
	}
	struct Z_Construct_UClass_UCorazon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCorazon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorazon_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Corazon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCorazon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICorazon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCorazon_Statics::ClassParams = {
		&UCorazon::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCorazon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCorazon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCorazon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCorazon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCorazon, 3559054429);
	template<> TETRISUSFX01_API UClass* StaticClass<UCorazon>()
	{
		return UCorazon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCorazon(Z_Construct_UClass_UCorazon, &UCorazon::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UCorazon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCorazon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
