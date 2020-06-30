#ifndef MARSY_DRAGONS_PRESSURIZEDCAPSULE_H
#define MARSY_DRAGONS_PRESSURIZEDCAPSULE_H

#include <optional>

#include "../Common/VolumeInfo.h"

using Marsy::Models::CommonModel::VolumeInfo;

namespace Marsy::Models::DragonModel
{
    struct PressurizedCapsule
    {
        std::optional<VolumeInfo> payloadVolume;
    };
}

#endif