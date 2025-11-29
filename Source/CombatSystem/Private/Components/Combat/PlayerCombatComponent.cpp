// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/Combat/PlayerCombatComponent.h"

#include "Items/Weapons/CombatPlayerWeapon.h"

ACombatPlayerWeapon* UPlayerCombatComponent::GetPlayerCarriedWeaponByTag(FGameplayTag InWeaponTag) const
{
	return Cast<ACombatPlayerWeapon>(GetCharacterCarriedWeaponByTag(InWeaponTag));
}
