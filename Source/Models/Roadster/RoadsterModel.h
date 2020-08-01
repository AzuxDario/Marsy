#ifndef MARSY_ROADSTER_ROADSTER_H
#define MARSY_ROADSTER_ROADSTER_H

#include <string>
#include <vector>
#include <optional>

namespace Marsy
{
    struct RoadsterModel
    {
        std::optional<std::string> name;
        std::optional<std::string> launchDateUtc;
        std::optional<std::string> launchDateUnix;
        std::optional<double> launchMassKilograms;
        std::optional<double> launchMassPounds;
        std::optional<int> noradId;
        std::optional<double> epochJd;
        std::optional<std::string> orbitType;
        std::optional<double> apopasisAu;
        std::optional<double> periapisAu;
        std::optional<double> semiMajorAxisAu;
        std::optional<double> eccentricity;
        std::optional<double> inclination;
        std::optional<double> longitude;
        std::optional<double> periapsisArg;
        std::optional<double> periodDays;
        std::optional<double> speedKph;
        std::optional<double> speedMph;
        std::optional<double> earthDistanceKilometers;
        std::optional<double> earthDistanceMiles;
        std::optional<double> marsDistanceKilometers;
        std::optional<double> marsDistanceMiles;
        std::optional<std::vector<std::string>> flickrImages;
        std::optional<std::string> wikipedia;
        std::optional<std::string> video;
        std::optional<std::string> details;
        std::optional<std::string> id;
    };
}

#endif