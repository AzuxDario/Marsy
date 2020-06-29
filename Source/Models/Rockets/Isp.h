#ifndef MARSY_ROCKETS_ISP_H
#define MARSY_ROCKETS_ISP_H

#include <optional>

namespace Marsy::Models::RocketsModel
{
    struct Isp
    {
        std::optional<double> seaLevel;
        std::optional<double> vacuum;
    };
}

#endif