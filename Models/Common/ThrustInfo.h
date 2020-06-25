#ifndef MARSY_COMMON_THRUSTINFO_H
#define MARSY_COMMON_THRUSTINFO_H

#include <optional>

namespace Marsy::Models::Common
{
    struct ThrustInfo
    {
        std::optional<float> kilonewtons;
        std::optional<float> poundsforce;
    };
}

#endif