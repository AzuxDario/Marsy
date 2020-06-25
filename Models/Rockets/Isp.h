#ifndef MARSY_ROCKETS_ISP_H
#define MARSY_ROCKETS_ISP_H

#include <optional>

namespace Marsy::Rockets
{
    struct Isp
    {
        std::optional<float> seaLevel;
        std::optional<float> vacuum;
    };
}

#endif