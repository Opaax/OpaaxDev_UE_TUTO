// Enguerran COBERT Alias Opaax Dev, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PTUPROPSpicifierIndispensable.generated.h"

/**
 * @class PTUPROPSpicifierIndispensable
 * Explique les UPROPERTY Specifiers indispensables
 * 
 * Unreal Docs: @https://dev.epicgames.com/documentation/en-us/unreal-engine/unreal-engine-uproperties
 * Unreal Garden: @https://unreal-garden.com/docs/uproperty/
 */
UCLASS()
class PROJETTUTO_API APTUPROPSpicifierIndispensable : public AActor
{
	GENERATED_UCLASS_BODY()
	//--------------------------------- MEMBERS ---------------------------------//
	//--------------------------------- PUBLIC ---------------------------------//
public:
	//--------------------------------- RAPPEL ---------------------------------//
	/**
 * Il existe deux types de specifiers : 'Main Specifiers' et 'Meta Specifiers'.
 * 
 * La principale différence : les 'Meta Specifiers' sont utilisés uniquement par l’éditeur.
 *  - Voir : https://dev.epicgames.com/documentation/en-us/unreal-engine/unreal-engine-uproperties#metadataspecifiers
 */
	UPROPERTY(VisibleAnywhere /*<---- Main Specifier*/, /* Meta Specifier --->*/ meta = (AllowPrivateAccess = "true"))
	int32 MyInt_Rappel = 30;

	//--------------------------------- CATEGORY ---------------------------------//
	/**
	 * Category (VisibleAnywhere, juste pour l’avoir dans le moteur en exemple)
	 *
	 * Permet de regrouper des variables dans le même panneau.
	 *
	 * - Seul, ce specifier n’est pas vraiment utile.
	 * - Il doit avoir une valeur :
	 *      - En natif (MyString_Category)
	 *      - En string (MyString2_Category)
	 *      - Si la catégorie contient des espaces -> string obligatoire
	 * - Le caractère '|' permet de créer des sous-catégories
	 */
	UPROPERTY(VisibleAnywhere, Category = Category)
	FString MyString_Category = TEXT("CategoryNatif");

	UPROPERTY(VisibleAnywhere, Category = "Category")
	FString MyString2_Category = TEXT("CategoryString");

	UPROPERTY(VisibleAnywhere, Category = "Category with space")
	FString MyString3_Category = TEXT("CategoryStringWithSpace");

	UPROPERTY(VisibleAnywhere, Category = "Category|SousCategory")
	FString MyString4_Category = TEXT("CategorySousCategory");

	//--------------------------------- EDIT ---------------------------------//
private:
	/**
	 * Les specifiers 'Edit', comme leur nom l’indique, permettent de rendre une variable éditable dans l’éditeur.
	 *
	 * L’accessibilité en C++ ('private', 'protected', 'public') n’a aucune incidence dans l’éditeur :
	 * -> les variables seront visibles et éditables dans le panneau "Details".
	 *
	 * Ce specifier est composé de deux parties :
	 * - Edit
	 * - Anywhere, DefaultsOnly, InstanceOnly
	 *
	 * La deuxième partie définit le contexte dans lequel la variable est éditable :
	 *
	 * - EditAnywhere : la plus simple à comprendre, la variable est éditable dans tous les contextes.
	 *
	 * Attention :
	 * - Si une variable est éditée dans le contexte instance, elle ne sera pas visible dans le contexte "Default".
	 * - Si une variable est éditée dans le contexte "Default" et que l’instance ne l’a pas encore modifiée,
	 *   alors l’instance héritera de cette valeur par défaut.
	 * - Si l’instance a déjà surchargé la valeur, le bouton "Reset" restaurera la nouvelle valeur du "Default".
	 */
	UPROPERTY(EditAnywhere, Category = "EditAnywhere")
	int32 MyInt_EditAnywhere_private = 30;

protected:
	UPROPERTY(EditAnywhere, Category = "EditAnywhere")
	int32 MyInt_EditAnywhere_protected = 30;

public:
	UPROPERTY(EditAnywhere, Category = "EditAnywhere")
	int32 MyInt_EditAnywhere_public = 30;

