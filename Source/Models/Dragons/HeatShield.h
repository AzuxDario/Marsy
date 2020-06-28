#ifndef MARSY_DRAGONS_HEATSHIELD_H
#define MARSY_DRAGONS_HEATSHIELD_H

#include <string>
#include <optional>

namespace Marsy::Models::Dragons
{
    struct HeatShield
    {
        std::optional<std::string> material;
        std::optional<float> sizeMeters;
        std::optional<int> tempDegrees;
        std::optional<std::string> devPartner;
    };
}

#endif