#ifndef MARSY_STARLINK_SPACETRACK_H
#define MARSY_STARLINK_SPACETRACK_H

#include <string>
#include <optional>

namespace Marsy::Models::Starlink
{
    struct SpaceTrackModel
    {
        std::optional<std::string> ccsdsOmmVers = std::nullopt;
        std::optional<std::string> comment = std::nullopt;
        std::optional<std::string> creationDate = std::nullopt;
        std::optional<std::string> originator = std::nullopt;
        std::optional<std::string> objectName = std::nullopt;
        std::optional<std::string> objectId = std::nullopt;
        std::optional<std::string> centerName = std::nullopt;
        std::optional<std::string> refFrame = std::nullopt;
        std::optional<std::string> timeSystem = std::nullopt;
        std::optional<std::string> meanElementTheory = std::nullopt;
        std::optional<std::string> epoch = std::nullopt;
        std::optional<double> meanMotion = std::nullopt;
        std::optional<double> eccentricity = std::nullopt;
        std::optional<double> inclination = std::nullopt;
        std::optional<double> raOfAscNode = std::nullopt;
        std::optional<double> ArgOfPericenter = std::nullopt;
        std::optional<double> meanAnomaly = std::nullopt;
        std::optional<int> ephemerisType = std::nullopt;
        std::optional<std::string> classificationType = std::nullopt;
        std::optional<int> noradCatId = std::nullopt;
        std::optional<int> elementSetNo = std::nullopt;
        std::optional<int> revAtEpoch = std::nullopt;
        std::optional<double> bstar = std::nullopt;
        std::optional<double> meanMotionDot = std::nullopt;
        std::optional<double> meanMotionDdot = std::nullopt;
        std::optional<double> semimajorAxis = std::nullopt;
        std::optional<double> period = std::nullopt;
        std::optional<double> apoapsis = std::nullopt;
        std::optional<double> periapsis = std::nullopt;
        std::optional<std::string> objectType = std::nullopt;
        std::optional<std::string> rcsSize = std::nullopt;
        std::optional<std::string> countryCode = std::nullopt;
        std::optional<std::string> launchDate = std::nullopt;
        std::optional<std::string> site = std::nullopt;
        std::optional<std::string> decayDate = std::nullopt;
        std::optional<int> decayed = std::nullopt;
        std::optional<int> file = std::nullopt;
        std::optional<int> gpId = std::nullopt;
        std::optional<std::string> tleLine0 = std::nullopt;
        std::optional<std::string> tleLine1 = std::nullopt;
        std::optional<std::string> tleLine2 = std::nullopt;
    };
}

#endif