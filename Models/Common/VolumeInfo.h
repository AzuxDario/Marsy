#ifndef MARSY_COMMON_VOLUMEINFO_H
#define MARSY_COMMON_VOLUMEINFO_H

#include <optional>

namespace Marsy::Common
{
    struct VolumeInfo
    {
        std::optional<float> cubicMeters;
        std::optional<float> cubicFeet;
    };
}

#endif