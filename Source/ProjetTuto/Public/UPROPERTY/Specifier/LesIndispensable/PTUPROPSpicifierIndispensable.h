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
	UPROPERTY(Category = Indispensables)
	int32 MyInt_CategoryOnly = 30;
	
	//--------------------------------- EDIT ---------------------------------//
	/**
	 * EditAnywhere
	 * Indicates that this property can be edited by property windows, on archetypes and instances. This Specifier is incompatible with any of the "Visible" Specifiers.
	 */
	UPROPERTY(EditAnywhere, Category = "Les Indispensables")
	int32 MyInt_EditAnywhere = 30;

	/**
	 * EditDefaultsOnly
	 * Indicates that this property can be edited by property windows, but only on archetypes. This Specifier is incompatible with any of the "Visible" Specifiers.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Les Indispensables")
	int32 MyInt_EditDefaultsOnly = 30;

	/**
	 * EditInstanceOnly
	 * Indicates that this property can be edited by property windows, but only on instances, not on archetypes. This Specifier is incompatible with any of the "Visible" Specifiers.
	 */
	UPROPERTY(EditInstanceOnly, Category = "Les Indispensables")
	int32 MyInt_EditInstanceOnly = 30;
	
	//--------------------------------- VISIBLE ---------------------------------//
	/**
	 * VisibleAnywhere
	 */
	UPROPERTY(VisibleAnywhere, Category = "Les Indispensables")
	int32 MyInt_VisibleAnywhere = 30;

	/**
	 * VisibleDefaultsOnly
	 */
	UPROPERTY(VisibleDefaultsOnly, Category = "Les Indispensables")
	int32 MyInt_VisibleDefaultsOnly = 30;

	/**
	 * VisibleInstanceOnly
	 */
	UPROPERTY(VisibleInstanceOnly, Category = "Les Indispensables")
	int32 MyInt_VisibleInstanceOnly = 30;

	//--------------------------------- READ WRITE---------------------------------//
	/**
	 * VisibleDefaultsOnly, BlueprintReadWrite
	 *
	 * This property can be read or written from a Blueprint. This Specifier is incompatible with the BlueprintReadOnly Specifier.
	 */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Les Indispensables|ReadWrite")
	int32 MyInt_VDO_BlueprintReadWrite = 30;

	/**
	 * VisibleInstanceOnly, BlueprintReadWrite
	 *
	 * This property can be read or written from a Blueprint. This Specifier is incompatible with the BlueprintReadOnly Specifier.
	 */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Les Indispensables|ReadWrite")
	int32 MyInt_VIO_BlueprintReadWrite = 30;

	/**
	 * VisibleAnywhere, BlueprintReadWrite
	 *
	 * This property can be read or written from a Blueprint. This Specifier is incompatible with the BlueprintReadOnly Specifier.
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Les Indispensables|ReadWrite")
	int32 MyInt_VA_BlueprintReadWrite = 30;

	/**
	 * EditDefaultsOnly, BlueprintReadWrite
	 *
	 * This property can be read or written from a Blueprint. This Specifier is incompatible with the BlueprintReadOnly Specifier.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Les Indispensables|ReadWrite")
	int32 MyInt_EDO_BlueprintReadWrite = 30;

	/**
	 * EditInstanceOnly, BlueprintReadWrite
	 *
	 * This property can be read or written from a Blueprint. This Specifier is incompatible with the BlueprintReadOnly Specifier.
	 */
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Les Indispensables|ReadWrite")
	int32 MyInt_EIO_BlueprintReadWrite = 30;

	/**
	 * EditAnywhere, BlueprintReadWrite
	 *
	 * This property can be read or written from a Blueprint. This Specifier is incompatible with the BlueprintReadOnly Specifier.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Les Indispensables|ReadWrite")
	int32 MyInt_EA_BlueprintReadWrite = 30;
	
	//--------------------------------- READ ONLY---------------------------------//
	/**
	 * VisibleDefaultsOnly, BlueprintReadOnly
	 *
	 * This property can be read by Blueprints, but not modified. This Specifier is incompatible with the BlueprintReadWrite Specifier.
	 */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Les Indispensables|ReadOnly")
	int32 MyInt_VDO_BlueprintReadOnly = 30;

	/**
	 * VisibleInstanceOnly, BlueprintReadOnly
	 *
	 * This property can be read by Blueprints, but not modified. This Specifier is incompatible with the BlueprintReadWrite Specifier.
	 */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Les Indispensables|ReadOnly")
	int32 MyInt_VIO_BlueprintReadOnly = 30;

	/**
	 * VisibleAnywhere, BlueprintReadOnly
	 *
	 * This property can be read by Blueprints, but not modified. This Specifier is incompatible with the BlueprintReadWrite Specifier.
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Les Indispensables|ReadOnly")
	int32 MyInt_VA_BlueprintReadOnly = 30;

	/**
	 * EditDefaultsOnly, BlueprintReadOnly
	 *
	 * This property can be read by Blueprints, but not modified. This Specifier is incompatible with the BlueprintReadWrite Specifier.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Les Indispensables|ReadOnly")
	int32 MyInt_EDO_BlueprintReadOnly = 30;

	/**
	 * EditInstanceOnly, BlueprintReadOnly
	 *
	 * This property can be read by Blueprints, but not modified. This Specifier is incompatible with the BlueprintReadWrite Specifier.
	 */
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Les Indispensables|ReadOnly")
	int32 MyInt_EIO_BlueprintReadOnly = 30;

	/**
	 * EditAnywhere, BlueprintReadOnly
	 *
	 * This property can be read by Blueprints, but not modified. This Specifier is incompatible with the BlueprintReadWrite Specifier.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Les Indispensables|ReadOnly")
	int32 MyInt_EA_BlueprintReadOnly = 30;

	//--------------------------------- CATEGORY ---------------------------------//
	/**
	 * Specifies the category of the property when displayed in Blueprint editing tools. Define nested categories using the | operator.
	 */
	UPROPERTY(VisibleAnywhere, Category = "Les Indispensables|Category")
	int32 MyInt_Category = 30;
	
	//--------------------------------- ADVANCED DISPLAY ---------------------------------//
	/**
	 * AdvancedDisplay
	 *
	 * The property will be placed in the advanced (dropdown) section of any panel where it appears.
	 */
	UPROPERTY(VisibleAnywhere, Category = "Les Indispensables", AdvancedDisplay)
	int32 MyInt_AdvancedDisplay = 30;
};
