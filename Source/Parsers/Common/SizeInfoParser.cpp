#include "SizeInfoParser.h"

namespace Marsy::Parsers::Common
{
    SizeInfoParser::SizeInfoParser()
    {

    }

    SizeInfo SizeInfoParser::parseSizeInfo(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    SizeInfo SizeInfoParser::parseObject(const json &input)
    {
        SizeInfo sizeInfo;
        sizeInfo.meters = parseDoubleNullable(input, strMeters);
        sizeInfo.feet = parseDoubleNullable(input, strFeet);

        return sizeInfo;
    }

}
