#ifndef MARSY_ROCKETS_FIRSTSTAGEPARSER_H
#define MARSY_ROCKETS_FIRSTSTAGEPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../Common/CommonInfoParser.h"
#include "../../Models/Rockets/FirstStage.h"
#include "../../Models/Common/ThrustInfo.h"

using json = nlohmann::json;
using Marsy::Models::RocketsModel::FirstStage;
using Marsy::Models::CommonModel::ThrustInfo;
using Marsy::Parsers::CommonParser::CommonInfoParser;

namespace Marsy::Parsers::RocketsParser
{
    class FirstStageParser : public Parser
    {
    private:
        const std::string strReusable = "reusable";
        const std::string strEngines = "engines";
        const std::string strFuelAmountTons = "fuel_amount_tons";
        const std::string strBurnTimeSec = "burn_time_sec";
        const std::string strThrustSeaLevel = "thrust_sea_level";
        const std::string strThrustVacuum = "thrust_vacuum";
    public:
        FirstStageParser();
        FirstStage parseFirstStage(const json &input);
    };
}

#endif