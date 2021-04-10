// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

UCLASS()
class DONTSTOPME_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()


public:
	UFUNCTION (BlueprintCallable,  meta = (Tooltip = "Type is 0 as idle, 1 as walk, 2 as run slowly, 3 as run"))
	void VelocityChange(int type);

	

public:
	// Sets default values for this character's properties
	ABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	

};
