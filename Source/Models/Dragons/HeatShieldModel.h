#ifndef MARSY_DRAGONS_HEATSHIELD_H
#define MARSY_DRAGONS_HEATSHIELD_H

#include <string>
#include <optional>

namespace Marsy
{
    struct HeatShieldModel
    {
        std::optional<std::string> material;
        std::optional<double> sizeMeters;
        std::optional<int> tempDegrees;
        std::optional<std::string> devPartner;
    };
}

#endif