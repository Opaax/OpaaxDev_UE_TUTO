// Fill out your copyright notice in the Description page of Project Settings.

#include "UPROPERTY/PTGCActorReferencer.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "UPROPERTY/PTGCActor.h"
#include "UPROPERTY/PTGCObject.h"

APTGCActorReferencer::APTGCActorReferencer()
{
	PrimaryActorTick.bCanEverTick = false;
}

void APTGCActorReferencer::TryUseTOjtPtr()
{
	PT_WARNING(TEXT("je veux log le nom de ma ref; Nom: %s"), *TObjReferenced->GetName());
	SetTObjReferenced(nullptr);
}

void APTGCActorReferencer::BeginPlay()
{
	Super::BeginPlay();

	check(PTGCActorRef);

	SetTObjReferenced(PTGCActorRef->GetTObjObject());

	//Demo GC via timer, au bout de 7 sec, set la ref to nullptr!
	FTimerHandle lHandle;
	FTimerDelegate lDel;
	lDel.BindLambda([&]()
	{
		PT_WARNING(TEXT("Ma ref est encore valide?: %s"), IsValid(TObjReferenced) ? *FString(TEXT("OUI")): *FString(TEXT("NON")));

		FString lFlags = LexToString(TObjReferenced->GetFlags());

		PT_WARNING(TEXT("Ma Refs Flags: %s"), *lFlags);
		
		EnableInput(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	});
	
	GetWorld()->GetTimerManager().SetTimer(lHandle, lDel, 7, false);
}
