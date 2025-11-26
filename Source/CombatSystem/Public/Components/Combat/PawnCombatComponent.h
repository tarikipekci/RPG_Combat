// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/PawnExtensionComponentBase.h"
#include "PawnCombatComponent.generated.h"

class ACombatWeaponBase;
/**
 * 
 */
UCLASS()
class COMBATSYSTEM_API UPawnCombatComponent : public UPawnExtensionComponentBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="Combat")
	void RegisterSpawnedWeapon(FGameplayTag InWeaponTagToRegister, ACombatWeaponBase* InWeaponToRegister, bool bRegisterAsEquippedWeapon = false);

	UFUNCTION(BlueprintCallable, Category="Combat")
	ACombatWeaponBase* GetCharacterCarriedWeaponByTag(FGameplayTag InWeaponTagToGet) const;

	UPROPERTY(BlueprintReadWrite, Category="Combat")
	FGameplayTag CurrentEquippedWeaponTag;

	UFUNCTION(BlueprintCallable, Category="Combat")
	ACombatWeaponBase* GetCharacterCurrentEquippedWeapon() const;
	
private:
	TMap<FGameplayTag, ACombatWeaponBase*> CharacterCarriedWeaponMap;
};
