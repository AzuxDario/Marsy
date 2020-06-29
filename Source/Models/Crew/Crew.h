#ifndef MARSY_CREW_CREW_H
#define MARSY_CREW_CREW_H

#include <string>
#include <vector>
#include <optional>

namespace Marsy::Models::CrewModel
{
    enum class CrewStatus {active, inactive, retried, unknown}; 

    struct Crew
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