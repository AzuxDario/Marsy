#ifndef MARSY_DRAGONS_TRUNK_H
#define MARSY_DRAGONS_TRUNK_H

#include <optional>

#include "CargoModel.h"
#include "../Common/VolumeInfoModel.h"

using Marsy::VolumeInfoModel;

namespace Marsy
{
    struct TrunkModel
    {
        std::optional<VolumeInfoModel> trunkVolume;
        std::optional<CargoModel> cargo;
    };
}

#endif