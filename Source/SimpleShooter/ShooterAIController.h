// Copyright 2022 Jeremy Speer All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ShooterAIController.generated.h"

class UBehaviorTree;

UCLASS()
class SIMPLESHOOTER_API AShooterAIController : public AAIController
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	AShooterAIController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	bool IsDead() const;

private:
	UPROPERTY(EditAnywhere)
	UBehaviorTree* AIBehaviorTree;

	APawn* PlayerPawn;
	APawn* AIPawn;
};
