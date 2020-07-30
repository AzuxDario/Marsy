#ifndef MARSY_LAUNCHES_CORECONST_H
#define MARSY_LAUNCHES_CORECONST_H

#include <string>

namespace Marsy::Const::Launch
{
    struct CoreConst
    {
        const std::string strCore = "core";
        const std::string strFlight = "flight";
        const std::string strGridfins = "gridfins";
        const std::string strLegs = "legs";
        const std::string strReused = "reused";
        const std::string strLandingAttempt = "landing_attempt";
        const std::string strLandingSuccess = "landing_success";
        const std::string strLandingType = "landing_type";
        const std::string strLandpad = "landpad";
    };
}

#endif