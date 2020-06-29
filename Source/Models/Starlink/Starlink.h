#ifndef MARSY_STARLINK_STARLINK_H
#define MARSY_STARLINK_STARLINK_H

#include <string>
#include <optional>

#include "SpaceTrack.h"

namespace Marsy::Models::StarlinkModel
{
    struct Starlink
    {
        std::optional<std::string> version = std::nullopt;
        std::optional<std::string> launch = std::nullopt;
        std::optional<SpaceTrack> spaceTrack;
        std::optional<std::string> id;
    };
}

#endif