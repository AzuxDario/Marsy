#ifndef MARSY_LAUNCHES_LAUNCHCORE_H
#define MARSY_LAUNCHES_LAUNCHCORE_H

#include <string>
#include <optional>

namespace Marsy
{
    struct LaunchCoreModel
    {
        std::optional<std::string> core = std::nullopt;
        std::optional<int> flight = std::nullopt;
        std::optional<bool> gridfins = std::nullopt;
        std::optional<bool> legs = std::nullopt;
        std::optional<bool> reused = std::nullopt;
        std::optional<bool> landingAttempt = std::nullopt;
        std::optional<bool> landingSuccess = std::nullopt;
        std::optional<std::string> landingType = std::nullopt;
        std::optional<std::string> landpad = std::nullopt;
    };
}

#endif