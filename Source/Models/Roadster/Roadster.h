#ifndef MARSY_ROADSTER_ROADSTER_H
#define MARSY_ROADSTER_ROADSTER_H

#include <string>
#include <vector>
#include <optional>

namespace Marsy::Models::Roadster
{
    struct Roadster
    {
        std::optional<std::string> name;
        std::optional<std::string> launchDateUtc;
        std::optional<std::string> launchDateUnix;
        std::optional<float> launchMassKilograms;
        std::optional<float> launchMassPounds;
        std::optional<int> noradId;
        std::optional<float> epochJd;
        std::optional<std::string> orbitType;
        std::optional<float> apopasisAu;
        std::optional<float> periapisAu;
        std::optional<float> semiMajorAxisAu;
        std::optional<float> eccentricity;
        std::optional<float> inclination;
        std::optional<float> longitude;
        std::optional<float> periapsisArg;
        std::optional<float> periodDays;
        std::optional<float> speedKph;
        std::optional<float> speedMph;
        std::optional<float> earthDistanceKilometers;
        std::optional<float> earthDistanceMiles;
        std::optional<float> marsDistanceKilometers;
        std::optional<float> marsDistanceMiles;
        std::vector<std::string> flickrImages;
        std::optional<std::string> wikipedia;
        std::optional<std::string> video;
        std::optional<std::string> details;
        std::optional<std::string> id;
    };
}

#endif