// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/DecoradorCorazon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecoradorCorazon() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ADecoradorCorazon_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ADecoradorCorazon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UCorazon_NoRegister();
// End Cross Module References
	void ADecoradorCorazon::StaticRegisterNativesADecoradorCorazon()
	{
	}
	UClass* Z_Construct_UClass_ADecoradorCorazon_NoRegister()
	{
		return ADecoradorCorazon::StaticClass();
	}
	struct Z_Construct_UClass_ADecoradorCorazon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADecoradorCorazon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADecoradorCorazon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DecoradorCorazon.h" },
		{ "ModuleRelativePath", "DecoradorCorazon.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADecoradorCorazon_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCorazon_NoRegister, (int32)VTABLE_OFFSET(ADecoradorCorazon, ICorazon), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADecoradorCorazon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADecoradorCorazon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADecoradorCorazon_Statics::ClassParams = {
		&ADecoradorCorazon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADecoradorCorazon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADecoradorCorazon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADecoradorCorazon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADecoradorCorazon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADecoradorCorazon, 1382147666);
	template<> TETRISUSFX01_API UClass* StaticClass<ADecoradorCorazon>()
	{
		return ADecoradorCorazon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADecoradorCorazon(Z_Construct_UClass_ADecoradorCorazon, &ADecoradorCorazon::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ADecoradorCorazon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADecoradorCorazon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
