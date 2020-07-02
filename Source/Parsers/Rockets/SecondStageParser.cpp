#include "SecondStageParser.h"

namespace Marsy::Parsers::RocketsParser
{
    SecondStageParser::SecondStageParser()
    {

    }

    SecondStage SecondStageParser::parseSecondStage(const json &input)
    {
        SecondStage secondStage;
        CommonInfoParser commonInfoParser;
        secondStage.reusable = parseBoolNullable(input, strReusable);
        secondStage.engines = parseIntNullable(input, strEngines);
        secondStage.fuelAmountTons = parseIntNullable(input, strFuelAmountTons);
        secondStage.burnTimeSeconds = parseIntNullable(input, strBurnTimeSec);
        secondStage.thrust = commonInfoParser.parseThrustInfo(input, strThrust);
        secondStage.payloads = parsePayloads(input, strPayloads);

        return secondStage;
    }

    std::optional<Payloads> SecondStageParser::parsePayloads(const json &input, const std::string &name)
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
