// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/MaterialesPiece.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialesPiece() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AMaterialesPiece_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AMaterialesPiece();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void AMaterialesPiece::StaticRegisterNativesAMaterialesPiece()
	{
	}
	UClass* Z_Construct_UClass_AMaterialesPiece_NoRegister()
	{
		return AMaterialesPiece::StaticClass();
	}
	struct Z_Construct_UClass_AMaterialesPiece_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMaterialesPiece_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialesPiece_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialesPiece.h" },
		{ "ModuleRelativePath", "MaterialesPiece.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMaterialesPiece_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMaterialesPiece>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMaterialesPiece_Statics::ClassParams = {
		&AMaterialesPiece::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMaterialesPiece_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMaterialesPiece_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMaterialesPiece()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMaterialesPiece_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMaterialesPiece, 130466270);
	template<> TETRISUSFX01_API UClass* StaticClass<AMaterialesPiece>()
	{
		return AMaterialesPiece::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMaterialesPiece(Z_Construct_UClass_AMaterialesPiece, &AMaterialesPiece::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AMaterialesPiece"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMaterialesPiece);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
