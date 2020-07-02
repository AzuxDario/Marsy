#include "TrunkParser.h"

namespace Marsy::Parsers::DragonParser
{
    TrunkParser::TrunkParser()
    {

    }

    Trunk TrunkParser::parseTrunk(const json &input)
    {
        Trunk trunk;
        CommonInfoParser commonInfoParser;
        trunk.trunkVolume = commonInfoParser.parseVolumeInfo(input, strTrunkVolume);
        trunk.cargo = parseCargo(input, strCargo);

        return trunk;
    }

    std::optional<Cargo> TrunkParser::parseCargo(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            CargoParser cargoParser;
            return cargoParser.parseCargo(input[name]);
        }
        else
        {
            return std::nullopt;
        }
    }

}
