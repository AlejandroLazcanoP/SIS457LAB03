// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIS457LAB03/NaveAereaEnemigo02.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveAereaEnemigo02() {}
// Cross Module References
	SIS457LAB03_API UClass* Z_Construct_UClass_ANaveAereaEnemigo02_NoRegister();
	SIS457LAB03_API UClass* Z_Construct_UClass_ANaveAereaEnemigo02();
	SIS457LAB03_API UClass* Z_Construct_UClass_ANaveAerea();
	UPackage* Z_Construct_UPackage__Script_SIS457LAB03();
// End Cross Module References
	void ANaveAereaEnemigo02::StaticRegisterNativesANaveAereaEnemigo02()
	{
	}
	UClass* Z_Construct_UClass_ANaveAereaEnemigo02_NoRegister()
	{
		return ANaveAereaEnemigo02::StaticClass();
	}
	struct Z_Construct_UClass_ANaveAereaEnemigo02_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveAereaEnemigo02_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveAerea,
		(UObject* (*)())Z_Construct_UPackage__Script_SIS457LAB03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAereaEnemigo02_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NaveAereaEnemigo02.h" },
		{ "ModuleRelativePath", "NaveAereaEnemigo02.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveAereaEnemigo02_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveAereaEnemigo02>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveAereaEnemigo02_Statics::ClassParams = {
		&ANaveAereaEnemigo02::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveAereaEnemigo02_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAereaEnemigo02_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveAereaEnemigo02()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveAereaEnemigo02_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveAereaEnemigo02, 2560612060);
	template<> SIS457LAB03_API UClass* StaticClass<ANaveAereaEnemigo02>()
	{
		return ANaveAereaEnemigo02::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveAereaEnemigo02(Z_Construct_UClass_ANaveAereaEnemigo02, &ANaveAereaEnemigo02::StaticClass, TEXT("/Script/SIS457LAB03"), TEXT("ANaveAereaEnemigo02"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveAereaEnemigo02);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
