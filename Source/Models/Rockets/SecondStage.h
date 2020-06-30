#ifndef MARSY_ROCKETS_SECONDSTAGE_H
#define MARSY_ROCKETS_SECONDSTAGE_H

#include <optional>

#include "Payloads.h"
#include "../Common/ThrustInfo.h"

using Marsy::Models::CommonModel::ThrustInfo;

namespace Marsy::Models::RocketsModel
{
    struct SecondStage
    {
        std::optional<bool> reusable;
        std::optional<int> engines;
        std::optional<int> fuelAmountTons;
        std::optional<int> burnTimeSeconds;
        std::optional<ThrustInfo> thrust;
        std::optional<Payloads> payloads;
    };
}

#endif