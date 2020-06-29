#ifndef MARSY_ROCKETS_FIRSTSTAGE_H
#define MARSY_ROCKETS_FIRSTSTAGE_H

#include <optional>

#include "../Common/ThrustInfo.h"

namespace Marsy::Models::Rockets
{
    struct FirstStage
    {
        std::optional<bool> reusable;
        std::optional<int> engines;
        std::optional<int> fuelAmountTons;
        std::optional<int> burnTimeSeconds;
        std::optional<Common::ThrustInfo> thrustSeaLevel;
        std::optional<Common::ThrustInfo> thrustVacuum;
    };
}

#endif