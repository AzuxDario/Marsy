#include "EnginesParser.h"

namespace Marsy::Parsers::Rocket
{
    EnginesParser::EnginesParser()
    {

    }

    EnginesModel EnginesParser::parseEngines(const json &input)
    {
        EnginesModel engines;
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

    std::optional<IspModel> EnginesParser::parseIsp(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            IspParser ispParser;
            return ispParser.parseIsp(input[name]);
        }
        else
        {
            return std::nullopt;
        }
    }

}
