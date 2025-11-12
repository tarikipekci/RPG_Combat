// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Characters/CombatSystemPlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatSystemPlayerCharacter() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACombatSystemBaseCharacter();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACombatSystemPlayerCharacter();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACombatSystemPlayerCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
// End Cross Module References
	void ACombatSystemPlayerCharacter::StaticRegisterNativesACombatSystemPlayerCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACombatSystemPlayerCharacter);
	UClass* Z_Construct_UClass_ACombatSystemPlayerCharacter_NoRegister()
	{
		return ACombatSystemPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACombatSystemPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACombatSystemPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACombatSystemBaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatSystemPlayerCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatSystemPlayerCharacter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/CombatSystemPlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/CombatSystemPlayerCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACombatSystemPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACombatSystemPlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACombatSystemPlayerCharacter_Statics::ClassParams = {
		&ACombatSystemPlayerCharacter::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatSystemPlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACombatSystemPlayerCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACombatSystemPlayerCharacter()
	{
		if (!Z_Registration_Info_UClass_ACombatSystemPlayerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACombatSystemPlayerCharacter.OuterSingleton, Z_Construct_UClass_ACombatSystemPlayerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACombatSystemPlayerCharacter.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UClass* StaticClass<ACombatSystemPlayerCharacter>()
	{
		return ACombatSystemPlayerCharacter::StaticClass();
	}
	ACombatSystemPlayerCharacter::ACombatSystemPlayerCharacter() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACombatSystemPlayerCharacter);
	ACombatSystemPlayerCharacter::~ACombatSystemPlayerCharacter() {}
	struct Z_CompiledInDeferFile_FID_RPG_Combat_CombatSystem_Source_CombatSystem_Public_Characters_CombatSystemPlayerCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Combat_CombatSystem_Source_CombatSystem_Public_Characters_CombatSystemPlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACombatSystemPlayerCharacter, ACombatSystemPlayerCharacter::StaticClass, TEXT("ACombatSystemPlayerCharacter"), &Z_Registration_Info_UClass_ACombatSystemPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACombatSystemPlayerCharacter), 985882647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Combat_CombatSystem_Source_CombatSystem_Public_Characters_CombatSystemPlayerCharacter_h_2388115246(TEXT("/Script/CombatSystem"),
		Z_CompiledInDeferFile_FID_RPG_Combat_CombatSystem_Source_CombatSystem_Public_Characters_CombatSystemPlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_Combat_CombatSystem_Source_CombatSystem_Public_Characters_CombatSystemPlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
