// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatSystemDebugHelper.h"
#include "Characters/CombatSystemBaseCharacter.h"
#include "CombatSystemPlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class COMBATSYSTEM_API ACombatSystemPlayerCharacter : public ACombatSystemBaseCharacter
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;
};
