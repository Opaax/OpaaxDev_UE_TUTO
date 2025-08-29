// Enguerran COBERT Alias Opaax Dev, All Right 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PTUPROPSpecifier_BPGetSet_GetSet.generated.h"

/**
 * @class APTUPROPSpecifier_BPGetSet_GetSet
 *
 * Example et doc pour les specifiers BlueprintGetter - BlueprintSetter
 */
UCLASS()
class PROJETTUTO_API APTUPROPSpecifier_BPGetSet_GetSet : public AActor
{
	GENERATED_UCLASS_BODY()

	//--------------------------------- FUNCTION ---------------------------------//
	//--------------------------------- PUBLIC ---------------------------------//
public:
	/***/
	UFUNCTION(BlueprintGetter, Category = "BPGetSet")
	FString GetMyString_BPGetter() const;

	/***/
	UFUNCTION(BlueprintSetter, Category = "BPGetSet")
	void SetMyString_BPSetter(const FString& NewString );

	/***/
	UFUNCTION(BlueprintGetter, Category = "BPGetSet")
	FString GetMyString_BPGetterSetter() const;

	/***/
	UFUNCTION(BlueprintSetter, Category = "BPGetSet")
	void SetMyString_BPGetterSetter(const FString& NewString );

	/***/
	UFUNCTION(BlueprintGetter, Category = "BPGetSet")
	FString GetMyString_ReadWrite_GetSet() const;

	/***/
	UFUNCTION(BlueprintSetter, Category = "BPGetSet")
	void SetMyString_ReadWrite_GetSet(const FString& NewString);

	/**
	 * 
	 * @return MyString_GetSet
	 */
	FString GetMyString_GetSet() const;
	
	/***/
	void SetMyString_GetSet(const FString& NewString) { MyString_GetSet = NewString; }
	
	//--------------------------------- OVERRIDE ---------------------------------//
	//--------------------------------- PUBLIC ---------------------------------//
public:
	virtual void BeginPlay() override;
	
	//--------------------------------- MEMBERS ---------------------------------//
	//--------------------------------- PROTECTED ---------------------------------//
protected:
	/**
	 * En arrière-plan, UHT crée des 'Getter - Setter' pour les property avec le specifier BlueprintReadWrite.
	 */
	UPROPERTY(BlueprintReadWrite)
	FString MyString_ReadWrite = TEXT("MyString_ReadWrite");

	/**
	 * En revanche, on peut personnaliser quelles fonctions on veut utiliser pour le specifier BlueprintReadWrite.
	 * Cela nous donne l’avantage de pouvoir effectuer plus d’opérations que 'seulement' obtenir ou modifier la valeur d’un membre.
	 */
	UPROPERTY(BlueprintReadWrite, BlueprintGetter = "GetMyString_ReadWrite_GetSet", BlueprintSetter = "SetMyString_ReadWrite_GetSet")
	FString MyString_ReadWrite_GetSet = TEXT("MyString_ReadWrite_GetSet");
	
	//--------------------------------- PRIVATE ---------------------------------//
private:
	/**
	 * BlueprintGetter :
	 * - Doit avoir une valeur sous forme de string.
	 * - Doit être une fonction UFUNCTION() pure, le specifier UFUNCTION(BlueprintGetter) gère ça automatiquement.
	 *
	 * Cela nous permet de personnaliser la fonction getter que l’on souhaite.
	 * Est implicitement BlueprintReadOnly si aucun BlueprintSetter ou BlueprintReadWrite n’est spécifié.
	 */
	UPROPERTY(BlueprintGetter = "GetMyString_BPGetter")
	FString MyString_BPGetter = TEXT("MyString_BPGetter");

	/**
	 * BlueprintSetter :
	 * - Doit avoir une valeur sous forme de string.
	 * - Doit être une fonction UFUNCTION(), Le Specifier UFUNCTION(BlueprintSetter) gère ça automatiquement.
	 * 
	 * Cela nous permet de personnaliser la fonction setter que l’on souhaite.
	 * Est implicitement marqué comme BlueprintReadWrite (un getter par défaut est donc créé).
	 */
	UPROPERTY(BlueprintSetter = "SetMyString_BPSetter")
	FString MyString_BPSetter = TEXT("MyString_BPSetter");

	/**
	 * Les deux en même temps.
	 */
	UPROPERTY(BlueprintGetter = "GetMyString_BPGetterSetter", BlueprintSetter = "SetMyString_BPGetterSetter")
	FString MyString_BPGetterSetter = TEXT("MyString_BPGetterSetter");

	/**
	 * BlueprintGetter :
	 * - Doit avoir une valeur sous forme de string.
	 * - En revanche, si la valeur (la string) est vide, un getter par défaut est créé.
	 */
	UPROPERTY(BlueprintGetter = "")
	FString MyString_BPGet_NoName = TEXT("MyString_BPGet_NoName");

	/**
	 * De même pour BlueprintSetter.
	 */
	UPROPERTY(BlueprintGetter = "", BlueprintSetter = "")
	FString MyString_BPGetSet_NoName = TEXT("MyString_BPGetSet_NoName");

	//--------------------------------- PROTECTED ---------------------------------//
protected:
	/**
	 * Getter et Setter sont donc deux specifier assez obscurs.
	 * Pour l’instant, je n’ai pas trouvé quel module les ajoute (pas de trace dans la doc, ni dans les classes où sont les autres specifier).
	 *
	 * Ils fonctionnent globalement comme BlueprintGetter/BlueprintSetter MAIS :
	 * - Il n’y a pas de tag implicite (BlueprintReadWrite, BlueprintReadOnly).
	 * - Ils n’ont pas besoin de valeur (nom de fonction).
	 * - Ils n’ont pas besoin d’être des UFUNCTION (mais ils peuvent l’être).
	 */
	UPROPERTY(BlueprintReadWrite, Getter, Setter)
	FString MyString_GetSet = TEXT("MyString_GetSet");

};
