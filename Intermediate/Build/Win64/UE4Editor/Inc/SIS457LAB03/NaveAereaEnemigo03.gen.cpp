// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIS457LAB03/NaveAereaEnemigo03.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveAereaEnemigo03() {}
// Cross Module References
	SIS457LAB03_API UClass* Z_Construct_UClass_ANaveAereaEnemigo03_NoRegister();
	SIS457LAB03_API UClass* Z_Construct_UClass_ANaveAereaEnemigo03();
	SIS457LAB03_API UClass* Z_Construct_UClass_ANaveAerea();
	UPackage* Z_Construct_UPackage__Script_SIS457LAB03();
// End Cross Module References
	void ANaveAereaEnemigo03::StaticRegisterNativesANaveAereaEnemigo03()
	{
	}
	UClass* Z_Construct_UClass_ANaveAereaEnemigo03_NoRegister()
	{
		return ANaveAereaEnemigo03::StaticClass();
	}
	struct Z_Construct_UClass_ANaveAereaEnemigo03_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveAereaEnemigo03_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveAerea,
		(UObject* (*)())Z_Construct_UPackage__Script_SIS457LAB03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAereaEnemigo03_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NaveAereaEnemigo03.h" },
		{ "ModuleRelativePath", "NaveAereaEnemigo03.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveAereaEnemigo03_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveAereaEnemigo03>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveAereaEnemigo03_Statics::ClassParams = {
		&ANaveAereaEnemigo03::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveAereaEnemigo03_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAereaEnemigo03_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveAereaEnemigo03()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveAereaEnemigo03_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveAereaEnemigo03, 4246338205);
	template<> SIS457LAB03_API UClass* StaticClass<ANaveAereaEnemigo03>()
	{
		return ANaveAereaEnemigo03::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveAereaEnemigo03(Z_Construct_UClass_ANaveAereaEnemigo03, &ANaveAereaEnemigo03::StaticClass, TEXT("/Script/SIS457LAB03"), TEXT("ANaveAereaEnemigo03"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveAereaEnemigo03);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
