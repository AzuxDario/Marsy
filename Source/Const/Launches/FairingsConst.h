#ifndef MARSY_LAUNCHES_FAIRINGSCONST_H
#define MARSY_LAUNCHES_FAIRINGSCONST_H

#include <string>

namespace Marsy
{
    struct FairingsConst
    {
        const std::string strReused = "reused";
        const std::string strRecoveryAttempt = "recovery_attempt";
        const std::string strRecovered = "recovered";
        const std::string strShips = "ships";
    };
}

#endif