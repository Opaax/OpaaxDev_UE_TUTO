// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PTGCObject.generated.h"

/**
 * 
 */
UCLASS()
class PROJETTUTO_API UPTGCObject : public UObject
{
	GENERATED_UCLASS_BODY()
	
	//--------------------------------- OVERRIDE ---------------------------------//
	//--------------------------------- PUBLIC ---------------------------------//
public:
	virtual void BeginDestroy() override;
};
