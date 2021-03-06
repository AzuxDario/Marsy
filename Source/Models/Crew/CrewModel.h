#ifndef MARSY_CREW_CREW_H
#define MARSY_CREW_CREW_H

#include <string>
#include <vector>
#include <optional>

namespace Marsy
{
    enum class CrewStatus {active, inactive, retired, unknown}; 

    struct CrewModel
    {
        std::optional<std::string> name = std::nullopt;
        std::optional<CrewStatus> status;
        std::optional<std::string> agency = std::nullopt;
        std::optional<std::string> image = std::nullopt;
        std::optional<std::string> wikipedia = std::nullopt;
        std::optional<std::vector<std::string>> launches;
        std::optional<std::string> id;
    };
}

#endif