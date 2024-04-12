// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProject/Actors/ProjectileActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UNREALPROJECT_API UClass* Z_Construct_UClass_AProjectileActor();
	UNREALPROJECT_API UClass* Z_Construct_UClass_AProjectileActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealProject();
// End Cross Module References
	void AProjectileActor::StaticRegisterNativesAProjectileActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectileActor);
	UClass* Z_Construct_UClass_AProjectileActor_NoRegister()
	{
		return AProjectileActor::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileCollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileCollisionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/ProjectileActor.h" },
		{ "ModuleRelativePath", "Actors/ProjectileActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileActor_Statics::NewProp_ProjectileMeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/ProjectileActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileActor_Statics::NewProp_ProjectileMeshComponent = { "ProjectileMeshComponent", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileActor, ProjectileMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileActor_Statics::NewProp_ProjectileMeshComponent_MetaData), Z_Construct_UClass_AProjectileActor_Statics::NewProp_ProjectileMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileActor_Statics::NewProp_ProjectileCollisionComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/ProjectileActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileActor_Statics::NewProp_ProjectileCollisionComponent = { "ProjectileCollisionComponent", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileActor, ProjectileCollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileActor_Statics::NewProp_ProjectileCollisionComponent_MetaData), Z_Construct_UClass_AProjectileActor_Statics::NewProp_ProjectileCollisionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileActor_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/ProjectileActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileActor_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileActor, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileActor_Statics::NewProp_ProjectileMovementComponent_MetaData), Z_Construct_UClass_AProjectileActor_Statics::NewProp_ProjectileMovementComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileActor_Statics::NewProp_ProjectileMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileActor_Statics::NewProp_ProjectileCollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileActor_Statics::NewProp_ProjectileMovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileActor_Statics::ClassParams = {
		&AProjectileActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProjectileActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectileActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AProjectileActor()
	{
		if (!Z_Registration_Info_UClass_AProjectileActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileActor.OuterSingleton, Z_Construct_UClass_AProjectileActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectileActor.OuterSingleton;
	}
	template<> UNREALPROJECT_API UClass* StaticClass<AProjectileActor>()
	{
		return AProjectileActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileActor);
	AProjectileActor::~AProjectileActor() {}
	struct Z_CompiledInDeferFile_FID_Users_raulsb_Documents_Unreal_Projects_UnrealProject_Source_UnrealProject_Actors_ProjectileActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_raulsb_Documents_Unreal_Projects_UnrealProject_Source_UnrealProject_Actors_ProjectileActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileActor, AProjectileActor::StaticClass, TEXT("AProjectileActor"), &Z_Registration_Info_UClass_AProjectileActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileActor), 4269622055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_raulsb_Documents_Unreal_Projects_UnrealProject_Source_UnrealProject_Actors_ProjectileActor_h_3050445253(TEXT("/Script/UnrealProject"),
		Z_CompiledInDeferFile_FID_Users_raulsb_Documents_Unreal_Projects_UnrealProject_Source_UnrealProject_Actors_ProjectileActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_raulsb_Documents_Unreal_Projects_UnrealProject_Source_UnrealProject_Actors_ProjectileActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
