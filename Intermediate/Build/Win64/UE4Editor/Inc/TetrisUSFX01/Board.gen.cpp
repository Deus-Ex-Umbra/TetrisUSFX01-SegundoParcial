// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Board.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoard() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABoard_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABoard();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiece_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenario_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEscenarioFactory_NoRegister();
// End Cross Module References
	void ABoard::StaticRegisterNativesABoard()
	{
	}
	UClass* Z_Construct_UClass_ABoard_NoRegister()
	{
		return ABoard::StaticClass();
	}
	struct Z_Construct_UClass_ABoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPiece_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentPiece;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Escenario_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Escenario;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Escen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Escen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FabricadeEscenario_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FabricadeEscenario;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Board.h" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_CurrentPiece_MetaData[] = {
		{ "Comment", "//Aqu? se crea el ABoard y sus punteros\n" },
		{ "ModuleRelativePath", "Board.h" },
		{ "ToolTip", "Aqu? se crea el ABoard y sus punteros" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_CurrentPiece = { "CurrentPiece", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, CurrentPiece), Z_Construct_UClass_APiece_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_CurrentPiece_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_CurrentPiece_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_Escenario_MetaData[] = {
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_Escenario = { "Escenario", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, Escenario), Z_Construct_UClass_AEscenario_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_Escenario_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_Escenario_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_Escen_MetaData[] = {
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_Escen = { "Escen", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, Escen), Z_Construct_UClass_AEscenario_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_Escen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_Escen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_FabricadeEscenario_MetaData[] = {
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_FabricadeEscenario = { "FabricadeEscenario", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, FabricadeEscenario), Z_Construct_UClass_AEscenarioFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_FabricadeEscenario_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_FabricadeEscenario_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_CurrentPiece,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_Escenario,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_Escen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_FabricadeEscenario,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoard_Statics::ClassParams = {
		&ABoard::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABoard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoard, 2846386924);
	template<> TETRISUSFX01_API UClass* StaticClass<ABoard>()
	{
		return ABoard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoard(Z_Construct_UClass_ABoard, &ABoard::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABoard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
