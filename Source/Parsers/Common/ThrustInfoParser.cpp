#include "ThrustInfoParser.h"

namespace Marsy::Parsers::Common
{
    ThrustInfoParser::ThrustInfoParser()
    {

    }

    ThrustInfo ThrustInfoParser::parseThrustInfo(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    ThrustInfo ThrustInfoParser::parseObject(const json &input)
    {
        ThrustInfo thrustInfo;
        thrustInfo.kilonewtons = parseDoubleNullable(input, strKn);
        thrustInfo.poundsforce = parseDoubleNullable(input, strLbf);

        return thrustInfo;
    }

}
