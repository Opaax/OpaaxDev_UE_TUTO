// Enguerran COBERT Alias Opaax Dev, All Right Reserved

#include "UPROPERTY/PTGCActor.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "UPROPERTY/PTGCObject.h"

APTGCActor::APTGCActor(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer),
	MyEnum(EME_Max),
	MyEnum2(EMyEnum2::EME2_Max)
{
	PrimaryActorTick.bCanEverTick = false;

	LogUpropertyNames();
}

void APTGCActor::LogUpropertyNames()
{
	for (TFieldIterator<FProperty> lPropIt(GetClass()); lPropIt; ++lPropIt)
	{
		FProperty* lProp = *lPropIt;

		FString lValueStr;
		lProp->ExportText_InContainer(0, lValueStr, this, this, this, PPF_None);

		PT_WARNING(TEXT("Tuto Uproperty: %s: Property of type %s: %s, %s"), TEXT(__FUNCTION__), *lProp->GetClass()->GetName(), *lProp->GetName(), *lValueStr);
	}
}

void APTGCActor::BeginPlay()
{
	Super::BeginPlay();

	//Créer les objects pour montrer la collect de la GC.
	RawObject			= NewObject<UPTGCObject>(this, UPTGCObject::StaticClass(), FName(TEXT("APTGCActor_RawObject")));
	TObjObject			= NewObject<UPTGCObject>(this,UPTGCObject::StaticClass(), FName(TEXT("APTGCActor_TObjObject")));
	RawObjectUProp		= NewObject<UPTGCObject>(this,UPTGCObject::StaticClass(), FName(TEXT("APTGCActor_RawObjectUProp")));
	TObjObjectUProp		= NewObject<UPTGCObject>(this,UPTGCObject::StaticClass(), FName(TEXT("APTGCActor_TObjObjectUProp")));

	//Demo GC via timer, toute les 5 secondes, forcer l'appel de la collecte!
	FTimerHandle lHandle;
	FTimerDelegate lDel;
	lDel.BindLambda([&]()
	{
		PT_WARNING(TEXT("Pre Collect Garbage called: %s"), *GetNameSafe(this))
		CollectGarbage(GARBAGE_COLLECTION_KEEPFLAGS);
	});
	
	GetWorld()->GetTimerManager().SetTimer(lHandle, lDel, 5, true);
}
