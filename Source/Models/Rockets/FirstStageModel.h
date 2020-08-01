#ifndef MARSY_ROCKETS_FIRSTSTAGE_H
#define MARSY_ROCKETS_FIRSTSTAGE_H

#include <optional>

#include "../Common/ThrustInfoModel.h"

using Marsy::ThrustInfoModel;

namespace Marsy
{
    struct FirstStageModel
    {
        std::optional<bool> reusable;
        std::optional<int> engines;
        std::optional<int> fuelAmountTons;
        std::optional<int> burnTimeSeconds;
        std::optional<ThrustInfoModel> thrustSeaLevel;
        std::optional<ThrustInfoModel> thrustVacuum;
    };
}

#endif