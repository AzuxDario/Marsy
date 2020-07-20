#ifndef MARSY_LAUNCHES_COREPARSER_H
#define MARSY_LAUNCHES_COREPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Launches/Core.h"

using json = nlohmann::json;
using Marsy::Models::LaunchModel::Core;

namespace Marsy::Parsers::LaunchParser
{
    class CoreParser : public Parser
    {
    private:
        const std::string strCore = "core";
        const std::string strFlight = "flight";
        const std::string strGridfins = "gridfins";
        const std::string strLegs = "legs";
        const std::string strReused = "reused";
        const std::string strLandingAttempt = "landing_attempt";
        const std::string strLandingSuccess = "landing_success";
        const std::string strLandingType = "landing_type";
        const std::string strLandpad = "landpad";
    public:
        CoreParser();
        std::vector<Core> parseCoresVector(const json &input);
    };
}

#endif