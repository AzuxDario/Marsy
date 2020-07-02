#include "CargoParser.h"

namespace Marsy::Parsers::DragonParser
{
    CargoParser::CargoParser()
    {

    }

    Cargo CargoParser::parseCargo(const json &input)
    {
        Cargo cargo;
        cargo.solarArray = parseIntNullable(input, strSolarArray);
        cargo.unpressurizedCargo = parseBoolNullable(input, strUnpressurizedCargo);

        return cargo;
    }
}
