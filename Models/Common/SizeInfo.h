#ifndef MARSY_COMMON_SIZEINFO_H
#define MARSY_COMMON_SIZEINFO_H

#include <optional>

namespace Marsy::Models::Common
{
    struct SizeInfo
    {
        std::optional<float> meters;
        std::optional<float> feet;
    };
}

#endif