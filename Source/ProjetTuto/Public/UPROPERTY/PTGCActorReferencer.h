// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PTGCActorReferencer.generated.h"

class APTGCActor;
class UPTGCObject;

UCLASS()
class PROJETTUTO_API APTGCActorReferencer : public AActor
{
	GENERATED_BODY()

	//--------------------------------- CTOR - DTOR ---------------------------------//
public:
	APTGCActorReferencer();

	//--------------------------------- FUNCTION ---------------------------------//
	//--------------------------------- PUBLIC ---------------------------------//
public:
	/***/
	UFUNCTION(BlueprintCallable, Category="PTGCActorReferencer")
	void SetTObjReferenced(UPTGCObject* ToRef) { TObjReferenced = ToRef; }

	/***/
	UFUNCTION(BlueprintCallable, Category="PTGCActorReferencer")
	void TryUseTOjtPtr();
	
	//--------------------------------- OVERRIDE ---------------------------------//
	//--------------------------------- PUBLIC ---------------------------------//
public:
	virtual void BeginPlay() override;
	
	//--------------------------------- MEMBERS ---------------------------------//
	//--------------------------------- PUBLIC ---------------------------------//
public:
	TObjectPtr<UPTGCObject> TObjReferenced = nullptr;

	UPROPERTY(EditInstanceOnly, Category="Refs")
	TObjectPtr<APTGCActor> PTGCActorRef;
};
