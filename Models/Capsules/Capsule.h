#ifndef CAPSULE_H
#define CAPSULE_H

#include <string>
#include <vector>
#include <optional>

namespace Marsy
{
    enum class CapsuleStatus {unknown, active, retried, destroyed}; 

    struct Capsule
    {
        std::string serial;
        CapsuleStatus status;
        std::string dragon;
        int reuseCount = 0;
        int waterLandings = 0;
        int landLandings = 0;
        std::optional<std::string> lastUpdate = std::nullopt;
        std::vector<std::string> launches;
    };
}
#endif