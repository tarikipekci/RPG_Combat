// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatSystemFunctionLibrary.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystem/CombatAbilitySystemComponent.h"

UCombatAbilitySystemComponent* UCombatSystemFunctionLibrary::NativeGetCombatASCFromActor(AActor* InActor)
{
	check(InActor);
	return CastChecked<UCombatAbilitySystemComponent>(
		UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(InActor));
}

void UCombatSystemFunctionLibrary::AddGameplayTagToActorIfNone(AActor* InActor, FGameplayTag TagToAdd)
{
	UCombatAbilitySystemComponent* ASC = NativeGetCombatASCFromActor(InActor);

	if (!ASC->HasMatchingGameplayTag(TagToAdd))
	{
		ASC->AddLooseGameplayTag(TagToAdd);
	}
}

void UCombatSystemFunctionLibrary::RemoveGameplayTagFromActorIfFound(AActor* InActor, FGameplayTag TagToRemove)
{
	UCombatAbilitySystemComponent* ASC = NativeGetCombatASCFromActor(InActor);

	if (ASC->HasMatchingGameplayTag(TagToRemove))
	{
		ASC->RemoveLooseGameplayTag(TagToRemove);
	}
}

bool UCombatSystemFunctionLibrary::NativeDoesActorHaveTag(AActor* InActor, FGameplayTag TagToCheck)
{
	UCombatAbilitySystemComponent* ASC = NativeGetCombatASCFromActor(InActor);
	
	return ASC->HasMatchingGameplayTag(TagToCheck);
}

void UCombatSystemFunctionLibrary::BP_DoesActorHaveTag(AActor* InActor, FGameplayTag TagToCheck,
	ECombatConfirmType& OutConfirmType)
{
	OutConfirmType = NativeDoesActorHaveTag(InActor, TagToCheck)? ECombatConfirmType::Yes : ECombatConfirmType::No;
}
