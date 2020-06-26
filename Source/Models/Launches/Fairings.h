#ifndef MARSY_LAUNCHES_FAIRINGS_H
#define MARSY_LAUNCHES_FAIRINGS_H

#include <string>
#include <vector>
#include <optional>

namespace Marsy::Models::Launches
{
    struct Fairings
    {
        std::optional<bool> reused = std::nullopt;
        std::optional<bool> recoveryAttempt = std::nullopt;
        std::optional<bool> recovered = std::nullopt;
        std::vector<std::string> ships;
    };
}

#endif