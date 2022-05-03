// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveAcuatica.h"
#include "MyNaveAcuatica.generated.h"

/**
 * 
 */
UCLASS()
class SIS457LAB03_API AMyNaveAcuatica : public ANaveAcuatica
{
	GENERATED_BODY()
		void Tick(float DeltaSeconds);
public:
	float MovementX;
	float MovementY;
	
};
