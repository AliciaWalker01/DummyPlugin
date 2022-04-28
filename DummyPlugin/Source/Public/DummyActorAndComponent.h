#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "DummyActorAndComponent.generated.h"

UCLASS()
class UDummyComponent : public UPrimitiveComponent
{
	GENERATED_BODY()

public:

	FPrimitiveSceneProxy* CreateSceneProxy() override;

};

UCLASS()
class ADummyActor : public AActor
{
	GENERATED_BODY()

	ADummyActor();

public:

	UPROPERTY(EditAnywhere)
	UDummyComponent* DummyComponent;

};