// Enguerran COBERT Alias Opaax Dev, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PTGCActor.generated.h"

class UPTGCObject;

/**
 * @class FMyCustomClass
 * 
 * Exemple pour montrer le fonctionnement de la macro UPROPERTY.
 * Ne fonctionne pas car ce n’est pas une UCLASS et n’hérite pas de UObject.
 */
class PROJETTUTO_API FMyCustomClass
{
	FMyCustomClass() = default;
	~FMyCustomClass() = default;
};

UCLASS()
class UMyClass : public UObject
{
	GENERATED_BODY()
};

USTRUCT()
struct FMyStruct
{
	GENERATED_BODY()
};

enum EMyRawEnum { EMRE_Max };

UENUM()
enum EMyEnum { EME_Max };

UENUM()
enum class EMyEnum2 : uint8 { EME2_Max };


/**
 * Types que UHT peut interpréter :
 *
 * Classes Unreal :
 * - FString
 * - FVector
 * - FName, etc.
 *
 * Containers Unreal :
 * - TArray
 * - TMap
 * - TSet, etc.
 *
 * Types primitifs :
 * - uint8, uint16, uint32...
 * - int8, int16, int32...
 * - float
 * - double
 * - bool
 *
 * Structs avec la balise USTRUCT
 * ex : @FMyStruct
 *
 * Classes avec la balise UCLASS et héritant au minimum de UObject
 * ex : @UMyClass
 *
 * Enums avec la balise UENUM
 * ex : @EMyEnum (non recommandé et nécessite TEnumAsByte<EMyEnum>)
 * ex : @EMyEnum2 (enum typé, ici en uint8)
 *
 * Les classes standards C++ ne sont pas recommandées pour du code Runtime.
 * En revanche, si le code est uniquement destiné à l’éditeur, elles peuvent être utilisées.
 */
UCLASS()
class PROJETTUTO_API APTGCActor : public AActor
{
	GENERATED_UCLASS_BODY()

	//--------------------------------- FUNCTION ---------------------------------//
	//--------------------------------- PUBLIC ---------------------------------//
public:
	/**
	 * Log tous les membres UPROPERTY de cette classe.
	 * Va aussi loguer les UPROPERTY hérités (comme ceux d’AActor).
	 */
	void LogUpropertyNames();
	
	//--------------------------------- GETTER - SETTER ---------------------------------//

	/**
	 * But : montrer que TObjectPtr fonctionne comme un smart pointer (ex : TSharedPtr).
	 * Même si ce membre n’est pas marqué comme UPROPERTY, s’il est référencé,
	 * le GC ne va pas l’invalider.
	 * 
	 * @return l’objet TObjObject qui n’est pas marqué UPROPERTY.
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
	 * Simple float pour illustrer le fonctionnement de l’Unreal Build Tool et de l’Unreal Header Tool.
	 */
	UPROPERTY(BlueprintReadWrite, meta=(UIMax = 15))
	float MyFloat{10};
	

	/**
	 * Ce membre n’est pas exposé à l’éditeur.
	 */
	float MyFloatNotReflected{0};

	/**
	 * Le GC détruira l’objet pointé par ce pointeur brut dès qu’il ne sera plus référencé.
	 */
	UPTGCObject* RawObject{nullptr};

	/**
	 * Le GC détruira l’objet pointé par ce TObjectPtr
	 * SAUF s’il est référencé par une autre propriété UObject (FObjectProperty).
	 */
	TObjectPtr<UPTGCObject> TObjObject;
	
	UPROPERTY()
	UPTGCObject* RawObjectUProp{nullptr};

	UPROPERTY()
	TObjectPtr<UPTGCObject> TObjObjectUProp;
	

	/**
	 * Seules les classes marquées UCLASS et héritant de UObject peuvent être des UPROPERTY.
	 */
	//UPROPERTY()
	//FMyCustomClass* MyCustomClass;

	/**
	 * Seules les UENUM peuvent être des UPROPERTY.
	 * Utiliser TEnumAsByte<MyEnum> si aucun type n’est défini.
	 * Utiliser directement MyEnum2 si un type est défini (i.e. enum class MyEnum2 : uint8).
	 */
	//UPROPERTY()
	//EMyRawEnum MyRawEnum;

	/**
	 * Enum classique.
	 * Moins recommandé en C++ moderne.
	 */
	UPROPERTY()
	TEnumAsByte<EMyEnum> MyEnum;

	/**
	 * Solution préférée !
	 */
	UPROPERTY()
	EMyEnum2 MyEnum2;
};