#ifndef MARSY_CORES_COREPARSER_H
#define MARSY_CORES_COREPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "../../Models/Cores/Core.h"

using json = nlohmann::json;
using Marsy::Models::CoreModel::Core;
using Marsy::Models::CoreModel::CoreStatus;

namespace Marsy::Parsers::CoreParser
{
    class CoreParser : public Parser, public IParser<Core>
    {
    private:
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
    public:
        CoreParser();
        Core parseObject(const std::string &input);
        std::vector<Core> parseVector(const std::string &input);
    private:
        Core parseOne(const json &input);
        std::optional<CoreStatus> parseCoreStatus(const json &input, const std::string &name);
    };
}

#endif