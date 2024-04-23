#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_CharacterSkinTableRow.h"
#include "IGS_CharacterSkinDatabase.generated.h"

class APaperDollAbstract;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_CharacterSkinDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_CharacterSkinDatabase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex(FGameplayTag inID) const;
    
    UFUNCTION(BlueprintCallable)
    static FIGS_CharacterSkinTableRow GetDataCharacterSkin(UObject* inWCO, FGameplayTag inID, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_CharacterSkinTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;
    
    UFUNCTION(BlueprintCallable)
    static TSoftClassPtr<APaperDollAbstract> GetCharacterPaperDoll(UObject* inWCO, FGameplayTag inID);
    
};

