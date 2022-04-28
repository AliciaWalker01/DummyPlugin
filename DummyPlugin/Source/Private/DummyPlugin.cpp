// Copyright Epic Games, Inc. All Rights Reserved.

#include "DummyPlugin.h"
#include "DummyComponentVisualiser.h"
#include "DummyActorAndComponent.h"

#include "UnrealEd.h"
#include "ISettingsModule.h"
#include "ISettingsSection.h"

IMPLEMENT_MODULE(FDummyPlugin, DummyPlugin)

#define LOCTEXT_NAMESPACE "FDummyPluginModule"

void FDummyPlugin::StartupModule()
{
	if (GUnrealEd)
	{
		TSharedPtr<FDummyComponentVisualiser> DummyComponentVisualiser = MakeShareable(new FDummyComponentVisualiser());
		if (DummyComponentVisualiser.IsValid())
		{
			GUnrealEd->RegisterComponentVisualizer(UDummyComponent::StaticClass()->GetFName(), DummyComponentVisualiser);
			DummyComponentVisualiser->OnRegister();
		}
	}
}

void FDummyPlugin::ShutdownModule()
{
	if (GUnrealEd)
	{
		GUnrealEd->UnregisterComponentVisualizer(UDummyComponent::StaticClass()->GetFName());
	}

}

#undef LOCTEXT_NAMESPACE
	
