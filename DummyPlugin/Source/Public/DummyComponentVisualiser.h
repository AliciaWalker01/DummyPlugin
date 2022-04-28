#pragma once
#include "ComponentVisualizer.h"

class FDummyComponentVisualiser : public FComponentVisualizer
{
public:
	FDummyComponentVisualiser();

	/** Begin FComponentVisualizer Interface  */
	void DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI) override;
	/** End FComponentVisualizer Interface  */
private:

};