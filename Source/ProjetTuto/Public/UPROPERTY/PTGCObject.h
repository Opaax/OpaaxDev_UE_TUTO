// Enguerran COBERT Alias Opaax Dev, All Right Reserved

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
