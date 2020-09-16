#ifndef MARSY_LAUNCHES_FAILURECONST_H
#define MARSY_LAUNCHES_FAILURECONST_H

#include <string>

namespace Marsy
{
    struct FailureConst
    {
        const std::string strTime = "time";
        const std::string strAltitude = "altitude";
        const std::string strReason = "reason";
    };
}

#endif