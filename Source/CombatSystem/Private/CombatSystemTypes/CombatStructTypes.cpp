// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatSystemTypes/CombatStructTypes.h"

#include "AbilitySystem/Abilities/CombatGameplayAbility.h"

bool FCombatPlayerAbilitySet::IsValid() const
{
	return InputTag.IsValid() && AbilityToGrant;
}
