// Enguerran COBERT Alias Opaax Dev, All Right Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PTUPROPSpicifierIndispensable.generated.h"

/**
 * @class PTUPROPSpicifierIndispensable
 * Expliquez les UPROPERTY Specifier Indispensable
 * 
 * Unreal Docs: https://dev.epicgames.com/documentation/en-us/unreal-engine/unreal-engine-uproperties
 * Unreal Garden: https://unreal-garden.com/docs/uproperty/
 */
UCLASS()
class PROJETTUTO_API APTUPROPSpicifierIndispensable : public AActor
{
	GENERATED_UCLASS_BODY()

	//--------------------------------- MEMBERS ---------------------------------//
	//--------------------------------- PUBLIC ---------------------------------//
public:
	//--------------------------------- CATEGORY ---------------------------------//
		
	/**
	 * Category
	 * 
	 * La catégorie de cette property quand elle est affiché dans les outils blueprint. Des sous catégory peut être définie en utilisant l'opérateur '|'
	 */
	UPROPERTY(VisibleAnywhere, Category = "Les Indispensables|Category")
	int32 MyInt_Category = 30;

	/**
	 * AdvancedDisplay
	 *
	 * Cette property va être placé dans une section "advanced (menu déroulant)", dans le panel auquel elle appartient
	 */
	UPROPERTY(VisibleAnywhere, Category = "Les Indispensables", AdvancedDisplay)
	int32 MyInt_AdvancedDisplay = 30;

	/**
	 * AdvancedDisplay
	 *
	 * Cette property va être placé dans une section "advanced (menu déroulant)", dans le panel auquel elle appartient
	 * Ne semble pas marché avec les sous catégories
	 */
	UPROPERTY(VisibleAnywhere, Category = "Indispensables|Category", AdvancedDisplay)
	int32 MyInt_AdvancedDisplay2 = 30;

	/**
	 * AdvancedDisplay
	 *
	 * Cette property va être placé dans une section "advanced (menu déroulant)", dans le panel auquel elle appartient
	 * Ne semble pas marché avec les sous catégories
	 */
	UPROPERTY(VisibleAnywhere, AdvancedDisplay)
	int32 MyInt_AdvancedDisplay3 = 30;
	
	//--------------------------------- EDIT ---------------------------------//
	//--------------------------------- PRIVATE ---------------------------------//
private:
	/**
	 * EditAnywhere
	 * 
	 * Indique que cette property peut être édité par les property windows, sur les archetypes et les instances. Ce specifier est incompatible avec n'importe 'Visible' specifiers.
	 */
	UPROPERTY(EditAnywhere, Category = "Les Indispensables")
	int32 MyInt_EditAnywhere_private = 30;

	/**
	 * EditDefaultsOnly
	 *
	 * Indique que cette property peut être édité par les property windows, mais uniquement sur les archetypes. Ce specifier est incompatible avec n'importe 'Visible' specifiers.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Les Indispensables")
	int32 MyInt_EditDefaultsOnly_private = 30;

	/**
	 * EditInstanceOnly
	 * 
	 * Indique que cette property peut être édité par les property windows, mais uniquement sur les instances. Ce specifier est incompatible avec n'importe 'Visible' specifiers.
	 */
	UPROPERTY(EditInstanceOnly, Category = "Les Indispensables")
	int32 MyInt_EditInstanceOnly_private = 30;
	
	//--------------------------------- PROTECTED ---------------------------------//
protected:
	/**
	 * EditAnywhere
	 * 
	 * Indique que cette property peut être édité par les property windows, sur les archetypes et les instances. Ce specifier est incompatible avec n'importe 'Visible' specifiers.
	 */
	UPROPERTY(EditAnywhere, Category = "Les Indispensables")
	int32 MyInt_EditAnywhere_protected = 30;

	/**
	 * EditDefaultsOnly
	 *
	 * Indique que cette property peut être édité par les property windows, mais uniquement sur les archetypes. Ce specifier est incompatible avec n'importe 'Visible' specifiers.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Les Indispensables")
	int32 MyInt_EditDefaultsOnly_protected = 30;

	/**
	 * EditInstanceOnly
	 * 
	 * Indique que cette property peut être édité par les property windows, mais uniquement sur les instances. Ce specifier est incompatible avec n'importe 'Visible' specifiers.
	 */
	UPROPERTY(EditInstanceOnly, Category = "Les Indispensables")
	int32 MyInt_EditInstanceOnly_protected = 30;

