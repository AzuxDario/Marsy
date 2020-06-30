#ifndef MARSY_ROCKETS_FIRSTSTAGE_H
#define MARSY_ROCKETS_FIRSTSTAGE_H

#include <optional>

#include "../Common/ThrustInfo.h"

using Marsy::Models::CommonModel::ThrustInfo;

namespace Marsy::Models::RocketsModel
{
    struct FirstStage
    {
        std::optional<bool> reusable;
        std::optional<int> engines;
        std::optional<int> fuelAmountTons;
        std::optional<int> burnTimeSeconds;
        std::optional<ThrustInfo> thrustSeaLevel;
        std::optional<ThrustInfo> thrustVacuum;
    };
}

#endif