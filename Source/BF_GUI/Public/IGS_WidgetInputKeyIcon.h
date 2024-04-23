#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputAction.h"
#include "EIGS_InputDevice.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetInputKeyIcon.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetInputKeyIcon : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputKeyCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_InputAction InputActionToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CharacterText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_InputDevice PreviewInputDevice;
    
public:
    UIGS_WidgetInputKeyIcon();

protected:
    UFUNCTION(BlueprintCallable)
    void SetInputActionToShow(EIGS_InputAction InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputKeyCharacterChanged(FName inInputKeyCharacter, bool inIsFallback);
    
    UFUNCTION(BlueprintCallable)
    void OnInputDeviceChanged(EIGS_InputDevice inDevice);
    
    UFUNCTION(BlueprintCallable)
    void ForceChangeInputDevice(EIGS_InputDevice inDevice);
    
};

