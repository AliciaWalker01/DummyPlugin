#include "DummyActorAndComponent.h"
#include "DummySceneProxy.h"


FPrimitiveSceneProxy* UDummyComponent::CreateSceneProxy()
{
	return new FDummySceneProxy(this);
}

ADummyActor::ADummyActor()
{
	DummyComponent = CreateDefaultSubobject<UDummyComponent>(FName(TEXT("DummyComponent")));
}
