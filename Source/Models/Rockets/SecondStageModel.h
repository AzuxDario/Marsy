#ifndef MARSY_ROCKETS_SECONDSTAGE_H
#define MARSY_ROCKETS_SECONDSTAGE_H

#include <optional>

#include "RocketPayloadModel.h"
#include "../Common/ThrustInfoModel.h"

using Marsy::ThrustInfoModel;

namespace Marsy
{
    struct SecondStageModel
    {
        std::optional<bool> reusable;
        std::optional<int> engines;
        std::optional<int> fuelAmountTons;
        std::optional<int> burnTimeSeconds;
        std::optional<ThrustInfoModel> thrust;
        std::optional<RocketPayloadModel> payloads;
    };
}

#endif