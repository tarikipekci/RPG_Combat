// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatSystemTypes/CombatStructTypes.h"
#include "DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
#include "DataAsset_PlayerStartUpData.generated.h"


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
