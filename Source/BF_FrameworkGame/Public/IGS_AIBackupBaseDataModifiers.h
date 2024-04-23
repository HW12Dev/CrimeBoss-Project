#pragma once
#include "CoreMinimal.h"
#include "IGS_AIUnitBaseDataModifiers.h"
#include "IGS_AIBackupBaseDataModifiers.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIBackupBaseDataModifiers : public FIGS_AIUnitBaseDataModifiers {
    GENERATED_BODY()
public:
    FIGS_AIBackupBaseDataModifiers();
};

