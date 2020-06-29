#include "MassInfoParser.h"

namespace Marsy::Parsers::Common
{
    MassInfoParser::MassInfoParser()
    {

    }

    MassInfo MassInfoParser::parseMassInfo(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    MassInfo MassInfoParser::parseObject(const json &input)
    {
        MassInfo massInfo;
        massInfo.kilograms = parseDoubleNullable(input, strKg);
        massInfo.pounds = parseDoubleNullable(input, strLb);

        return massInfo;
    }

}
