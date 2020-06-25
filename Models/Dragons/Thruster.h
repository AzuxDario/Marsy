#ifndef MARSY_DRAGONS_THRUSTER_H
#define MARSY_DRAGONS_THRUSTER_H

#include <string>
#include <optional>

#include "../Common/ThrustInfo.h"

namespace Marsy::Models::Dragons
{
    struct Thruster
    {
        std::optional<std::string> type;
        std::optional<int> amount;
        std::optional<int> pods;
        std::optional<std::string> fuel1;
        std::optional<std::string> fuel2;
        std::optional<int> isp;
        std::optional<Common::ThrustInfo> thrust;
    };
}

#endif