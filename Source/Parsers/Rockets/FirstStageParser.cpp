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
        CommonInfoParser commonInfoParser;
        firstStage.reusable = parseBoolNullable(input, strReusable);
        firstStage.engines = parseIntNullable(input, strEngines);
        firstStage.fuelAmountTons = parseIntNullable(input, strFuelAmountTons);
        firstStage.burnTimeSeconds = parseIntNullable(input, strBurnTimeSec);
        firstStage.thrustSeaLevel = commonInfoParser.parseThrustInfo(input, strThrustSeaLevel);
        firstStage.thrustVacuum = commonInfoParser.parseThrustInfo(input, strThrustVacuum);

        return firstStage;
    }

}
