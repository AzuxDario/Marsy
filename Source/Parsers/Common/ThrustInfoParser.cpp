#include "ThrustInfoParser.h"

namespace Marsy
{
    ThrustInfoParser::ThrustInfoParser()
    {

    }

    ThrustInfoModel ThrustInfoParser::parseThrustInfo(const json &input)
    {
        ThrustInfoModel thrustInfo;
        thrustInfo.kilonewtons = parseDoubleNullable(input, strKn);
        thrustInfo.poundsforce = parseDoubleNullable(input, strLbf);

        return thrustInfo;
    }
}
