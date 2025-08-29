// Enguerran COBERT Alias Opaax Dev, All Right 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PTUPROPSpecifier_BPGetSet_GetSet.generated.h"

/***/
UCLASS()
class PROJETTUTO_API APTUPROPSpecifier_BPGetSet_GetSet : public AActor
{
	GENERATED_UCLASS_BODY()

	//--------------------------------- FUNCTION ---------------------------------//
	//--------------------------------- PUBLIC ---------------------------------//
public:
	/***/
	UFUNCTION(BlueprintPure, Category = "BPGetSet")
	FString GetMyString_BPGetter() const;

	/***/
	UFUNCTION(BlueprintCallable, Category = "BPGetSet")
	void SetMyString_BPSetter(const FString& NewString );

	/***/
	UFUNCTION(BlueprintPure, Category = "BPGetSet")
	FString GetMyString_BPGetterSetter() const;

	/***/
	UFUNCTION(BlueprintCallable, Category = "BPGetSet")
	void SetMyString_BPGetterSetter(const FString& NewString );

	/***/
	UFUNCTION(BlueprintPure, Category = "BPGetSet")
	FString GetMyString_ReadWrite_GetSet() const;

	/***/
	UFUNCTION(BlueprintCallable, Category = "BPGetSet")
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
	 * En arrière plan, UHT créer des 'Getter - Setter' pour les properties avec le specifier BlueprintReadWrite
	 */
	UPROPERTY(BlueprintReadWrite)
	FString MyString_ReadWrite = TEXT("MyString_ReadWrite");

	/**
	 * En revanche on peut customiser quel function on veut pour le specifier BlueprintReadWrite
	 * Ça nous donne l'avantage de faire plus d'opération que 'seulement' get ou set la valeur d'un membre
	 */
	UPROPERTY(BlueprintReadWrite, BlueprintGetter = "GetMyString_ReadWrite_GetSet", BlueprintSetter = "SetMyString_ReadWrite_GetSet")
	FString MyString_ReadWrite_GetSet = TEXT("MyString_ReadWrite_GetSet");
	
	//--------------------------------- PRIVATE ---------------------------------//
private:
	/**
	 * BlueprintGetter:
	 * Doit avoir une valeur sous forme de string
	 * Doit être une fonction UFUNCTION()
	 *
	 * Nous permet de customiser le fonction getter qu'on veut.
	 * Est implécitement BlueprintReadOnly si aucun des BlueprintSetter, BlueprintReadWrite est spécifier
	 */
	UPROPERTY(BlueprintGetter = "GetMyString_BPGetter")
	FString MyString_BPGetter = TEXT("MyString_BPGetter");

	/**
	 * BlueprintSetter:
	 * Doit avoir une valeur sous forme de string
	 * Doit être une fonction UFUNCTION()
	 * 
	 * Nous permet de customiser le fonction setter qu'on veut.
	 * Est implécitement tag comme BlueprintReadWrite (est donc un getter par défault est créé)
	 */
	UPROPERTY(BlueprintSetter = "SetMyString_BPSetter")
	FString MyString_BPSetter = TEXT("MyString_BPSetter");

	/**
	 * les deux en même temps
	 */
	UPROPERTY(BlueprintGetter = "GetMyString_BPGetterSetter", BlueprintSetter = "SetMyString_BPGetterSetter")
	FString MyString_BPGetterSetter = TEXT("MyString_BPGetterSetter");

	/**
	 * BlueprintGetter:
	 * Doit avoir une valeur sous forme de string.
	 * En revanche, si valeur (la string) est vide un getteur default est créé.
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
	 * Getter et Setter donc 2 specifier assez obscure.
	 * Pour l'instant j'ai pas trouvé quel module les ajoutes. (pas de trace dans la doc, ni dans les classes on sont les autres specifier)
	 *
	 * Elle marche globalement comme BlueprintGetter/BlueprintSetter MAIS:
	 * - Il y a pas de tag implécite (BlueprintReadWrite, BlueprintReadOnly)
	 * - N'a pas besoin de valeur (de nom de function)
	 * - N'a pas besoin d'être une UFUNCTION (elles peuvent l'être)
	 */
	UPROPERTY(BlueprintReadWrite, Getter, Setter)
	FString MyString_GetSet = TEXT("MyString_GetSet");
};
