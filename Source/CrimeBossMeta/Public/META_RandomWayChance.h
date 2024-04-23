#pragma once
#include "CoreMinimal.h"
#include "META_AdditionalConditionChance.h"
#include "META_RandomWayChance.generated.h"

USTRUCT(BlueprintType)
struct FMETA_RandomWayChance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_AdditionalConditionChance> Conditions;
    
    CRIMEBOSSMETA_API FMETA_RandomWayChance();
};

