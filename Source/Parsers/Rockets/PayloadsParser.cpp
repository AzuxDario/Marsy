#include "PayloadsParser.h"

namespace Marsy::Parsers::RocketsParser
{
    PayloadsParser::PayloadsParser()
    {

    }

    Payloads PayloadsParser::parsePayloads(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    Payloads PayloadsParser::parseObject(const json &input)
    {
        Payloads payloads;
        payloads.option1 = parseStringNullable(input, strOption1);
        payloads.compositeFairing = parseSizeInfo(input, strCompositeFairing);
        payloads.diameter = parseSizeInfo(input, strDiameter);

        return payloads;
    }

    std::optional<SizeInfo> PayloadsParser::parseSizeInfo(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            SizeInfoParser sizeInfoParser;
            return sizeInfoParser.parseSizeInfo(input);
        }
        else
        {
            return std::nullopt;
        }
    }

}
