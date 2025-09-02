// Enguerran COBERT Alias Opaax Dev, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PTUPROPSpicifierIndispensable.generated.h"

/**
 * @class PTUPROPSpicifierIndispensable
 * Explique les UPROPERTY Specifiers indispensables
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
	//--------------------------------- CATEGORY - ADVANCED_DISPLAY ---------------------------------//
		
	/**
	 * Category
	 * 
	 * La catégorie de cette propriété quand elle est affichée dans les outils Blueprint.  
	 * Des sous-catégories peuvent être définies en utilisant l'opérateur '|'.
	 */
	UPROPERTY(VisibleAnywhere, Category = "Les Indispensables|Category")
	int32 MyInt_Category = 30;

	/**
	 * AdvancedDisplay
	 *
	 * Cette propriété sera placée dans une section "Advanced" (menu déroulant), dans le panneau auquel elle appartient.
	 */
	UPROPERTY(VisibleAnywhere, Category = "Les Indispensables", AdvancedDisplay)
	int32 MyInt_AdvancedDisplay = 30;

	/**
	 * AdvancedDisplay
	 *
	 * Cette propriété sera placée dans une section "Advanced" (menu déroulant), dans le panneau auquel elle appartient.  
	 * Ne semble pas marcher avec les sous-catégories.
	 */
	UPROPERTY(VisibleAnywhere, Category = "Indispensables|Category", AdvancedDisplay)
	int32 MyInt_AdvancedDisplay2 = 30;

	/**
	 * AdvancedDisplay
	 *
	 * Cette propriété sera placée dans une section "Advanced" (menu déroulant), dans le panneau auquel elle appartient.  
	 * Ne semble pas marcher avec les sous-catégories.
	 */
	UPROPERTY(VisibleAnywhere, AdvancedDisplay)
	int32 MyInt_AdvancedDisplay3 = 30;
	
	//--------------------------------- EDIT ---------------------------------//
	//--------------------------------- PRIVATE ---------------------------------//
private:
	/**
	 * EditAnywhere
	 * 
	 * Indique que cette propriété peut être éditée dans les Property Windows,  
	 * sur les archétypes et les instances.  
	 * Ce specifier est incompatible avec n’importe quel specifier "Visible".
	 */
	UPROPERTY(EditAnywhere, Category = "Les Indispensables")
	int32 MyInt_EditAnywhere_private = 30;

	/**
	 * EditDefaultsOnly
	 *
	 * Indique que cette propriété peut être éditée dans les Property Windows,  
	 * mais uniquement sur les archétypes.  
	 * Ce specifier est incompatible avec n’importe quel specifier "Visible".
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Les Indispensables")
	int32 MyInt_EditDefaultsOnly_private = 30;

	/**
	 * EditInstanceOnly
	 * 
	 * Indique que cette propriété peut être éditée dans les Property Windows,  
	 * mais uniquement sur les instances.  
	 * Ce specifier est incompatible avec n’importe quel specifier "Visible".
	 */
	UPROPERTY(EditInstanceOnly, Category = "Les Indispensables")
	int32 MyInt_EditInstanceOnly_private = 30;
	
	//--------------------------------- PROTECTED ---------------------------------//
protected:
	/**
	 * EditAnywhere
	 * 
	 * Indique que cette propriété peut être éditée dans les Property Windows,  
	 * sur les archétypes et les instances.  
	 * Ce specifier est incompatible avec n’importe quel specifier "Visible".
	 */
	UPROPERTY(EditAnywhere, Category = "Les Indispensables")
	int32 MyInt_EditAnywhere_protected = 30;

	/**
	 * EditDefaultsOnly
	 *
	 * Indique que cette propriété peut être éditée dans les Property Windows,  
	 * mais uniquement sur les archétypes.  
	 * Ce specifier est incompatible avec n’importe quel specifier "Visible".
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Les Indispensables")
	int32 MyInt_EditDefaultsOnly_protected = 30;

	/**
	 * EditInstanceOnly
	 * 
	 * Indique que cette propriété peut être éditée dans les Property Windows,  
	 * mais uniquement sur les instances.  
	 * Ce specifier est incompatible avec n’importe quel specifier "Visible".
	 */
	UPROPERTY(EditInstanceOnly, Category = "Les Indispensables")
	int32 MyInt_EditInstanceOnly_protected = 30;

	//--------------------------------- PUBLIC ---------------------------------//
