// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
#include "AbilitySystem/CombatAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/CombatGameplayAbility.h"

void UDataAsset_StartUpDataBase::GiveToAbilitySystemComponent(UCombatAbilitySystemComponent* InCombatAscToGive,
                                                              int32 ApplyLevel)
{
	check(InCombatAscToGive);

	GrantAbilities(ActivateOnGivenAbilities, InCombatAscToGive, ApplyLevel);
	GrantAbilities(ReactiveAbilities, InCombatAscToGive, ApplyLevel);
}

void UDataAsset_StartUpDataBase::GrantAbilities(const TArray<TSubclassOf<UCombatGameplayAbility>>& InAbilitiesToGive,
                                                UCombatAbilitySystemComponent* InCombatAscToGive, int32 ApplyLevel)
{
	if (InAbilitiesToGive.IsEmpty())
	{
		return;
	}

	for (const TSubclassOf<UCombatGameplayAbility>& Ability : InAbilitiesToGive)
	{
		if (!Ability) continue;

		FGameplayAbilitySpec AbilitySpec(Ability);
		AbilitySpec.SourceObject = InCombatAscToGive->GetAvatarActor();
		AbilitySpec.Level = ApplyLevel;
		InCombatAscToGive->GiveAbility(AbilitySpec);
	}
}
