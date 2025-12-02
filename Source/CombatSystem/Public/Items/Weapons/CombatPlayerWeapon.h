// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatSystemTypes/CombatStructTypes.h"
#include "Items/Weapons/CombatWeaponBase.h"
#include "AbilitySystemComponent.h"
#include "CombatPlayerWeapon.generated.h"

/**
 * 
 */
UCLASS()
class COMBATSYSTEM_API ACombatPlayerWeapon : public ACombatWeaponBase
{
	GENERATED_BODY()

	public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="WeaponData")
	FCombatPlayerWeaponData PlayerWeaponData;
	
	UFUNCTION(BlueprintCallable)
	void AssignGrantedAbilitySpecHandles(const TArray<FGameplayAbilitySpecHandle>& InSpecHandles);
	
	UFUNCTION(BlueprintPure)
	TArray<FGameplayAbilitySpecHandle> GetGrantedAbilitySpecHandles() const;
	
private:
	TArray<FGameplayAbilitySpecHandle> GrantedAbilitySpecHandles;
};
