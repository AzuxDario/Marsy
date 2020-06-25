#ifndef MARSY_ROCKETS_ENGINES_H
#define MARSY_ROCKETS_ENGINES_H

#include <string>
#include <optional>

#include "Isp.h"
#include "../Common/ThrustInfo.h"

namespace Marsy::Models::Rockets
{
    struct Engines
    {
        std::optional<int> number;
        std::optional<std::string> type;
        std::optional<std::string> version;
        std::optional<std::string> layout;
        std::optional<Isp> isp;
        std::optional<int> engineLossMax;
        std::optional<std::string> propellant1;
        std::optional<std::string> propellant2;
        std::optional<Common::ThrustInfo> thrustSeaLevel;
        std::optional<Common::ThrustInfo> thrustVacuum;
        std::optional<float> thrustToWeight;
    };
}

#endif