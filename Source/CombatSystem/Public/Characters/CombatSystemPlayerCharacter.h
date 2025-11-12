// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatSystemDebugHelper.h"
#include "Characters/CombatSystemBaseCharacter.h"
#include "CombatSystemPlayerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
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
	virtual void BeginPlay() override;

private:
#pragma region Components

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Camera", meta=(AllowPrivateAccess="true"))
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Camera", meta=(AllowPrivateAccess="true"))
	UCameraComponent* FollowCamera;
#pragma endregion
};
