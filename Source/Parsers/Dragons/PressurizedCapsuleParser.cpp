#include "PressurizedCapsuleParser.h"

namespace Marsy::Parsers::DragonParser
{
    PressurizedCapsuleParser::PressurizedCapsuleParser()
    {

    }

    PressurizedCapsule PressurizedCapsuleParser::parsePressurizedCapsule(const json &input)
    {
        PressurizedCapsule pressurizedCapsule;
        CommonInfoParser commonInfoParser;
        pressurizedCapsule.payloadVolume = commonInfoParser.parseVolumeInfo(input, strPayloadVolume);

        return pressurizedCapsule;
    }
}
