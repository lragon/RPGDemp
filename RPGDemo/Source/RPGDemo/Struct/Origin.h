#pragma once

#include "CoreMinimal.h"
#include "Origin.generated.h"

class AActor;
class AController;

USTRUCT(BlueprintType)
struct FOrigin
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	AActor* Actor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	AController* Controller;
};