	//--------------------------------- PUBLIC ---------------------------------//
public:
	/**
	 * EditAnywhere
	 * 
	 * Indique que cette property peut être édité par les property windows, sur les archetypes et les instances. Ce specifier est incompatible avec n'importe 'Visible' specifiers.
	 */
	UPROPERTY(EditAnywhere, Category = "Les Indispensables")
	int32 MyInt_EditAnywhere_public = 30;

	/**
	 * EditDefaultsOnly
	 *
	 * Indique que cette property peut être édité par les property windows, mais uniquement sur les archetypes. Ce specifier est incompatible avec n'importe 'Visible' specifiers.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Les Indispensables")
	int32 MyInt_EditDefaultsOnly_public = 30;

	/**
	 * EditInstanceOnly
	 * 
	 * Indique que cette property peut être édité par les property windows, mais uniquement sur les instances. Ce specifier est incompatible avec n'importe 'Visible' specifiers.
	 */
	UPROPERTY(EditInstanceOnly, Category = "Les Indispensables")
	int32 MyInt_EditInstanceOnly_public = 30;
	
	//--------------------------------- VISIBLE ---------------------------------//
	//--------------------------------- PRIVATE ---------------------------------//
private:
	/**
	 * VisibleAnywhere
	 *
	 * Indique que cette property est visible dans toutes les property windows, mais ne peut être édité. Incompatible avec n'importe "Edit" specifiers.
	 */
	UPROPERTY(VisibleAnywhere, Category = "Les Indispensables")
	int32 MyInt_VisibleAnywhere_private = 30;

	/**
	 * VisibleDefaultsOnly
	 *
	 * Indique que cette property est uniquement visible dans les property windows des aarchetypes, et ne peut être édité. Incompatible avec n'importe "Edit" specifiers.
	 */
	UPROPERTY(VisibleDefaultsOnly, Category = "Les Indispensables")
	int32 MyInt_VisibleDefaultsOnly_private = 30;

	/**
	 * VisibleInstanceOnly
	 *
	 * Indique que cette property est uniquement visible dans les property windows des instances, mais ne peut être édité. Incompatible avec n'importe "Edit" specifiers.
	 */
	UPROPERTY(VisibleInstanceOnly, Category = "Les Indispensables")
	int32 MyInt_VisibleInstanceOnly_private = 30;

	//--------------------------------- PROTECTED ---------------------------------//
protected:
	/**
	 * VisibleAnywhere
	 *
	 * Indique que cette property est visible dans toutes les property windows, mais ne peut être édité. Incompatible avec n'importe "Edit" specifiers.
	 */
	UPROPERTY(VisibleAnywhere, Category = "Les Indispensables")
	int32 MyInt_VisibleAnywhere_protected = 30;

	/**
	 * VisibleDefaultsOnly
	 *
	 * Indique que cette property est uniquement visible dans les property windows des aarchetypes, et ne peut être édité. Incompatible avec n'importe "Edit" specifiers.
	 */
	UPROPERTY(VisibleDefaultsOnly, Category = "Les Indispensables")
	int32 MyInt_VisibleDefaultsOnly_protected = 30;

	/**
	 * VisibleInstanceOnly
	 *
	 * Indique que cette property est uniquement visible dans les property windows des instances, mais ne peut être édité. Incompatible avec n'importe "Edit" specifiers.
	 */
	UPROPERTY(VisibleInstanceOnly, Category = "Les Indispensables")
	int32 MyInt_VisibleInstanceOnly_protected = 30;

	//--------------------------------- PUBLIC ---------------------------------//
public:
	/**
	 * VisibleAnywhere
	 *
	 * Indique que cette property est visible dans toutes les property windows, mais ne peut être édité. Incompatible avec n'importe "Edit" specifiers.
	 */
	UPROPERTY(VisibleAnywhere, Category = "Les Indispensables")
	int32 MyInt_VisibleAnywhere_public = 30;

	/**
	 * VisibleDefaultsOnly
	 *
	 * Indique que cette property est uniquement visible dans les property windows des aarchetypes, et ne peut être édité. Incompatible avec n'importe "Edit" specifiers.
	 */
	UPROPERTY(VisibleDefaultsOnly, Category = "Les Indispensables")
	int32 MyInt_VisibleDefaultsOnly_public = 30;

