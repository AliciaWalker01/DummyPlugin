#include "DummyComponentVisualiser.h"
#include "DummyActorAndComponent.h"

FDummyComponentVisualiser::FDummyComponentVisualiser()
{

}

void FDummyComponentVisualiser::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
	if (const UDummyComponent* DComponent = Cast<UDummyComponent>(Component))
	{
		PDI->DrawLine(DComponent->GetComponentLocation(), DComponent->GetComponentLocation() + FVector(10000, 0, 0), FLinearColor::White, SDPG_Foreground, 10.f);
	}
}
