// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIS457LAB03/NaveTerrestreEnemigo01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveTerrestreEnemigo01() {}
// Cross Module References
	SIS457LAB03_API UClass* Z_Construct_UClass_ANaveTerrestreEnemigo01_NoRegister();
	SIS457LAB03_API UClass* Z_Construct_UClass_ANaveTerrestreEnemigo01();
	SIS457LAB03_API UClass* Z_Construct_UClass_ANaveTerrestre();
	UPackage* Z_Construct_UPackage__Script_SIS457LAB03();
// End Cross Module References
	void ANaveTerrestreEnemigo01::StaticRegisterNativesANaveTerrestreEnemigo01()
	{
	}
	UClass* Z_Construct_UClass_ANaveTerrestreEnemigo01_NoRegister()
	{
		return ANaveTerrestreEnemigo01::StaticClass();
	}
	struct Z_Construct_UClass_ANaveTerrestreEnemigo01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveTerrestreEnemigo01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveTerrestre,
		(UObject* (*)())Z_Construct_UPackage__Script_SIS457LAB03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveTerrestreEnemigo01_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NaveTerrestreEnemigo01.h" },
		{ "ModuleRelativePath", "NaveTerrestreEnemigo01.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveTerrestreEnemigo01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveTerrestreEnemigo01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveTerrestreEnemigo01_Statics::ClassParams = {
		&ANaveTerrestreEnemigo01::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveTerrestreEnemigo01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveTerrestreEnemigo01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveTerrestreEnemigo01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveTerrestreEnemigo01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveTerrestreEnemigo01, 623285016);
	template<> SIS457LAB03_API UClass* StaticClass<ANaveTerrestreEnemigo01>()
	{
		return ANaveTerrestreEnemigo01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveTerrestreEnemigo01(Z_Construct_UClass_ANaveTerrestreEnemigo01, &ANaveTerrestreEnemigo01::StaticClass, TEXT("/Script/SIS457LAB03"), TEXT("ANaveTerrestreEnemigo01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveTerrestreEnemigo01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
