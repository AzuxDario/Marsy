#ifndef MARSY_LAUNCHES_LAUNCH_H
#define MARSY_LAUNCHES_LAUNCH_H

#include <string>
#include <vector>
#include <optional>

#include "Fairings.h"
#include "Core.h"
#include "Links.h"

namespace Marsy::Models::LaunchModel
{
    enum class DatePrecision {half, quarter, year, month, day, hour};

    struct Launch
    {
        std::optional<int> flightNumber;
        std::optional<std::string> name;
        std::optional<std::string> dateUtc;
        std::optional<long long> dateUnix;
        std::optional<std::string> dateLocal;
        std::optional<DatePrecision> datePrecision;
        std::optional<std::string> staticFireDateUtc = std::nullopt;
        std::optional<std::string> staticFireDateUnix = std::nullopt;
        std::optional<bool> tdb = false;
        std::optional<bool> net = false;
        std::optional<int> window = std::nullopt;
        std::optional<std::string> rocket = std::nullopt;
        std::optional<bool> success = std::nullopt;
        std::optional<std::vector<std::string>> failures;
        std::optional<bool> upcoming;
        std::optional<std::string> details = std::nullopt;
        std::optional<Fairings> fairings;
        std::optional<std::vector<std::string>> crew;
        std::optional<std::vector<std::string>> ships;
        std::optional<std::vector<std::string>> capsules;
        std::optional<std::vector<std::string>> payloads;
        std::optional<std::string> launchpad = std::nullopt;
        std::optional<std::vector<Core>> cores;
        std::optional<Links> links;
        std::optional<bool> autoUpdate = true;
        std::optional<std::string> id;
    };
}

#endif