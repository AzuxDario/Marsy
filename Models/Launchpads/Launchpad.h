#ifndef MARSY_LAUNCHPADS_LAUNCHPAD_H
#define MARSY_LAUNCHPADS_LAUNCHPAD_H

#include <string>
#include <vector>
#include <optional>

namespace Marsy::Launchpads
{
    enum class Status {active, inactive, unknown, retried, lost, underConstruction};

    struct Launchpad
    {
        std::optional<std::string> name = std::nullopt;
        std::optional<std::string> fullName = std::nullopt;
        Status status;
        std::optional<std::string> locality = std::nullopt;
        std::optional<std::string> region = std::nullopt;
        std::optional<std::string> timezone = std::nullopt;
        std::optional<float> latitude = std::nullopt;
        std::optional<float> longitude = std::nullopt;
        int launchAttempts = 0;
        int launchSuccess = 0;
        std::vector<std::string> rockets;
        std::vector<std::string> launches;
        std::optional<std::string> id;
    };
}

#endif