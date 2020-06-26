#ifndef MARSY_COMMON_MASSINFO_H
#define MARSY_COMMON_MASSINFO_H

#include <optional>

namespace Marsy::Models::Common
{
    struct MassInfo
    {
        std::optional<float> kilograms;
        std::optional<float> pounds;
    };
}

#endif