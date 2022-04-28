#include "DummySceneProxy.h"

FDummySceneProxy::FDummySceneProxy(const UDummyComponent* InComponent)
	: FPrimitiveSceneProxy((UPrimitiveComponent*)InComponent)
{
	Component = InComponent;
}

SIZE_T FDummySceneProxy::GetTypeHash() const
{
	static size_t UniquePointer;
	return reinterpret_cast<size_t>(&UniquePointer);
}

uint32 FDummySceneProxy::GetMemoryFootprint() const
{
	return sizeof(*this) + GetAllocatedSize();
}

FPrimitiveViewRelevance FDummySceneProxy::GetViewRelevance(const FSceneView* View) const
{
	FPrimitiveViewRelevance Result;
	Result.bDrawRelevance = IsShown(View);
	Result.bDynamicRelevance = true;
	Result.bSeparateTranslucency = Result.bNormalTranslucency = IsShown(View);
	Result.bShadowRelevance = IsShadowCast(View);
	Result.bEditorPrimitiveRelevance = UseEditorCompositing(View);
	return Result;
}

void FDummySceneProxy::GetDynamicMeshElements(const TArray<const FSceneView*>& Views, const FSceneViewFamily& ViewFamily, uint32 VisibilityMap, class FMeshElementCollector& Collector) const
{
	for (int32 ViewIndex = 0; ViewIndex < Views.Num(); ViewIndex++)
	{
		if (VisibilityMap & (1 << ViewIndex))
		{
			const FSceneView* View = Views[ViewIndex];
			FPrimitiveDrawInterface* PDI = Collector.GetPDI(ViewIndex);

			PDI->DrawLine(Component->GetComponentLocation(), Component->GetComponentLocation() - FVector(10000, 0, 0), FLinearColor::White, SDPG_Foreground, 10.f);

		}
	}
}

