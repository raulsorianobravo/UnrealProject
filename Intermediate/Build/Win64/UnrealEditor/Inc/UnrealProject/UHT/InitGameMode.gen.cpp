// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProject/InitGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInitGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UNREALPROJECT_API UClass* Z_Construct_UClass_AInitGameMode();
	UNREALPROJECT_API UClass* Z_Construct_UClass_AInitGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealProject();
// End Cross Module References
	void AInitGameMode::StaticRegisterNativesAInitGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInitGameMode);
	UClass* Z_Construct_UClass_AInitGameMode_NoRegister()
	{
		return AInitGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AInitGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInitGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInitGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInitGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "InitGameMode.h" },
		{ "ModuleRelativePath", "InitGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInitGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInitGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInitGameMode_Statics::ClassParams = {
		&AInitGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInitGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AInitGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AInitGameMode()
	{
		if (!Z_Registration_Info_UClass_AInitGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInitGameMode.OuterSingleton, Z_Construct_UClass_AInitGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInitGameMode.OuterSingleton;
	}
	template<> UNREALPROJECT_API UClass* StaticClass<AInitGameMode>()
	{
		return AInitGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInitGameMode);
	AInitGameMode::~AInitGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_raulsb_Documents_Unreal_Projects_UnrealProject_Source_UnrealProject_InitGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_raulsb_Documents_Unreal_Projects_UnrealProject_Source_UnrealProject_InitGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInitGameMode, AInitGameMode::StaticClass, TEXT("AInitGameMode"), &Z_Registration_Info_UClass_AInitGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInitGameMode), 4134182839U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_raulsb_Documents_Unreal_Projects_UnrealProject_Source_UnrealProject_InitGameMode_h_1993580528(TEXT("/Script/UnrealProject"),
		Z_CompiledInDeferFile_FID_Users_raulsb_Documents_Unreal_Projects_UnrealProject_Source_UnrealProject_InitGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_raulsb_Documents_Unreal_Projects_UnrealProject_Source_UnrealProject_InitGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