	/**
	 * Le contexte "Default" :
	 * - Si vous venez de Unity : c’est similaire aux "Prefabs".
	 *   Dans la scène on instancie une copie du prefab -> c’est l’instance.
	 * - En Unreal, le contexte "Default" correspond à l’asset ouvert directement depuis le dossier "Content".
	 */
	UPROPERTY(EditDefaultsOnly, Category = "EditDefaultsOnly")
	int32 MyInt_EditDefaultsOnly_public = 30;

	/**
	 * Le contexte "Instance" :
	 * - Correspond à une instance placée dans un Level.
	 */
	UPROPERTY(EditInstanceOnly, Category = "EditInstanceOnly")
	int32 MyInt_EditInstanceOnly_public = 30;

	//--------------------------------- VISIBLE ---------------------------------//
private:
	/**
	 * Les specifiers 'Visible', comme leur nom l’indique, rendent la variable visible dans l’éditeur,
	 * mais non-éditable.
	 *
	 * Comme pour 'Edit', l’accessibilité en C++ n’a aucune incidence.
	 * Les variables seront visibles dans le panneau "Details".
	 *
	 * Ils fonctionnent de la même manière que 'Edit', avec les mêmes sous-types (Anywhere, DefaultsOnly, InstanceOnly).
	 */
	UPROPERTY(VisibleAnywhere, Category = "VisibleAnywhere")
	int32 MyInt_VisibleAnywhere_private = 30;

protected:
	UPROPERTY(VisibleAnywhere, Category = "VisibleAnywhere")
	int32 MyInt_VisibleAnywhere_protected = 30;

public:
	UPROPERTY(VisibleAnywhere, Category = "VisibleAnywhere")
	int32 MyInt_VisibleAnywhere_public = 30;

	/**
	 * Exemple : @MyInt_EditDefaultsOnly_public
	 */
	UPROPERTY(VisibleDefaultsOnly, Category = "VisibleDefaultsOnly")
	int32 MyInt_VisibleDefaultsOnly_public = 30;

	/**
	 * Exemple : @MyInt_EditInstanceOnly_public
	 */
	UPROPERTY(VisibleInstanceOnly, Category = "VisibleInstanceOnly")
	int32 MyInt_VisibleInstanceOnly_public = 30;

	//--------------------------------- READ WRITE ---------------------------------//
protected:
	/**
	 * Le specifier BlueprintReadWrite permet d’exposer une variable aux Blueprints.
	 * - Accès au getter
	 * - Accès au setter
	 *
	 * /!\ Ne peut pas être combiné avec 'BlueprintReadOnly'.
	 * /!\ Ne supporte pas les membres 'private'.
	 *
	 * La variable sera visible dans le panneau "MyBlueprint" des Blueprints.
	 * (si non visible : activer "Show inherited variables" dans l’engrenage du panneau 'MyBlueprint')
	 */
	UPROPERTY(BlueprintReadWrite, Category = "ReadWrite")
	int32 MyInt_BlueprintReadWrite = 30;

	//--------------------------------- READ ONLY ---------------------------------//
	/**
	 * Le specifier BlueprintReadOnly permet d’exposer une variable aux Blueprints.
	 * - Accès uniquement au getter
	 *
	 * /!\ Ne peut pas être combiné avec 'BlueprintReadWrite'.
	 * /!\ Ne supporte pas les membres 'private'.
	 *
	 * (exemple similaire : @MyInt_BlueprintReadWrite)
	 */
	UPROPERTY(BlueprintReadOnly, Category = "ReadOnly")
	int32 MyInt_BlueprintReadOnly = 30;

	//--------------------------------- MIX ---------------------------------//

