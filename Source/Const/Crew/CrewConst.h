#ifndef MARSY_CREW_CREWCONST_H
#define MARSY_CREW_CREWCONST_H

#include <string>

namespace Marsy::Const::Crew
{
    struct CrewConst
    {
        const std::string strName = "name";
        const std::string strStatus = "status";
        const std::string strAgency = "agency";
        const std::string strImage = "image";
        const std::string strWikipedia = "wikipedia";
        const std::string strLaunches = "launches";
        const std::string strId = "id";        
        const std::string strStatusActive = "active";
        const std::string strStatusInactive = "inactive";
        const std::string strStatusRetired = "retired";
        const std::string strStatusUnknown = "unknown";
    };
}

#endif