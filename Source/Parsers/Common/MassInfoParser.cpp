#include "MassInfoParser.h"

namespace Marsy::Parsers::CommonParser
{
    MassInfoParser::MassInfoParser()
    {

    }

    MassInfo MassInfoParser::parseMassInfo(const json &input)
    {
        MassInfo massInfo;
        massInfo.kilograms = parseDoubleNullable(input, strKg);
        massInfo.pounds = parseDoubleNullable(input, strLb);

        return massInfo;
    }
}
