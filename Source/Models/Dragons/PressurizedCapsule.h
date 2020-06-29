#ifndef MARSY_DRAGONS_PRESSURIZEDCAPSULE_H
#define MARSY_DRAGONS_PRESSURIZEDCAPSULE_H

#include <optional>

#include "../Common/VolumeInfo.h"

namespace Marsy::Models::DragonModel
{
    struct PressurizedCapsule
    {
        std::optional<Common::VolumeInfo> payloadVolume;
    };
}

#endif