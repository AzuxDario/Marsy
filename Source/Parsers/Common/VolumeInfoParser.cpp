#include "VolumeInfoParser.h"

namespace Marsy::Parsers::Common
{
    VolumeInfoParser::VolumeInfoParser()
    {

    }

    VolumeInfoModel VolumeInfoParser::parseVolumeInfo(const json &input)
    {
        VolumeInfoModel volumeInfo;
        volumeInfo.cubicMeters = parseDoubleNullable(input, strCubicMeters);
        volumeInfo.cubicFeet = parseDoubleNullable(input, strCubicFeet);

        return volumeInfo;
    }
}
