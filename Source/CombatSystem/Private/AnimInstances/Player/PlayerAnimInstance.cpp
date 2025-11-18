// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstances/Player/PlayerAnimInstance.h"

#include "Characters/CombatSystemPlayerCharacter.h"

void UPlayerAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	if (OwningCharacter)
	{
		OwningPlayerCharacter = Cast<ACombatSystemPlayerCharacter>(OwningCharacter);
	}
}

void UPlayerAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);

	if (bHasAcceleration)
	{
		IdleElapsedTime = 0.f;
		bShouldEnterRelaxState = false;
	}
	else
	{
		IdleElapsedTime += DeltaSeconds;
		bShouldEnterRelaxState = IdleElapsedTime >= EnterRelaxStateThreshold;
	}
}
