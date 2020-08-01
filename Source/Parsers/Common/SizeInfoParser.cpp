#include "SizeInfoParser.h"

namespace Marsy
{
    SizeInfoParser::SizeInfoParser()
    {

    }

    SizeInfoModel SizeInfoParser::parseSizeInfo(const json &input)
    {
        SizeInfoModel sizeInfo;
        sizeInfo.meters = parseDoubleNullable(input, strMeters);
        sizeInfo.feet = parseDoubleNullable(input, strFeet);

        return sizeInfo;
    }
}
