#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetSpinBoxBlueprintEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_WidgetSpinBoxBlueprintEventSignature, int32, InValue);

