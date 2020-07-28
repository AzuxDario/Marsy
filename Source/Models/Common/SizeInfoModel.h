#ifndef MARSY_COMMON_SIZEINFO_H
#define MARSY_COMMON_SIZEINFO_H

#include <optional>

namespace Marsy::Models::Common
{
    struct SizeInfoModel
    {
        std::optional<double> meters;
        std::optional<double> feet;
    };
}

#endif