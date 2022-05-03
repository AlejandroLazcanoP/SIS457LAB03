// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveAerea.h"
#include "NaveAereaEnemigo02.generated.h"

/**
 * 
 */
UCLASS()
class SIS457LAB03_API ANaveAereaEnemigo02 : public ANaveAerea
{
	GENERATED_BODY()

		void Tick(float DeltaSeconds);
public:
	float MovementX;
	float MovementY;
	
};
