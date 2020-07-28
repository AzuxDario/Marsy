#include "TrunkParser.h"

namespace Marsy::Parsers::Dragon
{
    TrunkParser::TrunkParser()
    {

    }

    TrunkModel TrunkParser::parseTrunk(const json &input)
    {
        TrunkModel trunk;
        CommonInfoParser commonInfoParser;
        trunk.trunkVolume = commonInfoParser.parseVolumeInfo(input, strTrunkVolume);
        trunk.cargo = parseCargo(input, strCargo);

        return trunk;
    }

    std::optional<CargoModel> TrunkParser::parseCargo(const json &input, const std::string &name)
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
