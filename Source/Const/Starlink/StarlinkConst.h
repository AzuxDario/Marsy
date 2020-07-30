#ifndef MARSY_STARLINK_STARLINKCONST_H
#define MARSY_STARLINK_STARLINKCONST_H

#include <string>

namespace Marsy::Const::Starlink
{
    struct StarlinkConst
    {
        const std::string strVersion = "version";
        const std::string strLaunch = "launch";
        const std::string strLongitude = "longitude";
        const std::string strLatitude = "latitude";
        const std::string strHeightKm = "height_km";
        const std::string strVelocityKms = "velocity_kms";
        const std::string strSpaceTrack = "spaceTrack";
        const std::string strId = "id";
    };
}

#endif