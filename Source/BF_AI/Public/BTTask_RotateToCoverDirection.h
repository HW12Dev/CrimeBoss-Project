#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_RotateToCoverDirection.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_RotateToCoverDirection : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccaptedAngle;
    
public:
    UBTTask_RotateToCoverDirection();

};

