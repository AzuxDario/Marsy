#ifndef MARSY_LAUNCHES_COREPARSER_H
#define MARSY_LAUNCHES_COREPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Launches/CoreModel.h"

using json = nlohmann::json;
using Marsy::Models::Launch::CoreModel;

namespace Marsy::Parsers::Launch
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
        std::vector<CoreModel> parseCoresVector(const json &input);
    };
}

#endif