#include "PressurizedCapsuleParser.h"

namespace Marsy::Parsers::DragonParser
{
    PressurizedCapsuleParser::PressurizedCapsuleParser()
    {

    }

    PressurizedCapsule PressurizedCapsuleParser::parsePressurizedCapsule(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    PressurizedCapsule PressurizedCapsuleParser::parseObject(const json &input)
    {
        PressurizedCapsule pressurizedCapsule;
        CommonInfoParser commonInfoParser;
        pressurizedCapsule.payloadVolume = commonInfoParser.parseVolumeInfo(input, strPayloadVolume);

        return pressurizedCapsule;
    }

}
