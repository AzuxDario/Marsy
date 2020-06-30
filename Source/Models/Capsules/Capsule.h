#ifndef MARSY_CAPSULES_CAPSULE_H
#define MARSY_CAPSULES_CAPSULE_H

#include <string>
#include <vector>
#include <optional>

namespace Marsy::Models::CapsuleModel
{
    enum class CapsuleStatus {unknown, active, retired, destroyed}; 

    struct Capsule
    {
        std::optional<std::string> serial;
        std::optional<CapsuleStatus> status;
        std::optional<std::string> dragon;
        std::optional<int> reuseCount = 0;
        std::optional<int> waterLandings = 0;
        std::optional<int> landLandings = 0;
        std::optional<std::string> lastUpdate = std::nullopt;
        std::optional<std::vector<std::string>> launches;
        std::optional<std::string> id;
    };
}

#endif