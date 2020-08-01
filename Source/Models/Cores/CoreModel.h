#ifndef MARSY_CORES_CORE_H
#define MARSY_CORES_CORE_H

#include <string>
#include <vector>
#include <optional>

namespace Marsy
{
    enum class CoreStatus {active, inactive, unknown, expended, lost, retired}; 

    struct CoreModel
    {
        std::optional<std::string> serial;
        std::optional<int> block = std::nullopt;
        std::optional<CoreStatus> status;
        std::optional<int> reuseCount = 0;
        std::optional<int> rtlsAttemps = 0;
        std::optional<int> rtlsLandings = 0;
        std::optional<int> asdsAttemds = 0;
        std::optional<int> asdsLandings = 0;
        std::optional<std::string> lastUpdate = std::nullopt;
        std::optional<std::vector<std::string>> launches;
        std::optional<std::string> id;
    };
}

#endif