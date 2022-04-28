#pragma once
#include "PrimitiveSceneProxy.h"

class UDummyComponent;

class FDummySceneProxy final :public FPrimitiveSceneProxy
{
public:
	FDummySceneProxy(const UDummyComponent* InComponent);

	SIZE_T GetTypeHash() const override;
	virtual uint32 GetMemoryFootprint() const override;


	virtual FPrimitiveViewRelevance GetViewRelevance(const FSceneView* View) const override;
	void GetDynamicMeshElements(const TArray<const FSceneView*>& Views, const FSceneViewFamily& ViewFamily, uint32 VisibilityMap, class FMeshElementCollector& Collector) const override;

private:
	const UDummyComponent* Component;

};