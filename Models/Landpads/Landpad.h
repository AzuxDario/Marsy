#ifndef MARSY_LANDPADS_LANDPAD_H
#define MARSY_LANDPADS_LANDPAD_H

#include <string>
#include <vector>
#include <optional>

namespace Marsy::Models::Landpads
{
    struct Landpad
    {
        std::optional<std::string> name = std::nullopt;
        std::optional<std::string> fullName = std::nullopt;
        std::optional<std::string> status = std::nullopt;
        std::optional<std::string> type = std::nullopt;
        std::optional<std::string> locality = std::nullopt;
        std::optional<std::string> region = std::nullopt;
        std::optional<float> latitude = std::nullopt;
        std::optional<float> longitude = std::nullopt;
        int landingAttempts = 0;
        int landingSuccess = 0;
        std::optional<std::string> wikipedia = std::nullopt;
        std::optional<std::string> details = std::nullopt;
        std::vector<std::string> launches;
        std::optional<std::string> id;
    };
}

#endif