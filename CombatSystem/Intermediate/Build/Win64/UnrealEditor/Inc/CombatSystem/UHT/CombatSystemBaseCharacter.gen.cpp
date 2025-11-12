// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Characters/CombatSystemBaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatSystemBaseCharacter() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACombatSystemBaseCharacter();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACombatSystemBaseCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
// End Cross Module References
	void ACombatSystemBaseCharacter::StaticRegisterNativesACombatSystemBaseCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACombatSystemBaseCharacter);
	UClass* Z_Construct_UClass_ACombatSystemBaseCharacter_NoRegister()
	{
		return ACombatSystemBaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACombatSystemBaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACombatSystemBaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatSystemBaseCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatSystemBaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/CombatSystemBaseCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/CombatSystemBaseCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACombatSystemBaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACombatSystemBaseCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACombatSystemBaseCharacter_Statics::ClassParams = {
		&ACombatSystemBaseCharacter::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatSystemBaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACombatSystemBaseCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACombatSystemBaseCharacter()
	{
		if (!Z_Registration_Info_UClass_ACombatSystemBaseCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACombatSystemBaseCharacter.OuterSingleton, Z_Construct_UClass_ACombatSystemBaseCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACombatSystemBaseCharacter.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UClass* StaticClass<ACombatSystemBaseCharacter>()
	{
		return ACombatSystemBaseCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACombatSystemBaseCharacter);
	ACombatSystemBaseCharacter::~ACombatSystemBaseCharacter() {}
	struct Z_CompiledInDeferFile_FID_RPG_Combat_CombatSystem_Source_CombatSystem_Public_Characters_CombatSystemBaseCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Combat_CombatSystem_Source_CombatSystem_Public_Characters_CombatSystemBaseCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACombatSystemBaseCharacter, ACombatSystemBaseCharacter::StaticClass, TEXT("ACombatSystemBaseCharacter"), &Z_Registration_Info_UClass_ACombatSystemBaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACombatSystemBaseCharacter), 3692462411U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Combat_CombatSystem_Source_CombatSystem_Public_Characters_CombatSystemBaseCharacter_h_1039836323(TEXT("/Script/CombatSystem"),
		Z_CompiledInDeferFile_FID_RPG_Combat_CombatSystem_Source_CombatSystem_Public_Characters_CombatSystemBaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_Combat_CombatSystem_Source_CombatSystem_Public_Characters_CombatSystemBaseCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