	/**
 	 * Editable partout et accessible en Blueprint.
 	 * -> Dans le moteur : visible et modifiable dans le panneau "Details" (Defaults & Instances).
 	 * -> En Blueprint : getter + setter accessibles.
 	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EditAnywhere|ReadWrite")
	float MyFloat_EditAnywhere_BlueprintReadWrite = 30;

	/**
	 * Editable uniquement dans les Defaults, pas dans les instances.
	 * -> Dans le moteur : modifiable dans l’asset default.
	 * -> En Blueprint : getter + setter accessibles.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "EditDefaultsOnly|ReadWrite")
	float MyFloat_EditDefaultsOnly_BlueprintReadWrite = 30;

	/**
	 * Editable uniquement dans les instances (placées dans un niveau).
	 * -> Dans le moteur : modifiable dans l'instance.
	 * -> En Blueprint : getter + setter accessibles.
	 * -> Subtilité ici; comme il est en BlueprintReadWrite, il peut être edité dans le default via le pannaux "MyBlueprint" en cliquant sur la variable (ouvre la variable dans le panneau detail)
	 */
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "EditInstanceOnly|ReadWrite")
	float MyFloat_EditInstanceOnly_BlueprintReadWrite = 30;

	/**
	 * Visible partout (classe + instances) mais non modifiable dans le panneau "Details".
	 * -> Dans le moteur : affiché mais grisé, valeur non éditable.
	 * -> En Blueprint : getter + setter accessibles.
	 * -> Subtilité ici; même avec BlueprintReadWrite, il peut être pas edité dans le default via le pannaux "MyBlueprint" en cliquant sur la variable (ouvre la variable dans le panneau detail)
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "VisibleAnywhere|ReadWrite")
	float MyFloat_VisibleAnywhere_BlueprintReadWrite = 30;

	/**
	 * Visible uniquement dans les Defaults, mais non éditable.
	 * -> Dans le moteur : affiché mais grisé.
	 * -> En Blueprint : getter + setter accessibles.
	 */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "VisibleDefaultsOnly|ReadWrite")
	float MyFloat_VisibleDefaultsOnly_BlueprintReadWrite = 30;

	/**
	 * Visible uniquement dans les instances, mais non éditable.
	 * -> Dans le moteur : affiché mais grisé.
	 * -> En Blueprint : getter + setter accessibles.
	 */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "VisibleInstanceOnly|ReadWrite")
	float MyFloat_VisibleInstanceOnly_BlueprintReadWrite = 30;

	/**
	 * Editable partout et accessible en Blueprint en lecture seule.
	 * -> Dans le moteur : modifiable dans "Details".
	 * -> En Blueprint : seul le getter est accessible.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "EditAnywhere|ReadOnly")
	float MyFloat_EditAnywhere_BlueprintReadOnly = 30;

	/**
	 * Editable uniquement dans les Defaults.
	 * -> Dans le moteur : modifiable dans l’asset par défaut.
	 * -> En Blueprint : getter seulement.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "EditDefaultsOnly|ReadOnly")
	float MyFloat_EditDefaultsOnly_BlueprintReadOnly = 30;

	/**
	 * Editable uniquement dans les instances.
	 * -> Dans le moteur : modifiable uniquement quand placé dans un niveau.
	 * -> En Blueprint : getter seulement.
	 */
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "EditInstanceOnly|ReadOnly")
	float MyFloat_EditInstanceOnly_BlueprintReadOnly = 30;

	/**
	 * Visible partout, non éditable.
	 * -> Dans le moteur : affiché mais grisé dans "Details".
	 * -> En Blueprint : getter seulement.
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VisibleAnywhere|ReadOnly")
	float MyFloat_VisibleAnywhere_BlueprintReadOnly = 30;

	/**
	 * Visible uniquement dans les Defaults, non éditable.
	 * -> Dans le moteur : affiché mais grisé dans l’asset par défaut.
	 * -> En Blueprint : getter seulement.
	 */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "VisibleDefaultsOnly|ReadOnly")
	float MyFloat_VisibleDefaultsOnly_BlueprintReadOnly = 30;

	/**
	 * Visible uniquement dans les instances, non éditable.
	 * -> Dans le moteur : affiché mais grisé dans les instances.
	 * -> En Blueprint : getter seulement.
	 */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "VisibleInstanceOnly|ReadOnly")
	float MyFloat_VisibleInstanceOnly_BlueprintReadOnly = 30;
};