public:
	/**
	 * EditAnywhere
	 * 
	 * Indique que cette propriété peut être éditée dans les Property Windows,  
	 * sur les archétypes et les instances.  
	 * Ce specifier est incompatible avec n’importe quel specifier "Visible".
	 */
	UPROPERTY(EditAnywhere, Category = "Les Indispensables")
	int32 MyInt_EditAnywhere_public = 30;

	/**
	 * EditDefaultsOnly
	 *
	 * Indique que cette propriété peut être éditée dans les Property Windows,  
	 * mais uniquement sur les archétypes.  
	 * Ce specifier est incompatible avec n’importe quel specifier "Visible".
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Les Indispensables")
	int32 MyInt_EditDefaultsOnly_public = 30;

	/**
	 * EditInstanceOnly
	 * 
	 * Indique que cette propriété peut être éditée dans les Property Windows,  
	 * mais uniquement sur les instances.  
	 * Ce specifier est incompatible avec n’importe quel specifier "Visible".
	 */
	UPROPERTY(EditInstanceOnly, Category = "Les Indispensables")
	int32 MyInt_EditInstanceOnly_public = 30;
	
	//--------------------------------- VISIBLE ---------------------------------//
	//--------------------------------- PRIVATE ---------------------------------//
private:
	/**
	 * VisibleAnywhere
	 *
	 * Indique que cette propriété est visible dans toutes les Property Windows,  
	 * mais ne peut pas être éditée.  
	 * Incompatible avec n’importe quel specifier "Edit".
	 */
	UPROPERTY(VisibleAnywhere, Category = "Les Indispensables")
	int32 MyInt_VisibleAnywhere_private = 30;

	/**
	 * VisibleDefaultsOnly
	 *
	 * Indique que cette propriété est uniquement visible dans les Property Windows des archétypes,  
	 * et ne peut pas être éditée.  
	 * Incompatible avec n’importe quel specifier "Edit".
	 */
	UPROPERTY(VisibleDefaultsOnly, Category = "Les Indispensables")
	int32 MyInt_VisibleDefaultsOnly_private = 30;

	/**
	 * VisibleInstanceOnly
	 *
	 * Indique que cette propriété est uniquement visible dans les Property Windows des instances,  
	 * et ne peut pas être éditée.  
	 * Incompatible avec n’importe quel specifier "Edit".
	 */
	UPROPERTY(VisibleInstanceOnly, Category = "Les Indispensables")
	int32 MyInt_VisibleInstanceOnly_private = 30;

	//--------------------------------- PROTECTED ---------------------------------//
protected:
	/**
	 * VisibleAnywhere
	 *
	 * Indique que cette propriété est visible dans toutes les Property Windows,  
	 * mais ne peut pas être éditée.  
	 * Incompatible avec n’importe quel specifier "Edit".
	 */
	UPROPERTY(VisibleAnywhere, Category = "Les Indispensables")
	int32 MyInt_VisibleAnywhere_protected = 30;

	/**
	 * VisibleDefaultsOnly
	 *
	 * Indique que cette propriété est uniquement visible dans les Property Windows des archétypes,  
	 * et ne peut pas être éditée.  
	 * Incompatible avec n’importe quel specifier "Edit".
	 */
	UPROPERTY(VisibleDefaultsOnly, Category = "Les Indispensables")
	int32 MyInt_VisibleDefaultsOnly_protected = 30;

	/**
	 * VisibleInstanceOnly
	 *
	 * Indique que cette propriété est uniquement visible dans les Property Windows des instances,  
	 * et ne peut pas être éditée.  
	 * Incompatible avec n’importe quel specifier "Edit".
	 */
	UPROPERTY(VisibleInstanceOnly, Category = "Les Indispensables")
	int32 MyInt_VisibleInstanceOnly_protected = 30;

	//--------------------------------- PUBLIC ---------------------------------//
public:
	/**
	 * VisibleAnywhere
	 *
	 * Indique que cette propriété est visible dans toutes les Property Windows,  
	 * mais ne peut pas être éditée.  
	 * Incompatible avec n’importe quel specifier "Edit".
	 */
	UPROPERTY(VisibleAnywhere, Category = "Les Indispensables")
	int32 MyInt_VisibleAnywhere_public = 30;

	/**
	 * VisibleDefaultsOnly
	 *
	 * Indique que cette propriété est uniquement visible dans les Property Windows des archétypes,  
	 * et ne peut pas être éditée.  
	 * Incompatible avec n’importe quel specifier "Edit".
	 */
	UPROPERTY(VisibleDefaultsOnly, Category = "Les Indispensables")
	int32 MyInt_VisibleDefaultsOnly_public = 30;

	/**
	 * VisibleInstanceOnly
	 *
	 * Indique que cette propriété est uniquement visible dans les Property Windows des instances,  
	 * et ne peut pas être éditée.  
	 * Incompatible avec n’importe quel specifier "Edit".
	 */
	UPROPERTY(VisibleInstanceOnly, Category = "Les Indispensables")
	int32 MyInt_VisibleInstanceOnly_public = 30;

	//--------------------------------- READ WRITE ---------------------------------//
	//--------------------------------- PROTECTED ---------------------------------//
