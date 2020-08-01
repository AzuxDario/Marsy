#ifndef MARSY_STARLINK_STARLINK_H
#define MARSY_STARLINK_STARLINK_H

#include <string>
#include <optional>

#include "SpaceTrackModel.h"

namespace Marsy
{
    struct StarlinkModel
    {
        std::optional<std::string> version = std::nullopt;
        std::optional<std::string> launch = std::nullopt;
        std::optional<double> longitude = std::nullopt;
        std::optional<double> latitude = std::nullopt;
        std::optional<double> heightKilometers = std::nullopt;
        std::optional<double> velocityKilometersPerSecond = std::nullopt;
        std::optional<SpaceTrackModel> spaceTrack;
        std::optional<std::string> id;
    };
}

#endif