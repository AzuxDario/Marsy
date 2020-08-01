#ifndef MARSY_ROCKETS_ISP_H
#define MARSY_ROCKETS_ISP_H

#include <optional>

namespace Marsy
{
    struct IspModel
    {
        std::optional<double> seaLevel;
        std::optional<double> vacuum;
    };
}

#endif