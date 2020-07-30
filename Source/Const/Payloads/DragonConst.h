#ifndef MARSY_PAYLOADS_DRAGONCONST_H
#define MARSY_PAYLOADS_DRAGONCONST_H

#include <string>

namespace Marsy::Const::Payload
{
    struct DragonConst
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