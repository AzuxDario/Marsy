#ifndef MARSY_LAUNCHES_FAIRINGS_H
#define MARSY_LAUNCHES_FAIRINGS_H

#include <string>
#include <vector>
#include <optional>

namespace Marsy
{
    struct FairingsModel
    {
        std::optional<bool> reused = std::nullopt;
        std::optional<bool> recoveryAttempt = std::nullopt;
        std::optional<bool> recovered = std::nullopt;
        std::optional<std::vector<std::string>> ships;
    };
}

#endif