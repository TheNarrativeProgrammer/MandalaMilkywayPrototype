// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetMandalaBuilder.h"
#include "Components/ListView.h"

void UWidgetMandalaBuilder::NativeConstruct()
{
	Super::NativeConstruct();

	ShapeSelectListWidget->SetListItems(ShapeDataArray);
	EffectSelectListWidget->SetListItems(EffectDataArray);
}
