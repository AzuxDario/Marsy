#include "SecondStageParser.h"

namespace Marsy::Parsers::Rocket
{
    SecondStageParser::SecondStageParser()
    {

    }

    SecondStageModel SecondStageParser::parseSecondStage(const json &input)
    {
        SecondStageModel secondStage;
        CommonInfoParser commonInfoParser;
        secondStage.reusable = parseBoolNullable(input, strReusable);
        secondStage.engines = parseIntNullable(input, strEngines);
        secondStage.fuelAmountTons = parseIntNullable(input, strFuelAmountTons);
        secondStage.burnTimeSeconds = parseIntNullable(input, strBurnTimeSec);
        secondStage.thrust = commonInfoParser.parseThrustInfo(input, strThrust);
        secondStage.payloads = parsePayloads(input, strPayloads);

        return secondStage;
    }

    std::optional<PayloadsModel> SecondStageParser::parsePayloads(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_array())
        {
            PayloadsParser payloadsParser;
            return payloadsParser.parsePayloads(input[name]);
        }
        else
        {
            return std::nullopt;
        }
    }

}
