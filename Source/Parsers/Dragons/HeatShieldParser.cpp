#include "HeatShieldParser.h"

namespace Marsy::Parsers::DragonParser
{
    HeatShieldParser::HeatShieldParser()
    {

    }

    HeatShield HeatShieldParser::parseHeatShield(const json &input)
    {
        HeatShield heatShield;
        heatShield.material = parseStringNullable(input, strMaterial);
        heatShield.sizeMeters = parseDoubleNullable(input, strSizeMeters);
        heatShield.tempDegrees = parseIntNullable(input, strTempDegrees);
        heatShield.devPartner = parseStringNullable(input, strDevPartner);

        return heatShield;
    }
}
