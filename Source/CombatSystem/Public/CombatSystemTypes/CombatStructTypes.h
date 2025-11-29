// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CombatStructTypes.generated.h"

class UPlayerLinkedAnimLayer;

USTRUCT(BlueprintType)
struct FCombatPlayerWeaponData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UPlayerLinkedAnimLayer> WeaponAnimLayerToLink;
};