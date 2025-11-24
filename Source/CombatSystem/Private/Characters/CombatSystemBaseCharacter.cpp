// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/CombatSystemBaseCharacter.h"

#include "AbilitySystem/CombatAbilitySystemComponent.h"
#include "AbilitySystem/CombatAttributeSet.h"

// Sets default values
ACombatSystemBaseCharacter::ACombatSystemBaseCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	GetMesh()->bReceivesDecals = false;
	CombatAbilitySystemComp = CreateDefaultSubobject<UCombatAbilitySystemComponent>(
		TEXT("CombatAbilitySystemComponent"));

	CombatAttributeSet = CreateDefaultSubobject<UCombatAttributeSet>(TEXT("CombatAttributeSet"));
}

UAbilitySystemComponent* ACombatSystemBaseCharacter::GetAbilitySystemComponent() const
{
	return GetAbilitySystemComponent();
}

void ACombatSystemBaseCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (CombatAbilitySystemComp)
	{
		CombatAbilitySystemComp->InitAbilityActorInfo(this, this);
	}
}
