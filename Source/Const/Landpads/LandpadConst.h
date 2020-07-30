#ifndef MARSY_LANDPAD_LANDPADCONST_H
#define MARSY_LANDPAD_LANDPADCONST_H

#include <string>

namespace Marsy::Const::Landpad
{
    struct LandpadConst
    {
        const std::string strName = "name";
        const std::string strFullName = "full_name";
        const std::string strStatus = "status";
        const std::string strType = "type";
        const std::string strLocality = "locality";
        const std::string strRegion = "region";
        const std::string strLatitude = "latitude";
        const std::string strLongitude = "longitude";
        const std::string strLandingAttempts = "landing_attempts";
        const std::string strLandingSuccesses = "landing_successes";
        const std::string strWikipedia = "wikipedia";
        const std::string strDetails = "details";
        const std::string strLaunches = "launches";
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