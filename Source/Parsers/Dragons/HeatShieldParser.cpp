#include "HeatShieldParser.h"

namespace Marsy
{
    HeatShieldParser::HeatShieldParser()
    {

    }

    HeatShieldModel HeatShieldParser::parseHeatShield(const json &input)
    {
        HeatShieldModel heatShield;
        heatShield.material = parseStringNullable(input, strMaterial);
        heatShield.sizeMeters = parseDoubleNullable(input, strSizeMeters);
        heatShield.tempDegrees = parseIntNullable(input, strTempDegrees);
        heatShield.devPartner = parseStringNullable(input, strDevPartner);

        return heatShield;
    }
}
