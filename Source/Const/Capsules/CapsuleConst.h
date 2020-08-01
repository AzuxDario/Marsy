#ifndef MARSY_CAPSULE_CAPSULECONST_H
#define MARSY_CAPSULE_CAPSULECONST_H

#include <string>

namespace Marsy
{
    struct CapsuleConst
    {
        const std::string strSerial = "serial";
        const std::string strStatus = "status";
        const std::string strDragon = "dragon";
        const std::string strReuseCount = "reuse_count";
        const std::string strWaterLanding = "water_landings";
        const std::string strLandLanding = "land_landings";
        const std::string strLastUpdate = "last_update";
        const std::string strLaunches = "launches";
        const std::string strId = "id";
        const std::string strStatusUnknown = "unknown";
        const std::string strStatusActive = "active";
        const std::string strStatusRetired = "retired";
        const std::string strStatusDestroyed = "destroyed";
    };
}

#endif