// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"
#include "Engine/GameEngine.h" 
#include "GameFramework/CharacterMovementComponent.h"
	

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

/*void MomementVelocityChange(UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "type: 0 - idle, 1 - walk, 2 - run;?")) int moveType)
{

}
*/


void ABaseCharacter::VelocityChange (int x)
{
	//UE_LOG(LogTemp, Warning, TEXT("Some warning message"), x);
	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Some variable values: x: %x"), x));
	float test = GetCharacterMovement()->MaxWalkSpeed;
	switch (x)
	{
	case 1: 
		GetCharacterMovement()->MaxWalkSpeed = 200;

	case 2: 
		GetCharacterMovement()->MaxWalkSpeed = 650;

	case 3:
		GetCharacterMovement()->MaxWalkSpeed = 800;
	}
	

	//UCharacterMovementComponent test = GetOwner()->FindComponentByClass<UActorComponent>();
	//GetCharacterMovement->SetMaxAccelaration 
}

