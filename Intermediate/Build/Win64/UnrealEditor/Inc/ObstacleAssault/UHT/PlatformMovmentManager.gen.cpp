// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstacleAssault/PlatformMovmentManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformMovmentManager() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	OBSTACLEASSAULT_API UClass* Z_Construct_UClass_APlatformMovmentManager();
	OBSTACLEASSAULT_API UClass* Z_Construct_UClass_APlatformMovmentManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ObstacleAssault();
// End Cross Module References
	void APlatformMovmentManager::StaticRegisterNativesAPlatformMovmentManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlatformMovmentManager);
	UClass* Z_Construct_UClass_APlatformMovmentManager_NoRegister()
	{
		return APlatformMovmentManager::StaticClass();
	}
	struct Z_Construct_UClass_APlatformMovmentManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformMovmentManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ObstacleAssault,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformMovmentManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlatformMovmentManager.h" },
		{ "ModuleRelativePath", "PlatformMovmentManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformMovmentManager_Statics::NewProp_PlatformVelocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// to make value editable anywhere -> name of function without ;\n// and line below is the value\n" },
		{ "ModuleRelativePath", "PlatformMovmentManager.h" },
		{ "ToolTip", "to make value editable anywhere -> name of function without ;\nand line below is the value" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlatformMovmentManager_Statics::NewProp_PlatformVelocity = { "PlatformVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlatformMovmentManager, PlatformVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlatformMovmentManager_Statics::NewProp_PlatformVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformMovmentManager_Statics::NewProp_PlatformVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformMovmentManager_Statics::NewProp_MoveDistance_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PlatformMovmentManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlatformMovmentManager_Statics::NewProp_MoveDistance = { "MoveDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlatformMovmentManager, MoveDistance), METADATA_PARAMS(Z_Construct_UClass_APlatformMovmentManager_Statics::NewProp_MoveDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformMovmentManager_Statics::NewProp_MoveDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformMovmentManager_Statics::NewProp_RotationVelocity_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "PlatformMovmentManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlatformMovmentManager_Statics::NewProp_RotationVelocity = { "RotationVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlatformMovmentManager, RotationVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_APlatformMovmentManager_Statics::NewProp_RotationVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformMovmentManager_Statics::NewProp_RotationVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformMovmentManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformMovmentManager_Statics::NewProp_PlatformVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformMovmentManager_Statics::NewProp_MoveDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformMovmentManager_Statics::NewProp_RotationVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformMovmentManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformMovmentManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformMovmentManager_Statics::ClassParams = {
		&APlatformMovmentManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlatformMovmentManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlatformMovmentManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlatformMovmentManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformMovmentManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlatformMovmentManager()
	{
		if (!Z_Registration_Info_UClass_APlatformMovmentManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformMovmentManager.OuterSingleton, Z_Construct_UClass_APlatformMovmentManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlatformMovmentManager.OuterSingleton;
	}
	template<> OBSTACLEASSAULT_API UClass* StaticClass<APlatformMovmentManager>()
	{
		return APlatformMovmentManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformMovmentManager);
	APlatformMovmentManager::~APlatformMovmentManager() {}
	struct Z_CompiledInDeferFile_FID_Users_tkgs4_OneDrive_Desktop_Game_Dev_Unreal_ObstacleAssault_Source_ObstacleAssault_PlatformMovmentManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tkgs4_OneDrive_Desktop_Game_Dev_Unreal_ObstacleAssault_Source_ObstacleAssault_PlatformMovmentManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlatformMovmentManager, APlatformMovmentManager::StaticClass, TEXT("APlatformMovmentManager"), &Z_Registration_Info_UClass_APlatformMovmentManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformMovmentManager), 45102980U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tkgs4_OneDrive_Desktop_Game_Dev_Unreal_ObstacleAssault_Source_ObstacleAssault_PlatformMovmentManager_h_2417432156(TEXT("/Script/ObstacleAssault"),
		Z_CompiledInDeferFile_FID_Users_tkgs4_OneDrive_Desktop_Game_Dev_Unreal_ObstacleAssault_Source_ObstacleAssault_PlatformMovmentManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tkgs4_OneDrive_Desktop_Game_Dev_Unreal_ObstacleAssault_Source_ObstacleAssault_PlatformMovmentManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
