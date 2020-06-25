#ifndef MARSY_ROCKETS_LANDINGLEGS_H
#define MARSY_ROCKETS_LANDINGLEGS_H

#include <string>
#include <optional>

namespace Marsy::Rockets
{
    struct LandingLegs
    {
        std::optional<int> number;
        std::optional<std::string> material;
    };   
}

#endif