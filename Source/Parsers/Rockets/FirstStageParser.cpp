#include "FirstStageParser.h"

namespace Marsy::Parsers::RocketsParser
{
    FirstStageParser::FirstStageParser()
    {

    }

    FirstStage FirstStageParser::parseFirstStage(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    FirstStage FirstStageParser::parseObject(const json &input)
    {
        FirstStage firstStage;
        firstStage.reusable = parseBoolNullable(input, strReusable);
        firstStage.engines = parseIntNullable(input, strEngines);
        firstStage.fuelAmountTons = parseIntNullable(input, strFuelAmountTons);
        firstStage.burnTimeSeconds = parseIntNullable(input, strBurnTimeSec);
        firstStage.thrustSeaLevel = parseThrustInfo(input, strThrustSeaLevel);
        firstStage.thrustVacuum = parseThrustInfo(input, strThrustVacuum);

        return firstStage;
    }

    std::optional<ThrustInfo> FirstStageParser::parseThrustInfo(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            ThrustInfoParser thrustInfoParser;
            return thrustInfoParser.parseThrustInfo(input);
        }
        else
        {
            return std::nullopt;
        }
    }

}
