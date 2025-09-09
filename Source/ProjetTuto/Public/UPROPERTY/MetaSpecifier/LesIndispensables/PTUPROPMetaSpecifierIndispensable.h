// Enguerran COBERT Alias Opaax Dev, All Right reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PTUPROPMetaSpecifierIndispensable.generated.h"

/**
 * @class APTUPROPMetaSpecifierIndispensable
 *
 * Pour Rappel:
 * /!\ les meta specifier sont accessible en mode Editor /!\
 * @https://dev.epicgames.com/documentation/en-us/unreal-engine/unreal-engine-uproperties#metadataspecifiers
 *
 * Dans la macro UPROPERTY mais aussi UFUNCTION UCLASS ....
 * les meta specifier se construise de cette manière:
 * UPROPERTY(meta = (.... meta specifier ....))
 */
UCLASS()
class PROJETTUTO_API APTUPROPMetaSpecifierIndispensable : public AActor
{
	GENERATED_UCLASS_BODY()
	//--------------------------------- MEMBERS ---------------------------------//
	//--------------------------------- PROTECTED ---------------------------------//
	//--------------------------------- RAPPEL ---------------------------------//
protected:
	/**
 	 * Par défaut, les specifiers BlueprintReadWrite / BlueprintReadOnly 
 	 * ne peuvent être appliqués qu’aux membres Protected ou Public.
 	 *
 	 * Cela va à l’encontre des bonnes pratiques que j’essaie de suivre :
 	 * - Préférer des membres Private avec des Getter et Setter.
 	 *
 	 * Le meta specifier `AllowPrivateAccess` permet de corriger ce problème,
 	 * en autorisant l’exposition de membres Private aux Blueprints.
 	 */
	UPROPERTY(BlueprintReadWrite, Category="Rappel", meta=(AllowPrivateAccess="true"))
	float MyFloatRappel = 10.f;

	//--------------------------------- PRIVATE ---------------------------------//
private:
	//--------------------------------- AllowPrivateAccess ---------------------------------//
	/**
 	 * AllowPrivateAccess permet de 'forcer' un membre private/protected à être exposé
 	 * dans l'éditeur et en Blueprint via le système de réflexion d'Unreal.
 	 *
 	 * Nécessite une valeur de type bool
 	 * - Peut être écrit en string "true"
 	 *
 	 * Utile quand on veut garder l'encapsulation C++ (membre en private),
 	 *    tout en autorisant l'accès côté moteur/Blueprint.
 	 *
 	 * À noter :
 	 * - Rend possible l'usage de specifiers normalement incompatibles avec private 
 	 *   (ex: BlueprintReadWrite, BlueprintReadOnly).
 	 * - Alternative rapide pour la facilité d’utilisation.
 	 * - Bonne pratique : préférer BlueprintGetter / BlueprintSetter pour garder 
 	 *   un vrai contrôle côté C++.
 	 */
	UPROPERTY(BlueprintReadWrite, Category="MetaSpecifier", meta=(AllowPrivateAccess = "true"))
	FString MyStringPrivateAccessible = TEXT("MyStringPrivateAccessible");

	//--------------------------------- DisplayName ---------------------------------//
	/**
 	 * DisplayName permet d’afficher dans le moteur un nom différent
 	 * de celui défini dans le fichier .h.
 	 */
	UPROPERTY(EditAnywhere, meta = (DisplayName = "MyIntDisplayName"))
	int32 m_myIntDisplayName = 400;

	//--------------------------------- ExposeOnSpawn ---------------------------------//
	/**
	 * ExposeOnSpawn permet d'exposer des variables sur les nodes SpawnActor construct Object en Blueprint.
	 *
	 * doit avoir un flag 'BlueprintVisible' -> (BlueprintReadOnly, BlueprintReadWrite), sinon:
	 * Warning  : Property cannot have 'ExposeOnSpawn' without 'BlueprintVisible' flag.
	 * 
	 * La valeur peut être sous forme de string "true" mais il est recommander de mettre la valeur sous forme de bool
	 */
	UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess = true, ExposeOnSpawn = true))
	int32 MyIntExposed = 200;

	//--------------------------------- ForceInlineRow ---------------------------------//

	/**
 	 * ForceInlineRow, pour les TMap, permet d’aligner horizontalement dans le Details Panel
 	 * la clé (Key) et la valeur (Value).
 	 *
 	 * Dans beaucoup de cas, cela améliore la lisibilité et permet de gagner de la place
 	 * dans le Details Panel.
 	 */
	UPROPERTY(EditAnywhere, meta=(ForceInlineRow))
	TMap<FName, int32> MyMapInlineRow;
	
	/**
	 * ForceInlineRow, exemple sans le specifier
	 */
	UPROPERTY(EditAnywhere)
	TMap<FName, int32> MyMapNotInlineRow;
	
};
