// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PTGCActor.generated.h"

class UPTGCObject;

/**
 * @Class FMyCustomClass
 * Montrer le fonctionement de la macro UPROPERTY
 * Principalement pour la GC
 */
class PROJETTUTO_API FMyCustomClass
{
	FMyCustomClass() = default;
	~FMyCustomClass() = default;
};

enum EMyRawEnum { EMRE_Max };

UENUM()
enum EMyEnum { EME_Max };

UENUM()
enum class EMyEnum2 : uint8 { EME2_Max };


UCLASS()
class PROJETTUTO_API APTGCActor : public AActor
{
	GENERATED_UCLASS_BODY()

	//--------------------------------- FUNCTION ---------------------------------//
	//--------------------------------- PUBLIC ---------------------------------//
public:
	/**
	 * Log tous les membres UPROPERTY de cette class
	 * Va aussi log les UPROPERTY hérité! (AActor)
	 */
	void LogUpropertyNames();
	
	//--------------------------------- GETTER - SETTER ---------------------------------//

	/**
	 * Le but, montrer que TObjectPtr marche comme un smart pointer TSharedPtr
	 * Même si ce membre n'est pas marqué comme UPROPERTY, si il est référencer la GC ne va pas le "Invalidate"
	 * @return l'objet TObjObject qui n'est pas UPROP
	 */
	UFUNCTION(BlueprintCallable, Category="PTGCActor")
	UPTGCObject* GetTObjObject() const { return TObjObject; }
	
	//--------------------------------- OVERRIDE ---------------------------------//
	//--------------------------------- PUBLIC ---------------------------------//
public:
	virtual void BeginPlay() override;
	
	//--------------------------------- MEMBERS ---------------------------------//
	//--------------------------------- PUBLIC ---------------------------------//
public:
	/**
	 * Simple float pour montrer le fonctionnement de Unreal Build Tool et Unreal Header Tool
	 */
	UPROPERTY()
	float MyFloat;

	/**
	 * Ce membre n'est pas connu de l'éditeur
	 */
	float MyFloatNotReflected;

	/**
	 * La GC va rendre se pointeur nullptr dès qu'il sera appelé
	 */
	UPTGCObject* RawObject;

	/**
	 * La GC va rendre se pointeur nullptr dès qu'il sera appelé
	 * MAIS si il est référencé par un autre objets il sera toujours valide!
	 */
	TObjectPtr<UPTGCObject> TObjObject;
	
	UPROPERTY()
	UPTGCObject* RawObjectUProp;

	UPROPERTY()
	TObjectPtr<UPTGCObject> TObjObjectUProp;

	/**
	 * seulement les class UCLASS qui hérite de UObject peuvent être Uprop
	 */
	//UPROPERTY()
	//FMyCustomClass* MyCustomClass;

	/**
	 * seulement les UENUM peuvent être Uprop
	 * TEnumAsByte<MyEnum> si pas de type definie
	 * MyEnum2 si un type est définie (i.e. enum class MyEnum2 : uint8)
	 */
	//UPROPERTY()
	//EMyRawEnum MyRawEnum;

	/**
	 * Enum classic
	 * moins recommandé en c++ moderne
	 */
	UPROPERTY()
	TEnumAsByte<EMyEnum> MyEnum;

	/**
	 * Solution préféré!
	 */
	UPROPERTY()
	EMyEnum2 MyEnum2;
};
