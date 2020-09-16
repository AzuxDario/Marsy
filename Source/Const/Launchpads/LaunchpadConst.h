#ifndef MARSY_LAUNCHPADS_LAUNCHPADCONST_H
#define MARSY_LAUNCHPADS_LAUNCHPADCONST_H

#include <string>

namespace Marsy
{
    struct LaunchpadConst
    {
        const std::string strName = "name";
        const std::string strFullName = "full_name";
        const std::string strStatus = "status";
        const std::string strLocality = "locality";
        const std::string strRegion = "region";
        const std::string strTimezone = "timezone";
        const std::string strLatitude = "latitude";
        const std::string strLongitude = "longitude";
        const std::string strLaunchAttempts = "launch_attempts";
        const std::string strLaunchSuccesses = "launch_successes";
        const std::string strRockets = "rockets";
        const std::string strLaunches = "launches";
        const std::string strDetails = "details";
        const std::string strId = "id";
        const std::string strStatusActive = "active";
        const std::string strStatusInactive = "inactive";
        const std::string strStatusUnknown = "unknown";        
        const std::string strStatusRetired = "retired";
        const std::string strStatusLost = "lost";
        const std::string strStatusUnderConstuction = "under construction";
    };
}

#endif