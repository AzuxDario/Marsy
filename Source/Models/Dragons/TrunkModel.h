#ifndef MARSY_DRAGONS_TRUNK_H
#define MARSY_DRAGONS_TRUNK_H

#include <optional>

#include "CargoModel.h"
#include "../Common/VolumeInfoModel.h"

using Marsy::Models::Common::VolumeInfoModel;

namespace Marsy::Models::Dragon
{
    struct TrunkModel
    {
        std::optional<VolumeInfoModel> trunkVolume;
        std::optional<CargoModel> cargo;
    };
}

#endif