#include "PayloadsParser.h"

namespace Marsy::Parsers::RocketsParser
{
    PayloadsParser::PayloadsParser()
    {

    }

    Payloads PayloadsParser::parsePayloads(const json &input)
    {
        Payloads payloads;
        CommonInfoParser commonInfoParser;
        payloads.option1 = parseStringNullable(input, strOption1);
        payloads.compositeFairing = commonInfoParser.parseSizeInfo(input, strCompositeFairing);
        payloads.diameter = commonInfoParser.parseSizeInfo(input, strDiameter);

        return payloads;
    }
}