	/**
	 * VisibleInstanceOnly
	 *
	 * Indique que cette property est uniquement visible dans les property windows des instances, mais ne peut être édité. Incompatible avec n'importe "Edit" specifiers.
	 */
	UPROPERTY(VisibleInstanceOnly, Category = "Les Indispensables")
	int32 MyInt_VisibleInstanceOnly_public = 30;

	//--------------------------------- READ WRITE---------------------------------//
	//--------------------------------- PROTECTED ---------------------------------//
protected:
	/**
	 * VisibleDefaultsOnly, BlueprintReadWrite
	 *
	 * Peut être lu et modifié depuis un Blueprint. Incompatible avec le specifier BlueprintReadOnly
	 */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Les Indispensables|ReadWrite")
	int32 MyInt_VDO_BlueprintReadWrite = 30;

	/**
	 * VisibleInstanceOnly, BlueprintReadWrite
	 * 
	 * Peut être lu et modifié depuis un Blueprint. Incompatible avec le specifier BlueprintReadOnly
	 */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Les Indispensables|ReadWrite")
	int32 MyInt_VIO_BlueprintReadWrite = 30;

	/**
	 * VisibleAnywhere, BlueprintReadWrite
	 *
	 * Peut être lu et modifié depuis un Blueprint. Incompatible avec le specifier BlueprintReadOnly
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Les Indispensables|ReadWrite")
	int32 MyInt_VA_BlueprintReadWrite = 30;

	/**
	 * EditDefaultsOnly, BlueprintReadWrite
	 * 
	 * Peut être lu et modifié depuis un Blueprint. Incompatible avec le specifier BlueprintReadOnly
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Les Indispensables|ReadWrite")
	int32 MyInt_EDO_BlueprintReadWrite = 30;

	/**
	 * EditInstanceOnly, BlueprintReadWrite
	 *
	 * Peut être lu et modifié depuis un Blueprint. Incompatible avec le specifier BlueprintReadOnly
	 */
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Les Indispensables|ReadWrite")
	int32 MyInt_EIO_BlueprintReadWrite = 30;

	/**
	 * EditAnywhere, BlueprintReadWrite
	 *
	 * Peut être lu et modifié depuis un Blueprint. Incompatible avec le specifier BlueprintReadOnly
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Les Indispensables|ReadWrite")
	int32 MyInt_EA_BlueprintReadWrite = 30;
	
	//--------------------------------- READ ONLY---------------------------------//
	//--------------------------------- PROTECTED ---------------------------------//
protected:
	/**
	 * VisibleDefaultsOnly, BlueprintReadOnly
	 * 
	 * Peut être lu mais ne peut pas être modifié depuis un Blueprint. Incompatible avec le specifier BlueprintReadOnly
	 */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Les Indispensables|ReadOnly")
	int32 MyInt_VDO_BlueprintReadOnly = 30;

	/**
	 * VisibleInstanceOnly, BlueprintReadOnly
	 *
	 * Peut être lu mais ne peut pas être modifié depuis un Blueprint. Incompatible avec le specifier BlueprintReadOnly
	 */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Les Indispensables|ReadOnly")
	int32 MyInt_VIO_BlueprintReadOnly = 30;

	/**
	 * VisibleAnywhere, BlueprintReadOnly
	 *
	 * Peut être lu mais ne peut pas être modifié depuis un Blueprint. Incompatible avec le specifier BlueprintReadOnly
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Les Indispensables|ReadOnly")
	int32 MyInt_VA_BlueprintReadOnly = 30;

	/**
	 * EditDefaultsOnly, BlueprintReadOnly
	 *
	 * Peut être lu mais ne peut pas être modifié depuis un Blueprint. Incompatible avec le specifier BlueprintReadOnly
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Les Indispensables|ReadOnly")
	int32 MyInt_EDO_BlueprintReadOnly = 30;

	/**
	 * EditInstanceOnly, BlueprintReadOnly
	 *
	 * Peut être lu mais ne peut pas être modifié depuis un Blueprint. Incompatible avec le specifier BlueprintReadOnly
	 */
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Les Indispensables|ReadOnly")
	int32 MyInt_EIO_BlueprintReadOnly = 30;

	/**
	 * EditAnywhere, BlueprintReadOnly
	 *
	 * Peut être lu mais ne peut pas être modifié depuis un Blueprint. Incompatible avec le specifier BlueprintReadOnly
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Les Indispensables|ReadOnly")
	int32 MyInt_EA_BlueprintReadOnly = 30;
	
	//--------------------------------- ADVANCED DISPLAY ---------------------------------//
};
