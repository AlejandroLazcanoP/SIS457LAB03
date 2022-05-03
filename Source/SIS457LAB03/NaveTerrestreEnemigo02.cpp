// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveTerrestreEnemigo02.h"
#include "time.h"

void ANaveTerrestreEnemigo02::Tick(float DeltaSeconds)
{
	srand(time(NULL));

	MovementX = rand() % 12 - 8;
	MovementY = rand() % 12 - 8;

	MoveSpeed = 12;


	const FVector MoveDirection = FVector(0.0f, MovementY, 0.0f);
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();

		FHitResult Hit(1.0f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
	}
}
