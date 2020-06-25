#ifndef MARSY_LAUNCHES_LAUNCH_H
#define MARSY_LAUNCHES_LAUNCH_H

#include <string>
#include <vector>
#include <optional>

#include "Fairings.h"
#include "Core.h"
#include "Links.h"

namespace Marsy::Models::Launches
{
    enum class DatePrecision {half, quarter, year, month, day, hour};

    struct Launch
    {
        int flightNumber;
        std::string name;
        std::string dateUtc;
        long long dateUnix;
        std::string dateLocal;
        DatePrecision datePrecision;
        std::optional<std::string> staticFireDateUtc = std::nullopt;
        std::optional<std::string> staticFireDateUnix = std::nullopt;
        bool tdb = false;
        bool net = false;
        std::optional<int> window = std::nullopt;
        std::optional<std::string> rocket = std::nullopt;
        std::optional<bool> success = std::nullopt;
        std::vector<std::string> failures;
        bool upcoming;
        std::optional<std::string> details = std::nullopt;
        std::optional<Fairings> fairings;
        std::vector<std::string> crew;
        std::vector<std::string> ships;
        std::vector<std::string> capsules;
        std::vector<std::string> payloads;
        std::optional<std::string> launchpad = std::nullopt;
        std::vector<Core> cores;
        std::optional<Links> links;
        bool autoUpdate = true;
        std::optional<std::string> id;
    };
}

#endif