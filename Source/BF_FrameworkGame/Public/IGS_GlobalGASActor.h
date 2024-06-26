#pragma once
#include "CoreMinimal.h"
#include "IGS_GameplayTagAssetInterfaceCustom.h"
#include "GameFramework/Actor.h"
#include "AbilitySystemInterface.h"
#include "IGS_GlobalGASActor.generated.h"

class AIGS_GlobalGASActor;
class UIGS_GetActorByGameplayTagComponent;
class UIGS_GlobalGASAttributeSet;
class UIGS_GlobalGASComponent;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_GlobalGASActor : public AActor, public IIGS_GameplayTagAssetInterfaceCustom, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_GlobalGASComponent* GlobalGASComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_GlobalGASAttributeSet* GlobalGASAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_GetActorByGameplayTagComponent* GetActorByGameplayTagComponent;
    
public:
    AIGS_GlobalGASActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static AIGS_GlobalGASActor* GetGlobalGASActor(UObject* inWCO);
    

    // Fix for true pure virtual functions not being implemented
    void GetOwnedGameplayTags(FGameplayTagContainer & TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags);

    UAbilitySystemComponent* GetAbilitySystemComponent() const override {PURE_VIRTUAL(GetAbilitySystemComponent) return nullptr;};
};

