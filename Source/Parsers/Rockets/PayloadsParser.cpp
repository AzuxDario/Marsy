#include "PayloadsParser.h"

namespace Marsy::Parsers::Rocket
{
    PayloadsParser::PayloadsParser()
    {

    }

    PayloadsModel PayloadsParser::parsePayloads(const json &input)
    {
        PayloadsModel payloads;
        CommonInfoParser commonInfoParser;
        payloads.option1 = parseStringNullable(input, strOption1);
        payloads.compositeFairing = commonInfoParser.parseSizeInfo(input, strCompositeFairing);
        payloads.diameter = commonInfoParser.parseSizeInfo(input, strDiameter);

        return payloads;
    }
}
