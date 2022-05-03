// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef SIS457LAB03_Proyectil_generated_h
#error "Proyectil.generated.h already included, missing '#pragma once' in Proyectil.h"
#endif
#define SIS457LAB03_Proyectil_generated_h

#define SIS457LAB03_Source_SIS457LAB03_Proyectil_h_15_SPARSE_DATA
#define SIS457LAB03_Source_SIS457LAB03_Proyectil_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define SIS457LAB03_Source_SIS457LAB03_Proyectil_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define SIS457LAB03_Source_SIS457LAB03_Proyectil_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProyectil(); \
	friend struct Z_Construct_UClass_AProyectil_Statics; \
public: \
	DECLARE_CLASS(AProyectil, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SIS457LAB03"), NO_API) \
	DECLARE_SERIALIZER(AProyectil)


#define SIS457LAB03_Source_SIS457LAB03_Proyectil_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAProyectil(); \
	friend struct Z_Construct_UClass_AProyectil_Statics; \
public: \
	DECLARE_CLASS(AProyectil, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SIS457LAB03"), NO_API) \
	DECLARE_SERIALIZER(AProyectil)


#define SIS457LAB03_Source_SIS457LAB03_Proyectil_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProyectil(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProyectil) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProyectil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProyectil); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProyectil(AProyectil&&); \
	NO_API AProyectil(const AProyectil&); \
public:


#define SIS457LAB03_Source_SIS457LAB03_Proyectil_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProyectil(AProyectil&&); \
	NO_API AProyectil(const AProyectil&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProyectil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProyectil); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProyectil)


#define SIS457LAB03_Source_SIS457LAB03_Proyectil_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AProyectil, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AProyectil, ProjectileMovement); }


#define SIS457LAB03_Source_SIS457LAB03_Proyectil_h_12_PROLOG
#define SIS457LAB03_Source_SIS457LAB03_Proyectil_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SIS457LAB03_Source_SIS457LAB03_Proyectil_h_15_PRIVATE_PROPERTY_OFFSET \
	SIS457LAB03_Source_SIS457LAB03_Proyectil_h_15_SPARSE_DATA \
	SIS457LAB03_Source_SIS457LAB03_Proyectil_h_15_RPC_WRAPPERS \
	SIS457LAB03_Source_SIS457LAB03_Proyectil_h_15_INCLASS \
	SIS457LAB03_Source_SIS457LAB03_Proyectil_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SIS457LAB03_Source_SIS457LAB03_Proyectil_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SIS457LAB03_Source_SIS457LAB03_Proyectil_h_15_PRIVATE_PROPERTY_OFFSET \
	SIS457LAB03_Source_SIS457LAB03_Proyectil_h_15_SPARSE_DATA \
	SIS457LAB03_Source_SIS457LAB03_Proyectil_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SIS457LAB03_Source_SIS457LAB03_Proyectil_h_15_INCLASS_NO_PURE_DECLS \
	SIS457LAB03_Source_SIS457LAB03_Proyectil_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIS457LAB03_API UClass* StaticClass<class AProyectil>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SIS457LAB03_Source_SIS457LAB03_Proyectil_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
