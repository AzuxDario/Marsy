#ifndef MARSY_ROCKETS_SECONDSTAGE_H
#define MARSY_ROCKETS_SECONDSTAGE_H

#include <optional>

#include "Payloads.h"
#include "../Common/ThrustInfo.h"

namespace Marsy::Rockets
{
    struct SecondStage
    {
        std::optional<bool> reusable;
        std::optional<int> engines;
        std::optional<int> fuelAmountTons;
        std::optional<int> burnTimeSeconds;
        std::optional<Common::ThrustInfo> thrust;
        std::optional<Payloads> payloads;
    };
}

#endif