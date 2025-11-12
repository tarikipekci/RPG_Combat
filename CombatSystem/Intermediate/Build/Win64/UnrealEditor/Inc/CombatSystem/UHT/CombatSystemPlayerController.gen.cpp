// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Controllers/CombatSystemPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatSystemPlayerController() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACombatSystemPlayerController();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACombatSystemPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
// End Cross Module References
	void ACombatSystemPlayerController::StaticRegisterNativesACombatSystemPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACombatSystemPlayerController);
	UClass* Z_Construct_UClass_ACombatSystemPlayerController_NoRegister()
	{
		return ACombatSystemPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACombatSystemPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACombatSystemPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatSystemPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatSystemPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/CombatSystemPlayerController.h" },
		{ "ModuleRelativePath", "Public/Controllers/CombatSystemPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACombatSystemPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACombatSystemPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACombatSystemPlayerController_Statics::ClassParams = {
		&ACombatSystemPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatSystemPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACombatSystemPlayerController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACombatSystemPlayerController()
	{
		if (!Z_Registration_Info_UClass_ACombatSystemPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACombatSystemPlayerController.OuterSingleton, Z_Construct_UClass_ACombatSystemPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACombatSystemPlayerController.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UClass* StaticClass<ACombatSystemPlayerController>()
	{
		return ACombatSystemPlayerController::StaticClass();
	}
	ACombatSystemPlayerController::ACombatSystemPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACombatSystemPlayerController);
	ACombatSystemPlayerController::~ACombatSystemPlayerController() {}
	struct Z_CompiledInDeferFile_FID_RPG_Combat_CombatSystem_Source_CombatSystem_Public_Controllers_CombatSystemPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Combat_CombatSystem_Source_CombatSystem_Public_Controllers_CombatSystemPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACombatSystemPlayerController, ACombatSystemPlayerController::StaticClass, TEXT("ACombatSystemPlayerController"), &Z_Registration_Info_UClass_ACombatSystemPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACombatSystemPlayerController), 368011197U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Combat_CombatSystem_Source_CombatSystem_Public_Controllers_CombatSystemPlayerController_h_1138842022(TEXT("/Script/CombatSystem"),
		Z_CompiledInDeferFile_FID_RPG_Combat_CombatSystem_Source_CombatSystem_Public_Controllers_CombatSystemPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_Combat_CombatSystem_Source_CombatSystem_Public_Controllers_CombatSystemPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
