// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Combat/PawnCombatComponent.h"
#include "PlayerCombatComponent.generated.h"

class ACombatPlayerWeapon;
/**
 * 
 */
UCLASS()
class COMBATSYSTEM_API UPlayerCombatComponent : public UPawnCombatComponent
{
	GENERATED_BODY()

	public:

	UFUNCTION(BlueprintCallable, Category="Combat")
	ACombatPlayerWeapon* GetPlayerCarriedWeaponByTag(FGameplayTag InWeaponTag) const;
};
