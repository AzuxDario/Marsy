#ifndef MARSY_CORES_CORE_H
#define MARSY_CORES_CORE_H

#include <string>
#include <vector>
#include <optional>

namespace Marsy::Models::Cores
{
    enum class CoreStatus {active, inactive, unknown, expended, lost, retried}; 

    struct Core
    {
        std::string serial;
        std::optional<int> block = std::nullopt;
        CoreStatus status;
        int reuseCount = 0;
        int rtlsAttemps = 0;
        int rtlsLandings = 0;
        int asdsAttemds = 0;
        int asdsLandings = 0;
        std::optional<std::string> lastUpdate = std::nullopt;
        std::vector<std::string> launches;
        std::optional<std::string> id;
    };
}

#endif