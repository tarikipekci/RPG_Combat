// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Characters/CombatSystemBaseCharacter.h"
#include "CombatSystemPlayerCharacter.generated.h"

class UDataAsset_InputConfig;
class USpringArmComponent;
class UCameraComponent;
class UPlayerCombatComponent;
struct FInputActionValue;
/**
 * 
 */
UCLASS()
class COMBATSYSTEM_API ACombatSystemPlayerCharacter : public ACombatSystemBaseCharacter
{
	GENERATED_BODY()

public:
	ACombatSystemPlayerCharacter();

protected:
	virtual void PossessedBy(AController* NewController) override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	virtual void BeginPlay() override;

private:
#pragma region Components

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Camera", meta=(AllowPrivateAccess="true"))
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Camera", meta=(AllowPrivateAccess="true"))
	UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Combat", meta=(AllowPrivateAccess="true"))
	UPlayerCombatComponent* PlayerCombatComp;
#pragma endregion

#pragma region Inputs

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="CharacterData", meta=(AllowPrivateAccess="true"))
	UDataAsset_InputConfig* InputConfigDataAsset;

	void Input_Move(const FInputActionValue& InputActionValue);
	void Input_Look(const FInputActionValue& InputActionValue);

	void Input_AbilityInputPressed(FGameplayTag InInputTag);
	void Input_AbilityInputReleased(FGameplayTag InInputTag);
#pragma endregion

public:

	FORCEINLINE UPlayerCombatComponent* GetPlayerCombatComponent() const {return PlayerCombatComp;}
};
