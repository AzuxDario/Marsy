#ifndef MARSY_LAUNCHPADS_LAUNCHPAD_H
#define MARSY_LAUNCHPADS_LAUNCHPAD_H

#include <string>
#include <vector>
#include <optional>

namespace Marsy::Models::Launchpads
{
    enum class Status {active, inactive, unknown, retried, lost, underConstruction};

    struct Launchpad
    {
        std::optional<std::string> name = std::nullopt;
        std::optional<std::string> fullName = std::nullopt;
        std::optional<Status> status;
        std::optional<std::string> locality = std::nullopt;
        std::optional<std::string> region = std::nullopt;
        std::optional<std::string> timezone = std::nullopt;
        std::optional<float> latitude = std::nullopt;
        std::optional<float> longitude = std::nullopt;
        std::optional<int> launchAttempts = 0;
        std::optional<int> launchSuccess = 0;
        std::optional<std::vector<std::string>> rockets;
        std::optional<std::vector<std::string>> launches;
        std::optional<std::string> id;
    };
}

#endif