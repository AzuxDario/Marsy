#ifndef MARSY_SHIPS_SHIP_H
#define MARSY_SHIPS_SHIP_H

#include <string>
#include <vector>
#include <optional>

namespace Marsy::Ships
{
    struct Ship
    {
        std::string name;
        std::optional<std::string> legacyId = std::nullopt;
        std::optional<std::string> id;
    };
}

#endif