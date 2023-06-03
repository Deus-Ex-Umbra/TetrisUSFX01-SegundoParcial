// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/EstadoTurbulentoAgua.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoTurbulentoAgua() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEstadoTurbulentoAgua_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEstadoTurbulentoAgua();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenario_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UEstadodelEscenario_NoRegister();
// End Cross Module References
	void AEstadoTurbulentoAgua::StaticRegisterNativesAEstadoTurbulentoAgua()
	{
	}
	UClass* Z_Construct_UClass_AEstadoTurbulentoAgua_NoRegister()
	{
		return AEstadoTurbulentoAgua::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoTurbulentoAgua_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Escenario_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Escenario;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoTurbulentoAgua_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoTurbulentoAgua_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoTurbulentoAgua.h" },
		{ "ModuleRelativePath", "EstadoTurbulentoAgua.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoTurbulentoAgua_Statics::NewProp_Escenario_MetaData[] = {
		{ "ModuleRelativePath", "EstadoTurbulentoAgua.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEstadoTurbulentoAgua_Statics::NewProp_Escenario = { "Escenario", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEstadoTurbulentoAgua, Escenario), Z_Construct_UClass_AEscenario_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEstadoTurbulentoAgua_Statics::NewProp_Escenario_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoTurbulentoAgua_Statics::NewProp_Escenario_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEstadoTurbulentoAgua_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEstadoTurbulentoAgua_Statics::NewProp_Escenario,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoTurbulentoAgua_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstadodelEscenario_NoRegister, (int32)VTABLE_OFFSET(AEstadoTurbulentoAgua, IEstadodelEscenario), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoTurbulentoAgua_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoTurbulentoAgua>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoTurbulentoAgua_Statics::ClassParams = {
		&AEstadoTurbulentoAgua::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEstadoTurbulentoAgua_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoTurbulentoAgua_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstadoTurbulentoAgua_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoTurbulentoAgua_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoTurbulentoAgua()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoTurbulentoAgua_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoTurbulentoAgua, 3791739556);
	template<> TETRISUSFX01_API UClass* StaticClass<AEstadoTurbulentoAgua>()
	{
		return AEstadoTurbulentoAgua::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoTurbulentoAgua(Z_Construct_UClass_AEstadoTurbulentoAgua, &AEstadoTurbulentoAgua::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AEstadoTurbulentoAgua"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoTurbulentoAgua);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
