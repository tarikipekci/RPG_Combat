// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
#include "DataAsset_PlayerStartUpData.generated.h"

USTRUCT(BlueprintType)
struct FCombatPlayerAbilitySet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(Categories = "InputTag"))
	FGameplayTag InputTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UCombatGameplayAbility> AbilityToGrant;

	bool IsValid() const;
};
/**
 * 
 */
UCLASS()
class COMBATSYSTEM_API UDataAsset_PlayerStartUpData : public UDataAsset_StartUpDataBase
{
	GENERATED_BODY()

public:
	virtual void GiveToAbilitySystemComponent(UCombatAbilitySystemComponent* InCombatAscToGive, int32 ApplyLevel = 1) override;

private:
	UPROPERTY(EditDefaultsOnly, Category="StartUpData", meta=(TitleProperty = "InputTag"))
	TArray<FCombatPlayerAbilitySet> PlayerStartUpAbilitySets;
};
