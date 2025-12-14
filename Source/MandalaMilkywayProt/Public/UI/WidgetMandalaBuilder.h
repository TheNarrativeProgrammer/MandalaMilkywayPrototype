// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Engine/DataAsset.h"
#include "WidgetMandalaBuilder.generated.h"
/**
 * 
 */
class UMaterialInstance;
class UMaterial;

UCLASS(Blueprintable, BlueprintType)
class MANDALAMILKYWAYPROT_API UShapeData : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UMaterialInstance> MaterialInstance;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TObjectPtr<UMaterial> Material;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText ShapeName;
};


UCLASS(Blueprintable, BlueprintType)
class MANDALAMILKYWAYPROT_API UEffectData: public UDataAsset
{
	GENERATED_BODY()
	public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UMaterialInstance> MaterialInstanceAnimExample;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UMaterialInstance> MaterialInstanceEffect;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftObjectPtr<UMaterial> Material;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText EffectName;
	
};
class UListView;
UCLASS()
class MANDALAMILKYWAYPROT_API UWidgetMandalaBuilder : public UUserWidget
{
	GENERATED_BODY()

	public:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	TObjectPtr<UListView> ShapeSelectListWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	TObjectPtr<UListView> EffectSelectListWidget;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<TObjectPtr<UShapeData>> ShapeDataArray;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<TObjectPtr<UEffectData>> EffectDataArray;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UMaterialInstance> SelectMaterialShape;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UMaterialInstance> SelectMaterialEffect;
	
	virtual void NativeConstruct() override;

	
};
