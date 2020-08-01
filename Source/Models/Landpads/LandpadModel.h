#ifndef MARSY_LANDPADS_LANDPAD_H
#define MARSY_LANDPADS_LANDPAD_H

#include <string>
#include <vector>
#include <optional>

namespace Marsy
{
    enum class LandpadStatus {active, inactive, unknown, retired, lost, underConstruction};

    struct LandpadModel
    {
        std::optional<std::string> name = std::nullopt;
        std::optional<std::string> fullName = std::nullopt;
        std::optional<LandpadStatus> status = std::nullopt;
        std::optional<std::string> type = std::nullopt;
        std::optional<std::string> locality = std::nullopt;
        std::optional<std::string> region = std::nullopt;
        std::optional<double> latitude = std::nullopt;
        std::optional<double> longitude = std::nullopt;
        std::optional<int> landingAttempts = 0;
        std::optional<int> landingSuccess = 0;
        std::optional<std::string> wikipedia = std::nullopt;
        std::optional<std::string> details = std::nullopt;
        std::optional<std::vector<std::string>> launches;
        std::optional<std::string> id;
    };
}

#endif