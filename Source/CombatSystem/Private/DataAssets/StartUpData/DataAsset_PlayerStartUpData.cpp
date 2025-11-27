// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/StartUpData/DataAsset_PlayerStartUpData.h"

#include "AbilitySystem/CombatAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/CombatGameplayAbility.h"

bool FCombatPlayerAbilitySet::IsValid() const
{
	return InputTag.IsValid() && AbilityToGrant;
}

void UDataAsset_PlayerStartUpData::GiveToAbilitySystemComponent(UCombatAbilitySystemComponent* InCombatAscToGive,
	int32 ApplyLevel)
{
	Super::GiveToAbilitySystemComponent(InCombatAscToGive, ApplyLevel);

	for (const FCombatPlayerAbilitySet& AbilitySet : PlayerStartUpAbilitySets)
	{
		if (!AbilitySet.IsValid()) continue;
			
		FGameplayAbilitySpec AbilitySpec(AbilitySet.AbilityToGrant);
		AbilitySpec.SourceObject = InCombatAscToGive->GetAvatarActor();
		AbilitySpec.Level = ApplyLevel;
		AbilitySpec.DynamicAbilityTags.AddTag(AbilitySet.InputTag);
		
		InCombatAscToGive->GiveAbility(AbilitySpec);
	}
}
