#ifndef MARSY_COMMON_VOLUMEINFO_H
#define MARSY_COMMON_VOLUMEINFO_H

#include <optional>

namespace Marsy::Models::Common
{
    struct VolumeInfo
    {
        std::optional<double> cubicMeters;
        std::optional<double> cubicFeet;
    };
}

#endif