protected:
	/**
	 * BlueprintReadWrite
	 *
	 * Peut être lu et modifié depuis un Blueprint.  
	 * Incompatible avec le specifier BlueprintReadOnly.
	 */
	UPROPERTY(BlueprintReadWrite, Category = "Les Indispensables|ReadWrite")
	int32 MyInt_BlueprintReadWrite = 30;
	
	/**
	 * VisibleDefaultsOnly, BlueprintReadWrite
	 *
	 * Peut être lu et modifié depuis un Blueprint.  
	 * Incompatible avec le specifier BlueprintReadOnly.
	 */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Les Indispensables|ReadWrite")
	int32 MyInt_VDO_BlueprintReadWrite = 30;

	/**
	 * VisibleInstanceOnly, BlueprintReadWrite
	 * 
	 * Peut être lu et modifié depuis un Blueprint.  
	 * Incompatible avec le specifier BlueprintReadOnly.
	 */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Les Indispensables|ReadWrite")
	int32 MyInt_VIO_BlueprintReadWrite = 30;

	/**
	 * VisibleAnywhere, BlueprintReadWrite
	 *
	 * Peut être lu et modifié depuis un Blueprint.  
	 * Incompatible avec le specifier BlueprintReadOnly.
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Les Indispensables|ReadWrite")
	int32 MyInt_VA_BlueprintReadWrite = 30;

	/**
	 * EditDefaultsOnly, BlueprintReadWrite
	 * 
	 * Peut être lu et modifié depuis un Blueprint.  
	 * Incompatible avec le specifier BlueprintReadOnly.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Les Indispensables|ReadWrite")
	int32 MyInt_EDO_BlueprintReadWrite = 30;

	/**
	 * EditInstanceOnly, BlueprintReadWrite
	 *
	 * Peut être lu et modifié depuis un Blueprint.  
	 * Incompatible avec le specifier BlueprintReadOnly.
	 */
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Les Indispensables|ReadWrite")
	int32 MyInt_EIO_BlueprintReadWrite = 30;

	/**
	 * EditAnywhere, BlueprintReadWrite
	 *
	 * Peut être lu et modifié depuis un Blueprint.  
	 * Incompatible avec le specifier BlueprintReadOnly.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Les Indispensables|ReadWrite")
	int32 MyInt_EA_BlueprintReadWrite = 30;
	
	//--------------------------------- READ ONLY ---------------------------------//
	//--------------------------------- PROTECTED ---------------------------------//
protected:
	/**
	 * BlueprintReadOnly
	 * 
	 * Peut être lu mais ne peut pas être modifié depuis un Blueprint.  
	 * Incompatible avec le specifier BlueprintReadWrite.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Les Indispensables|ReadOnly")
	int32 MyInt_BlueprintReadOnly = 30;
	
	/**
	 * VisibleDefaultsOnly, BlueprintReadOnly
	 * 
	 * Peut être lu mais ne peut pas être modifié depuis un Blueprint.  
	 * Incompatible avec le specifier BlueprintReadWrite.
	 */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Les Indispensables|ReadOnly")
	int32 MyInt_VDO_BlueprintReadOnly = 30;

	/**
	 * VisibleInstanceOnly, BlueprintReadOnly
	 *
	 * Peut être lu mais ne peut pas être modifié depuis un Blueprint.  
	 * Incompatible avec le specifier BlueprintReadWrite.
	 */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Les Indispensables|ReadOnly")
	int32 MyInt_VIO_BlueprintReadOnly = 30;

	/**
	 * VisibleAnywhere, BlueprintReadOnly
	 *
	 * Peut être lu mais ne peut pas être modifié depuis un Blueprint.  
	 * Incompatible avec le specifier BlueprintReadWrite.
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Les Indispensables|ReadOnly")
	int32 MyInt_VA_BlueprintReadOnly = 30;

	/**
	 * EditDefaultsOnly, BlueprintReadOnly
	 *
	 * Peut être lu mais ne peut pas être modifié depuis un Blueprint.  
	 * Incompatible avec le specifier BlueprintReadWrite.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Les Indispensables|ReadOnly")
	int32 MyInt_EDO_BlueprintReadOnly = 30;

	/**
	 * EditInstanceOnly, BlueprintReadOnly
	 *
	 * Peut être lu mais ne peut pas être modifié depuis un Blueprint.  
	 * Incompatible avec le specifier BlueprintReadWrite.
	 */
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Les Indispensables|ReadOnly")
	int32 MyInt_EIO_BlueprintReadOnly = 30;

	/**
	 * EditAnywhere, BlueprintReadOnly
	 *
	 * Peut être lu mais ne peut pas être modifié depuis un Blueprint.  
	 * Incompatible avec le specifier BlueprintReadWrite.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Les Indispensables|ReadOnly")
	int32 MyInt_EA_BlueprintReadOnly = 30;
};
