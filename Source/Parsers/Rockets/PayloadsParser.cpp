#include "PayloadsParser.h"

namespace Marsy::Parsers::RocketsParser
{
    PayloadsParser::PayloadsParser()
    {

    }

    Payloads PayloadsParser::parsePayloadVector(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    Payloads PayloadsParser::parseObject(const json &input)
    {
        Payloads payloads;
        CommonInfoParser commonInfoParser;
        payloads.option1 = parseStringNullable(input, strOption1);
        payloads.compositeFairing = commonInfoParser.parseSizeInfo(input, strCompositeFairing);
        payloads.diameter = commonInfoParser.parseSizeInfo(input, strDiameter);

        return payloads;
    }

}
