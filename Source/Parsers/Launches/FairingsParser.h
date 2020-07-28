#ifndef MARSY_LAUNCHES_FAIRINGSPARSER_H
#define MARSY_LAUNCHES_FAIRINGSPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Launches/FairingsModel.h"

using json = nlohmann::json;
using Marsy::Models::Launch::FairingsModel;

namespace Marsy::Parsers::Launch
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
        FairingsModel parseFairings(const json &input);
    };
}

#endif