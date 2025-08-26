// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjetTuto/Public/UPROPERTY/PTGCObject.h"

UPTGCObject::UPTGCObject(const FObjectInitializer& ObjectInitializer):Super(ObjectInitializer)
{
	PT_WARNING(TEXT("%s, Created"), *GetNameSafe(this))
}

void UPTGCObject::BeginDestroy()
{
	PT_WARNING(TEXT("%s, %s"), *GetNameSafe(this), TEXT(__FUNCTION__))
	
	UObject::BeginDestroy();
}
