#include "HoudiniParameterRampColorPoint.h"

UHoudiniParameterRampColorPoint::UHoudiniParameterRampColorPoint() {
    this->position = 0.00f;
    this->Interpolation = EHoudiniRampInterpolationType::InValid;
    this->InstanceIndex = -1;
    this->PositionParentParm = NULL;
    this->ValueParentParm = NULL;
    this->InterpolationParentParm = NULL;
}


