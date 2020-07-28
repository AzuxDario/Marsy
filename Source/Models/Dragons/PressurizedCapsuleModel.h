#ifndef MARSY_DRAGONS_PRESSURIZEDCAPSULE_H
#define MARSY_DRAGONS_PRESSURIZEDCAPSULE_H

#include <optional>

#include "../Common/VolumeInfoModel.h"

using Marsy::Models::Common::VolumeInfoModel;

namespace Marsy::Models::Dragon
{
    struct PressurizedCapsuleModel
    {
        std::optional<VolumeInfoModel> payloadVolume;
    };
}

#endif