// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimInstances/CombatSystemBaseAnimInstance.h"
#include "CharacterAnimInstance.generated.h"

class UCharacterMovementComponent;
class ACombatSystemBaseCharacter;
/**
 * 
 */
UCLASS()
class COMBATSYSTEM_API UCharacterAnimInstance : public UCombatSystemBaseAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;

	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;

protected:

	UPROPERTY()
	ACombatSystemBaseCharacter* OwningCharacter;

	UPROPERTY()
	UCharacterMovementComponent* OwningMovementComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category="AnimData | LocomotionData")
	float GroundSpeed;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category="AnimData | LocomotionData")
	bool bHasAcceleration;
};
