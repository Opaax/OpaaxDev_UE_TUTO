// Enguerran COBERT Alias Opaax Dev, All Right Reserved 

#include "UPROPERTY/Specifier/BPGetSet_GetSet/PTUPROPSpecifier_BPGetSet_GetSet.h"
#include "Kismet/GameplayStatics.h"
#include UE_INLINE_GENERATED_CPP_BY_NAME(PTUPROPSpecifier_BPGetSet_GetSet)

APTUPROPSpecifier_BPGetSet_GetSet::APTUPROPSpecifier_BPGetSet_GetSet(const FObjectInitializer& ObjectInitializer):Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = false;
}

FString APTUPROPSpecifier_BPGetSet_GetSet::GetMyString_BPGetter() const
{
	PT_LOG(TEXT("%s: FROM CPP"), TEXT(__FUNCTION__));
	return MyString_BPGetter;
}

void APTUPROPSpecifier_BPGetSet_GetSet::SetMyString_BPSetter(const FString& NewString)
{
	PT_LOG(TEXT("%s: FROM CPP"), TEXT(__FUNCTION__));
	MyString_BPSetter =  NewString;
}

FString APTUPROPSpecifier_BPGetSet_GetSet::GetMyString_BPGetterSetter() const
{
	PT_LOG(TEXT("%s: FROM CPP"), TEXT(__FUNCTION__));
	return MyString_BPGetterSetter;
}

void APTUPROPSpecifier_BPGetSet_GetSet::SetMyString_BPGetterSetter(const FString& NewString)
{
	PT_LOG(TEXT("%s: FROM CPP"), TEXT(__FUNCTION__));
	MyString_BPGetterSetter =  NewString;
}

FString APTUPROPSpecifier_BPGetSet_GetSet::GetMyString_ReadWrite_GetSet() const
{
	PT_LOG(TEXT("%s: FROM CPP"), TEXT(__FUNCTION__));
	return MyString_ReadWrite_GetSet;
}

void APTUPROPSpecifier_BPGetSet_GetSet::SetMyString_ReadWrite_GetSet(const FString& NewString)
{
	PT_LOG(TEXT("%s: FROM CPP"), TEXT(__FUNCTION__));
	MyString_ReadWrite_GetSet =  NewString;
}

FString APTUPROPSpecifier_BPGetSet_GetSet::GetMyString_GetSet() const
{
	PT_LOG(TEXT("%s: FROM CPP"), TEXT(__FUNCTION__));
	return MyString_GetSet;
}


void APTUPROPSpecifier_BPGetSet_GetSet::BeginPlay()
{
	Super::BeginPlay();

	EnableInput(UGameplayStatics::GetPlayerController(this, 0));
}
