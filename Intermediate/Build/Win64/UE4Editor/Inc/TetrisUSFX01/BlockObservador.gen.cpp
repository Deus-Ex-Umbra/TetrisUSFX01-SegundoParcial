// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/BlockObservador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockObservador() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlockObservador_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlockObservador();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlock();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APublicadorPuntos_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UCambiosClase_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_USuscriptor_NoRegister();
// End Cross Module References
	void ABlockObservador::StaticRegisterNativesABlockObservador()
	{
	}
	UClass* Z_Construct_UClass_ABlockObservador_NoRegister()
	{
		return ABlockObservador::StaticClass();
	}
	struct Z_Construct_UClass_ABlockObservador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublicadorPuntos_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PublicadorPuntos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlockObservador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABlock,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockObservador_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BlockObservador.h" },
		{ "ModuleRelativePath", "BlockObservador.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockObservador_Statics::NewProp_PublicadorPuntos_MetaData[] = {
		{ "ModuleRelativePath", "BlockObservador.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockObservador_Statics::NewProp_PublicadorPuntos = { "PublicadorPuntos", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockObservador, PublicadorPuntos), Z_Construct_UClass_APublicadorPuntos_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlockObservador_Statics::NewProp_PublicadorPuntos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockObservador_Statics::NewProp_PublicadorPuntos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlockObservador_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockObservador_Statics::NewProp_PublicadorPuntos,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABlockObservador_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCambiosClase_NoRegister, (int32)VTABLE_OFFSET(ABlockObservador, ICambiosClase), false },
			{ Z_Construct_UClass_USuscriptor_NoRegister, (int32)VTABLE_OFFSET(ABlockObservador, ISuscriptor), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlockObservador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockObservador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlockObservador_Statics::ClassParams = {
		&ABlockObservador::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABlockObservador_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlockObservador_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlockObservador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockObservador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlockObservador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlockObservador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlockObservador, 4209130692);
	template<> TETRISUSFX01_API UClass* StaticClass<ABlockObservador>()
	{
		return ABlockObservador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlockObservador(Z_Construct_UClass_ABlockObservador, &ABlockObservador::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABlockObservador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockObservador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
