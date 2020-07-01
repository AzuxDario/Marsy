#ifndef MARSY_ROCKETS_SECONDSTAGEPARSER_H
#define MARSY_ROCKETS_SECONDSTAGEPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "PayloadsParser.h"
#include "../Common/CommonInfoParser.h"
#include "../../Models/Rockets/SecondStage.h"
#include "../../Models/Rockets/Payloads.h"
#include "../../Models/Common/ThrustInfo.h"

using json = nlohmann::json;
using Marsy::Models::RocketsModel::SecondStage;
using Marsy::Models::RocketsModel::Payloads;
using Marsy::Models::CommonModel::ThrustInfo;
using Marsy::Parsers::CommonParser::CommonInfoParser;

namespace Marsy::Parsers::RocketsParser
{
    class SecondStageParser : public Parser
    {
    private:
        const std::string strReusable = "reusable";
        const std::string strEngines = "engines";
        const std::string strFuelAmountTons = "fuel_amount_tons";
        const std::string strBurnTimeSec = "burn_time_sec";
        const std::string strThrust = "thrust";
        const std::string strPayloads = "payloads";
    public:
        SecondStageParser();
        SecondStage parseSecondStage(const std::string &input);
    private:
        SecondStage parseObject(const json &input);
        std::optional<Payloads> parsePayloadVector(const json &input, const std::string &name);
    };
}

#endif