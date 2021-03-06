#include "LandingLegsParser.h"

namespace Marsy
{
    LandingLegsParser::LandingLegsParser()
    {

    }

    LandingLegsModel LandingLegsParser::parseLandingLegs(const json &input)
    {
        LandingLegsModel landingLegs;
        landingLegs.number = parseIntNullable(input, strNumber);
        landingLegs.material = parseStringNullable(input, strMaterial);

        return landingLegs;
    }

}
