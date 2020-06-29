#include "DragonParser.h"

namespace Marsy::Parsers::PayloadParser
{
    DragonParser::DragonParser()
    {

    }

    Dragon DragonParser::parseDragon(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    Dragon DragonParser::parseObject(const json &input)
    {
        Dragon dragon;
        dragon.capsule = parseStringNullable(input, strCapsule);
        dragon.massReturnedKilograms = parseDoubleNullable(input, strMassReturnedKg);
        dragon.massReturnedPounds = parseDoubleNullable(input, strMassReturnedLbs);
        dragon.flightTimeSeconds = parseIntNullable(input, strFlightTimeSec);
        dragon.manifest = parseStringNullable(input, strManifest);
        dragon.waterLanding = parseBoolNullable(input, strWaterLanding);
        dragon.landLanding = parseBoolNullable(input, strLandLanding);

        return dragon;
    }

}
