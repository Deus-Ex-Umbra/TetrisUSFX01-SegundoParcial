// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/MovimientoRotacionAleatorios.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovimientoRotacionAleatorios() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AMovimientoRotacionAleatorios_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AMovimientoRotacionAleatorios();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	DEFINE_FUNCTION(AMovimientoRotacionAleatorios::execMovimientoRotacion)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__Rx);
		P_GET_PROPERTY(FFloatProperty,Z_Param__Ry);
		P_GET_PROPERTY(FFloatProperty,Z_Param__Rz);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovimientoRotacion(Z_Param__Rx,Z_Param__Ry,Z_Param__Rz);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMovimientoRotacionAleatorios::execMovimientoLateral)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__Mx);
		P_GET_PROPERTY(FFloatProperty,Z_Param__My);
		P_GET_PROPERTY(FFloatProperty,Z_Param__Mz);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovimientoLateral(Z_Param__Mx,Z_Param__My,Z_Param__Mz);
		P_NATIVE_END;
	}
	void AMovimientoRotacionAleatorios::StaticRegisterNativesAMovimientoRotacionAleatorios()
	{
		UClass* Class = AMovimientoRotacionAleatorios::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MovimientoLateral", &AMovimientoRotacionAleatorios::execMovimientoLateral },
			{ "MovimientoRotacion", &AMovimientoRotacionAleatorios::execMovimientoRotacion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoLateral_Statics
	{
		struct MovimientoRotacionAleatorios_eventMovimientoLateral_Parms
		{
			float _Mx;
			float _My;
			float _Mz;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__Mx;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__My;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__Mz;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoLateral_Statics::NewProp__Mx = { "_Mx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovimientoRotacionAleatorios_eventMovimientoLateral_Parms, _Mx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoLateral_Statics::NewProp__My = { "_My", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovimientoRotacionAleatorios_eventMovimientoLateral_Parms, _My), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoLateral_Statics::NewProp__Mz = { "_Mz", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovimientoRotacionAleatorios_eventMovimientoLateral_Parms, _Mz), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoLateral_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoLateral_Statics::NewProp__Mx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoLateral_Statics::NewProp__My,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoLateral_Statics::NewProp__Mz,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoLateral_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MovimientoRotacionAleatorios.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoLateral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovimientoRotacionAleatorios, nullptr, "MovimientoLateral", nullptr, nullptr, sizeof(MovimientoRotacionAleatorios_eventMovimientoLateral_Parms), Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoLateral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoLateral_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoLateral_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoLateral_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoLateral()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoLateral_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoRotacion_Statics
	{
		struct MovimientoRotacionAleatorios_eventMovimientoRotacion_Parms
		{
			float _Rx;
			float _Ry;
			float _Rz;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__Rx;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__Ry;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__Rz;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoRotacion_Statics::NewProp__Rx = { "_Rx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovimientoRotacionAleatorios_eventMovimientoRotacion_Parms, _Rx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoRotacion_Statics::NewProp__Ry = { "_Ry", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovimientoRotacionAleatorios_eventMovimientoRotacion_Parms, _Ry), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoRotacion_Statics::NewProp__Rz = { "_Rz", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovimientoRotacionAleatorios_eventMovimientoRotacion_Parms, _Rz), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoRotacion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoRotacion_Statics::NewProp__Rx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoRotacion_Statics::NewProp__Ry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoRotacion_Statics::NewProp__Rz,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoRotacion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MovimientoRotacionAleatorios.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoRotacion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovimientoRotacionAleatorios, nullptr, "MovimientoRotacion", nullptr, nullptr, sizeof(MovimientoRotacionAleatorios_eventMovimientoRotacion_Parms), Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoRotacion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoRotacion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoRotacion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoRotacion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoRotacion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoRotacion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMovimientoRotacionAleatorios_NoRegister()
	{
		return AMovimientoRotacionAleatorios::StaticClass();
	}
	struct Z_Construct_UClass_AMovimientoRotacionAleatorios_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovimientoRotacionAleatorios_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMovimientoRotacionAleatorios_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoLateral, "MovimientoLateral" }, // 1200581020
		{ &Z_Construct_UFunction_AMovimientoRotacionAleatorios_MovimientoRotacion, "MovimientoRotacion" }, // 928250421
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovimientoRotacionAleatorios_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovimientoRotacionAleatorios.h" },
		{ "ModuleRelativePath", "MovimientoRotacionAleatorios.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovimientoRotacionAleatorios_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovimientoRotacionAleatorios>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMovimientoRotacionAleatorios_Statics::ClassParams = {
		&AMovimientoRotacionAleatorios::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovimientoRotacionAleatorios_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovimientoRotacionAleatorios_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovimientoRotacionAleatorios()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMovimientoRotacionAleatorios_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovimientoRotacionAleatorios, 38334574);
	template<> TETRISUSFX01_API UClass* StaticClass<AMovimientoRotacionAleatorios>()
	{
		return AMovimientoRotacionAleatorios::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovimientoRotacionAleatorios(Z_Construct_UClass_AMovimientoRotacionAleatorios, &AMovimientoRotacionAleatorios::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AMovimientoRotacionAleatorios"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovimientoRotacionAleatorios);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
