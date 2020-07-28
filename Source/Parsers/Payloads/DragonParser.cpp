#include "DragonParser.h"

namespace Marsy::Parsers::Payload
{
    DragonParser::DragonParser()
    {

    }

    DragonModel DragonParser::parseDragon(const json &input)
    {
        DragonModel dragon;
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
