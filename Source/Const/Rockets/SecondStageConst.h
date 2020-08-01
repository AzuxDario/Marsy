#ifndef MARSY_ROCKETS_SECONDSTAGECONST_H
#define MARSY_ROCKETS_SECONDSTAGECONST_H

#include <string>

namespace Marsy
{
    struct SecondStageConst
    {
        const std::string strReusable = "reusable";
        const std::string strEngines = "engines";
        const std::string strFuelAmountTons = "fuel_amount_tons";
        const std::string strBurnTimeSec = "burn_time_sec";
        const std::string strThrust = "thrust";
        const std::string strPayloads = "payloads";
    };
}

#endif