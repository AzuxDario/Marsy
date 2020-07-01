#ifndef MARSY_CREW_CREWPARSER_H
#define MARSY_CREW_CREWPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Crew/Crew.h"

using json = nlohmann::json;
using Marsy::Models::CrewModel::Crew;
using Marsy::Models::CrewModel::CrewStatus;

namespace Marsy::Parsers::CrewParser
{
    class CrewParser : public Parser
    {
    private:
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
    public:
        CrewParser();
        Crew parseCrewVector(const std::string &input);
        std::vector<Crew> parseCrewVectors(const std::string &input);
    private:
        Crew parseObject(const json &input);
        std::optional<CrewStatus> parseCrewVectorStatus(const json &input, const std::string &name);
    };
}

#endif