#ifndef MARSY_LAUNCHES_FAIRINGSPARSER_H
#define MARSY_LAUNCHES_FAIRINGSPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Launches/Fairings.h"

using json = nlohmann::json;
using Marsy::Models::LaunchModel::Fairings;

namespace Marsy::Parsers::LaunchesParser
{
    class FairingsParser : public Parser
    {
    private:
        const std::string strReused = "reused";
        const std::string strRecoveryAttempt = "recovery_attempt";
        const std::string strRecovered = "recovered";
        const std::string strShips = "ships";
    public:
        FairingsParser();
        Fairings parseFairings(const std::string &input);
    private:
        Fairings parseObject(const json &input);
    };
}

#endif