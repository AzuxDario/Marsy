#include "VolumeInfoParser.h"

namespace Marsy::Parsers::CommonParser
{
    VolumeInfoParser::VolumeInfoParser()
    {

    }

    VolumeInfo VolumeInfoParser::parseVolumeInfo(const json &input)
    {
        VolumeInfo volumeInfo;
        volumeInfo.cubicMeters = parseDoubleNullable(input, strCubicMeters);
        volumeInfo.cubicFeet = parseDoubleNullable(input, strCubicFeet);

        return volumeInfo;
    }
}
