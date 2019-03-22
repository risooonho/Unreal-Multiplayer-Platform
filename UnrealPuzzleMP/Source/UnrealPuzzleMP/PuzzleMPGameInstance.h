// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PuzzleMPGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class UNREALPUZZLEMP_API UPuzzleMPGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UPuzzleMPGameInstance(const FObjectInitializer & ObjectInitializer);

	virtual void Init();
};