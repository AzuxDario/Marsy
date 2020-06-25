#ifndef MARSY_DRAGONS_TRUNK_H
#define MARSY_DRAGONS_TRUNK_H

#include <optional>

#include "Cargo.h"
#include "../Common/VolumeInfo.h"

namespace Marsy::Models::Dragons
{
    struct Trunk
    {
        std::optional<Common::VolumeInfo> trunkVolume;
        std::optional<Cargo> cargo;
    };
}

#endif