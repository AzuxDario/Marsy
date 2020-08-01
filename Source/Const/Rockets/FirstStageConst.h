#ifndef MARSY_ROCKETS_FIRSTSTAGECONST_H
#define MARSY_ROCKETS_FIRSTSTAGECONST_H

#include <string>

namespace Marsy
{
    struct FirstStageConst
    {
        const std::string strReusable = "reusable";
        const std::string strEngines = "engines";
        const std::string strFuelAmountTons = "fuel_amount_tons";
        const std::string strBurnTimeSec = "burn_time_sec";
        const std::string strThrustSeaLevel = "thrust_sea_level";
        const std::string strThrustVacuum = "thrust_vacuum";
    };
}

#endif