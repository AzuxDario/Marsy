#ifndef MARSY_COMMON_MASSINFO_H
#define MARSY_COMMON_MASSINFO_H

#include <optional>

namespace Marsy::Models::Common
{
    struct MassInfoModel
    {
        std::optional<double> kilograms;
        std::optional<double> pounds;
    };
}

#endif