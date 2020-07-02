#include "EnginesParser.h"

namespace Marsy::Parsers::RocketsParser
{
    EnginesParser::EnginesParser()
    {

    }

    Engines EnginesParser::parseEngines(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    Engines EnginesParser::parseObject(const json &input)
    {
        Engines engines;
        CommonInfoParser commonInfoParser;
        engines.number = parseIntNullable(input, strNumber);
        engines.type = parseStringNullable(input, strType);
        engines.version = parseStringNullable(input, strVersion);
        engines.layout = parseStringNullable(input, strLayout);
        engines.isp = parseIsp(input, strIsp);
        engines.engineLossMax = parseIntNullable(input, strEngineLossMax);
        engines.propellant1 = parseStringNullable(input, strPropellant1);
        engines.propellant2 = parseStringNullable(input, strPropellant2);
        engines.thrustSeaLevel = commonInfoParser.parseThrustInfo(input, strThrustSeaLevel);
        engines.thrustVacuum = commonInfoParser.parseThrustInfo(input, strThrustVacuum);
        engines.thrustToWeight = parseDoubleNullable(input, strThrustToWeight);

        return engines;
    }

    std::optional<Isp> EnginesParser::parseIsp(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            IspParser ispParser;
            return ispParser.parseIsp(input[name].dump());
        }
        else
        {
            return std::nullopt;
        }
    }

}
