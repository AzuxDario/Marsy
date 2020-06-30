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
        pressurizedCapsule.payloadVolume = parseVolumeInfo(input, strPayloadVolume);

        return pressurizedCapsule;
    }

    std::optional<VolumeInfo> PressurizedCapsuleParser::parseVolumeInfo(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            VolumeInfoParser volumeInfoParser;
            return volumeInfoParser.parseVolumeInfo(input);
        }
        else
        {
            return std::nullopt;
        }
    }

}
