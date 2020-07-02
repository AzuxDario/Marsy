#include "SizeInfoParser.h"

namespace Marsy::Parsers::CommonParser
{
    SizeInfoParser::SizeInfoParser()
    {

    }

    SizeInfo SizeInfoParser::parseSizeInfo(const json &input)
    {
        SizeInfo sizeInfo;
        sizeInfo.meters = parseDoubleNullable(input, strMeters);
        sizeInfo.feet = parseDoubleNullable(input, strFeet);

        return sizeInfo;
    }
}
