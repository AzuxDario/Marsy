#ifndef MARSY_ROCKETS_ENGINES_H
#define MARSY_ROCKETS_ENGINES_H

#include <string>
#include <optional>

#include "Isp.h"
#include "../Common/ThrustInfo.h"

using Marsy::Models::CommonModel::ThrustInfo;

namespace Marsy::Models::RocketsModel
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
        std::optional<ThrustInfo> thrustSeaLevel;
        std::optional<ThrustInfo> thrustVacuum;
        std::optional<double> thrustToWeight;
    };
}

#endif