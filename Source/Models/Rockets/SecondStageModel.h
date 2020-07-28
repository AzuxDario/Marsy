#ifndef MARSY_ROCKETS_SECONDSTAGE_H
#define MARSY_ROCKETS_SECONDSTAGE_H

#include <optional>

#include "PayloadsModel.h"
#include "../Common/ThrustInfoModel.h"

using Marsy::Models::Common::ThrustInfoModel;

namespace Marsy::Models::Rocket
{
    struct SecondStageModel
    {
        std::optional<bool> reusable;
        std::optional<int> engines;
        std::optional<int> fuelAmountTons;
        std::optional<int> burnTimeSeconds;
        std::optional<ThrustInfoModel> thrust;
        std::optional<PayloadsModel> payloads;
    };
}

#endif