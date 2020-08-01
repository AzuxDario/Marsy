#ifndef MARSY_DRAGONS_PRESSURIZEDCAPSULE_H
#define MARSY_DRAGONS_PRESSURIZEDCAPSULE_H

#include <optional>

#include "../Common/VolumeInfoModel.h"

namespace Marsy
{
    struct PressurizedCapsuleModel
    {
        std::optional<VolumeInfoModel> payloadVolume;
    };
}

#endif