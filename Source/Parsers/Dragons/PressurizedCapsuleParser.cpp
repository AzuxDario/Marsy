#include "PressurizedCapsuleParser.h"

namespace Marsy
{
    PressurizedCapsuleParser::PressurizedCapsuleParser()
    {

    }

    PressurizedCapsuleModel PressurizedCapsuleParser::parsePressurizedCapsule(const json &input)
    {
        PressurizedCapsuleModel pressurizedCapsule;
        CommonInfoParser commonInfoParser;
        pressurizedCapsule.payloadVolume = commonInfoParser.parseVolumeInfo(input, strPayloadVolume);

        return pressurizedCapsule;
    }
}
