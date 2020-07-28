#ifndef MARSY_ROCKETS_SECONDSTAGEPARSER_H
#define MARSY_ROCKETS_SECONDSTAGEPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "PayloadsParser.h"
#include "../Common/CommonInfoParser.h"
#include "../../Models/Rockets/SecondStageModel.h"
#include "../../Models/Rockets/PayloadsModel.h"
#include "../../Models/Common/ThrustInfoModel.h"

using json = nlohmann::json;
using Marsy::Models::Rocket::SecondStageModel;
using Marsy::Models::Rocket::PayloadsModel;
using Marsy::Models::Common::ThrustInfoModel;
using Marsy::Parsers::Common::CommonInfoParser;

namespace Marsy::Parsers::Rocket
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
        SecondStageModel parseSecondStage(const json &input);
    private:
        std::optional<PayloadsModel> parsePayloads(const json &input, const std::string &name);
    };
}

#endif