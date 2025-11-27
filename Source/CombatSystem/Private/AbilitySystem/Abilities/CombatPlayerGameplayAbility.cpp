// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/CombatPlayerGameplayAbility.h"

#include "Characters/CombatSystemPlayerCharacter.h"
#include "Controllers/CombatSystemPlayerController.h"

ACombatSystemPlayerCharacter* UCombatPlayerGameplayAbility::GetPlayerCharacterFromActorInfo()
{
	if (!CachedPlayerCharacter.IsValid())
	{
		CachedPlayerCharacter = Cast<ACombatSystemPlayerCharacter>(CurrentActorInfo->AvatarActor);
	}

	return CachedPlayerCharacter.IsValid() ? CachedPlayerCharacter.Get() : nullptr;
}

ACombatSystemPlayerController* UCombatPlayerGameplayAbility::GetPlayerControllerFromActorInfo()
{
	if (!CachedPlayerController.IsValid())
	{
		CachedPlayerController = Cast<ACombatSystemPlayerController>(CurrentActorInfo->PlayerController);
	}

	return CachedPlayerController.IsValid() ? CachedPlayerController.Get() : nullptr;
}

UPlayerCombatComponent* UCombatPlayerGameplayAbility::GetPlayerCombatComponentFromActorInfo()
{
	return GetPlayerCharacterFromActorInfo()->GetPlayerCombatComponent();
}
