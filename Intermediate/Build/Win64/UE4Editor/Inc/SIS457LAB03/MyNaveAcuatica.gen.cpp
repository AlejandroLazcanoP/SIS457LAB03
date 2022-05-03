// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIS457LAB03/MyNaveAcuatica.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyNaveAcuatica() {}
// Cross Module References
	SIS457LAB03_API UClass* Z_Construct_UClass_AMyNaveAcuatica_NoRegister();
	SIS457LAB03_API UClass* Z_Construct_UClass_AMyNaveAcuatica();
	SIS457LAB03_API UClass* Z_Construct_UClass_ANaveAcuatica();
	UPackage* Z_Construct_UPackage__Script_SIS457LAB03();
// End Cross Module References
	void AMyNaveAcuatica::StaticRegisterNativesAMyNaveAcuatica()
	{
	}
	UClass* Z_Construct_UClass_AMyNaveAcuatica_NoRegister()
	{
		return AMyNaveAcuatica::StaticClass();
	}
	struct Z_Construct_UClass_AMyNaveAcuatica_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyNaveAcuatica_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveAcuatica,
		(UObject* (*)())Z_Construct_UPackage__Script_SIS457LAB03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyNaveAcuatica_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyNaveAcuatica.h" },
		{ "ModuleRelativePath", "MyNaveAcuatica.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyNaveAcuatica_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyNaveAcuatica>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyNaveAcuatica_Statics::ClassParams = {
		&AMyNaveAcuatica::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyNaveAcuatica_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyNaveAcuatica_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyNaveAcuatica()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyNaveAcuatica_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyNaveAcuatica, 1635734043);
	template<> SIS457LAB03_API UClass* StaticClass<AMyNaveAcuatica>()
	{
		return AMyNaveAcuatica::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyNaveAcuatica(Z_Construct_UClass_AMyNaveAcuatica, &AMyNaveAcuatica::StaticClass, TEXT("/Script/SIS457LAB03"), TEXT("AMyNaveAcuatica"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyNaveAcuatica);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
