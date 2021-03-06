#ifndef MARSY_SHIPS_SHIP_H
#define MARSY_SHIPS_SHIP_H

#include <string>
#include <vector>
#include <optional>

namespace Marsy
{
    struct ShipModel
    {
        std::optional<std::string> name;
        std::optional<std::string> legacyId = std::nullopt;
        std::optional<std::string> model = std::nullopt;
        std::optional<std::string> type = std::nullopt;
        std::optional<std::vector<std::string>> roles;
        std::optional<bool> active;
        std::optional<int> imo = std::nullopt;
        std::optional<int> mmsi = std::nullopt;
        std::optional<int> abs = std::nullopt;
        std::optional<int> clas = std::nullopt;
        std::optional<double> massKilograms = std::nullopt;
        std::optional<double> massPounds = std::nullopt;
        std::optional<int> yearBuilt = std::nullopt;
        std::optional<std::string> homePort = std::nullopt;
        std::optional<std::string> status = std::nullopt;
        std::optional<double> speedKnots = std::nullopt;
        std::optional<double> courseDegrees = std::nullopt;
        std::optional<double> latitude = std::nullopt;
        std::optional<double> longitude = std::nullopt;
        std::optional<std::string> lastAisUpdate = std::nullopt;
        std::optional<std::string> link = std::nullopt;
        std::optional<std::string> image = std::nullopt;
        std::optional<std::vector<std::string>> launches;
        std::optional<std::string> id;
    };
}

#endif