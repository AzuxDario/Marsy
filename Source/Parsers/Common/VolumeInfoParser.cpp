#include "VolumeInfoParser.h"

namespace Marsy::Parsers::Common
{
    VolumeInfoParser::VolumeInfoParser()
    {

    }

    VolumeInfo VolumeInfoParser::parseVolumeInfo(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    VolumeInfo VolumeInfoParser::parseObject(const json &input)
    {
        VolumeInfo volumeInfo;
        volumeInfo.cubicMeters = parseDoubleNullable(input, strCubicMeters);
        volumeInfo.cubicFeet = parseDoubleNullable(input, strCubicFeet);

        return volumeInfo;
    }

}
