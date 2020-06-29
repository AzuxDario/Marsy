#ifndef MARSY_PAYLOADS_PAYLOAD_H
#define MARSY_PAYLOADS_PAYLOAD_H

#include <string>
#include <vector>
#include <optional>

#include "Dragon.h"

namespace Marsy::Models::PayloadModel
{
    struct Payload
    {
        std::optional<std::string> name = std::nullopt;
        std::optional<std::string> type = std::nullopt;
        std::optional<bool> reused = false;
        std::optional<std::string> launch = std::nullopt;
        std::optional<std::vector<std::string>> customers;
        std::optional<std::vector<int>> noradIds;
        std::optional<std::vector<std::string>> nationalities;
        std::optional<std::vector<std::string>> manufacturers;
        std::optional<double> massKilograms = std::nullopt;
        std::optional<double> massPounds = std::nullopt;
        std::optional<std::string> orbit = std::nullopt;
        std::optional<std::string> referenceSystem = std::nullopt;
        std::optional<std::string> regtime = std::nullopt;
        std::optional<double> longitude = std::nullopt;
        std::optional<double> semiMajorAxisKilometers = std::nullopt;
        std::optional<double> eccentricity = std::nullopt;
        std::optional<double> periapsisKilometers = std::nullopt;
        std::optional<double> apoapsisKilometers = std::nullopt;
        std::optional<double> inclinationDegrees = std::nullopt;
        std::optional<double> periodMin = std::nullopt;
        std::optional<int> lifespanYears = std::nullopt;
        std::optional<std::string> epoch = std::nullopt;
        std::optional<double> meanMotion = std::nullopt;
        std::optional<double> raan = std::nullopt;
        std::optional<double> argOfPercenter = std::nullopt;
        std::optional<double> meanAnomaly = std::nullopt;
        std::optional<Dragon> dragon;
        std::optional<std::string> id;
    };
}

#endif