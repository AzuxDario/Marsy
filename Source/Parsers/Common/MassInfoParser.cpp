#include "MassInfoParser.h"

namespace Marsy::Parsers::Common
{
    MassInfoParser::MassInfoParser()
    {

    }

    MassInfoModel MassInfoParser::parseMassInfo(const json &input)
    {
        MassInfoModel massInfo;
        massInfo.kilograms = parseDoubleNullable(input, strKg);
        massInfo.pounds = parseDoubleNullable(input, strLb);

        return massInfo;
    }
}
