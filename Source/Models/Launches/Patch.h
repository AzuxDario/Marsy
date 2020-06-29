#ifndef MARSY_LAUNCHES_PATCH_H
#define MARSY_LAUNCHES_PATCH_H

#include <string>
#include <optional>

namespace Marsy::Models::LaunchModel
{
    struct Patch
    {
        std::optional<std::string> small = std::nullopt;
        std::optional<std::string> large = std::nullopt;
    }; 
}

#endif