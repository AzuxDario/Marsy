#include "ThrustInfoParser.h"

namespace Marsy::Parsers::CommonParser
{
    ThrustInfoParser::ThrustInfoParser()
    {

    }

    ThrustInfo ThrustInfoParser::parseThrustInfo(const json &input)
    {
        ThrustInfo thrustInfo;
        thrustInfo.kilonewtons = parseDoubleNullable(input, strKn);
        thrustInfo.poundsforce = parseDoubleNullable(input, strLbf);

        return thrustInfo;
    }
}
