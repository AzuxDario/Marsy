#ifndef MARSY_PAYLOADS_PAYLOAD_H
#define MARSY_PAYLOADS_PAYLOAD_H

#include <string>
#include <vector>
#include <optional>

#include "Dragon.h"

namespace Marsy::Models::Payloads
{
    struct Payload
    {
        std::optional<std::string> name = std::nullopt;
        std::optional<std::string> type = std::nullopt;
        bool reused = false;
        std::optional<std::string> launch = std::nullopt;
        std::vector<std::string> customers;
        std::vector<int> noradIds;
        std::vector<std::string> nationalities;
        std::vector<std::string> manufacturers;
        std::optional<float> massKilograms = std::nullopt;
        std::optional<float> massPounds = std::nullopt;
        std::optional<std::string> orbit = std::nullopt;
        std::optional<std::string> referenceSystem = std::nullopt;
        std::optional<std::string> regtime = std::nullopt;
        std::optional<float> longitude = std::nullopt;
        std::optional<float> semiMajorAxisKilometers = std::nullopt;
        std::optional<float> eccentricity = std::nullopt;
        std::optional<float> periapsisKilometers = std::nullopt;
        std::optional<float> apoapsisKilometers = std::nullopt;
        std::optional<float> inclinationDegrees = std::nullopt;
        std::optional<float> periodMin = std::nullopt;
        std::optional<int> lifespanYears = std::nullopt;
        std::optional<std::string> epoch = std::nullopt;
        std::optional<float> meanMotion = std::nullopt;
        std::optional<float> raan = std::nullopt;
        std::optional<float> argOfPercenter = std::nullopt;
        std::optional<float> meanAnomaly = std::nullopt;
        std::optional<Dragon> dragon;
        std::optional<std::string> id;
    };
}

#endif