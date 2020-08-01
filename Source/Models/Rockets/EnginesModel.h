#ifndef MARSY_ROCKETS_ENGINES_H
#define MARSY_ROCKETS_ENGINES_H

#include <string>
#include <optional>

#include "IspModel.h"
#include "../Common/ThrustInfoModel.h"

using Marsy::ThrustInfoModel;

namespace Marsy
{
    struct EnginesModel
    {
        std::optional<int> number;
        std::optional<std::string> type;
        std::optional<std::string> version;
        std::optional<std::string> layout;
        std::optional<IspModel> isp;
        std::optional<int> engineLossMax;
        std::optional<std::string> propellant1;
        std::optional<std::string> propellant2;
        std::optional<ThrustInfoModel> thrustSeaLevel;
        std::optional<ThrustInfoModel> thrustVacuum;
        std::optional<double> thrustToWeight;
    };
}

#endif