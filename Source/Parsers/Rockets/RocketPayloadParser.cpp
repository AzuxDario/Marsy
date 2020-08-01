#include "RocketPayloadParser.h"

namespace Marsy
{
    RocketPayloadParser::RocketPayloadParser()
    {

    }

    RocketPayloadModel RocketPayloadParser::parsePayloads(const json &input)
    {
        RocketPayloadModel payloads;
        CommonInfoParser commonInfoParser;
        payloads.option1 = parseStringNullable(input, strOption1);
        payloads.compositeFairing = commonInfoParser.parseSizeInfo(input, strCompositeFairing);
        payloads.diameter = commonInfoParser.parseSizeInfo(input, strDiameter);

        return payloads;
    }
}
