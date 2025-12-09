// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CombatSystemFunctionLibrary.generated.h"

class UCombatAbilitySystemComponent;

UENUM()
enum class ECombatConfirmType : uint8
{
	Yes,
	No
};

/**
 * 
 */
UCLASS()
class COMBATSYSTEM_API UCombatSystemFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	static UCombatAbilitySystemComponent* NativeGetCombatASCFromActor(AActor* InActor);

	UFUNCTION(BlueprintCallable, Category= "Combat|FunctionLibrary")
	static void AddGameplayTagToActorIfNone(AActor* InActor, FGameplayTag TagToAdd);

	UFUNCTION(BlueprintCallable, Category= "Combat|FunctionLibrary")
	static void RemoveGameplayTagFromActorIfFound(AActor* InActor, FGameplayTag TagToRemove);

	static bool NativeDoesActorHaveTag(AActor* InActor, FGameplayTag TagToCheck);

	UFUNCTION(BlueprintCallable, Category= "Combat|FunctionLibrary", meta = (DisplayName = "Does Actor Have Tag", ExpandEnumAsExecs = "OutConfirmType"))
	static void BP_DoesActorHaveTag(AActor* InActor, FGameplayTag TagToCheck, ECombatConfirmType& OutConfirmType);
};
