#include "LandingLegsParser.h"

namespace Marsy::Parsers::RocketsParser
{
    LandingLegsParser::LandingLegsParser()
    {

    }

    LandingLegs LandingLegsParser::parseLandingLegs(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    LandingLegs LandingLegsParser::parseObject(const json &input)
    {
        LandingLegs landingLegs;
        landingLegs.number = parseIntNullable(input, strNumber);
        landingLegs.material = parseStringNullable(input, strMaterial);

        return landingLegs;
    }

}
