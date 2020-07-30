#ifndef MARSY_CORE_CORECONST_H
#define MARSY_CORE_CORECONST_H

#include <string>

namespace Marsy::Const::Core
{
    struct CoreConst
    {
        const std::string strSerial = "serial";
        const std::string strBlock = "block";
        const std::string strStatus = "status";
        const std::string strReuseCount = "reuse_count";
        const std::string strRtlsAttepmts = "rtls_attempts";
        const std::string strRtlsLandings = "rtls_landings";
        const std::string strAsdsAttempts = "asds_attempts";
        const std::string strAsdsLandings = "asds_landings";
        const std::string strLastUpdate = "last_update";
        const std::string strLaunches = "launches";
        const std::string strId = "id";
        const std::string strStatusActive = "active";
        const std::string strStatusInactive = "inactive";
        const std::string strStatusUnknown = "unknown";    
        const std::string strStatusExpended = "expended"; 
        const std::string strStatusLost = "lost";
        const std::string strStatusRetired = "retired";
    };
}

#endif