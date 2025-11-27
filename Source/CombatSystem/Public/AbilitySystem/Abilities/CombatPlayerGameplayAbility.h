// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/CombatGameplayAbility.h"
#include "CombatPlayerGameplayAbility.generated.h"

class UPlayerCombatComponent;
class ACombatSystemPlayerController;
class ACombatSystemPlayerCharacter;
/**
 * 
 */
UCLASS()
class COMBATSYSTEM_API UCombatPlayerGameplayAbility : public UCombatGameplayAbility
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category="CombatAbility")
	ACombatSystemPlayerCharacter* GetPlayerCharacterFromActorInfo();

	UFUNCTION(BlueprintPure, Category="CombatAbility")
	ACombatSystemPlayerController* GetPlayerControllerFromActorInfo();

	UFUNCTION(BlueprintPure, Category="CombatAbility")
	UPlayerCombatComponent* GetPlayerCombatComponentFromActorInfo();

private:
	TWeakObjectPtr<ACombatSystemPlayerCharacter> CachedPlayerCharacter;
	TWeakObjectPtr<ACombatSystemPlayerController> CachedPlayerController;
};
