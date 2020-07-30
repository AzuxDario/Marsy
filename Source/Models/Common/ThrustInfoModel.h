#ifndef MARSY_COMMON_THRUSTINFO_H
#define MARSY_COMMON_THRUSTINFO_H

#include <optional>

namespace Marsy::Models::Common
{
    struct ThrustInfoModel
    {
        std::optional<double> kilonewtons;
        std::optional<double> poundsforce;
    };
}

#endif