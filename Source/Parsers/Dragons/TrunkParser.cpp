#include "TrunkParser.h"

namespace Marsy::Parsers::DragonParser
{
    TrunkParser::TrunkParser()
    {

    }

    Trunk TrunkParser::parseTrunk(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    Trunk TrunkParser::parseObject(const json &input)
    {
        Trunk trunk;
        trunk.trunkVolume = parseVolumeInfo(input, strTrunkVolume);
        trunk.cargo = parseCargo(input, strCargo);

        return trunk;
    }

    std::optional<VolumeInfo> TrunkParser::parseVolumeInfo(const json &input, const std::string &name)
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

    std::optional<Cargo> TrunkParser::parseCargo(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            CargoParser cargoParser;
            return cargoParser.parseCargo(input);
        }
        else
        {
            return std::nullopt;
        }
    }

}
