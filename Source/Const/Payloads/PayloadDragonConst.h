#ifndef MARSY_PAYLOADS_PAYLOADDRAGONCONST_H
#define MARSY_PAYLOADS_PAYLOADDRAGONCONST_H

#include <string>

namespace Marsy
{
    struct PayloadDragonConst
    {
        const std::string strCapsule = "capsule";
        const std::string strMassReturnedKg = "mass_returned_kg";
        const std::string strMassReturnedLbs = "mass_returned_lbs";
        const std::string strFlightTimeSec = "flight_time_sec";
        const std::string strManifest = "manifest";
        const std::string strWaterLanding = "water_landing";
        const std::string strLandLanding = "land_landing";
    };
}

#endif