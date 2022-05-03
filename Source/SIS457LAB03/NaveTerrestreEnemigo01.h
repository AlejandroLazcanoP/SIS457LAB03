// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveTerrestre.h"
#include "NaveTerrestreEnemigo01.generated.h"

/**
 * 
 */
UCLASS()
class SIS457LAB03_API ANaveTerrestreEnemigo01 : public ANaveTerrestre
{
	GENERATED_BODY()
		void Tick(float DeltaSeconds);
public:
	float MovementX;
	float MovementY;
	
};
