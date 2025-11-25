// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "CombatSystemBaseCharacter.generated.h"

class UDataAsset_StartUpDataBase;
class UCombatAttributeSet;
class UCombatAbilitySystemComponent;

UCLASS()
class COMBATSYSTEM_API ACombatSystemBaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACombatSystemBaseCharacter();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

protected:
	virtual void PossessedBy(AController* NewController) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AbilitySystem")
	UCombatAbilitySystemComponent* CombatAbilitySystemComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AbilitySystem")
	UCombatAttributeSet* CombatAttributeSet;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="CharacterData")
	TSoftObjectPtr<UDataAsset_StartUpDataBase> CharacterStartUpData;

public:
	FORCEINLINE UCombatAbilitySystemComponent* GetCombatAbilitySystemComp() const { return CombatAbilitySystemComp; }

	FORCEINLINE UCombatAttributeSet* GetCombatAttributeSet() const { return CombatAttributeSet; }
};
