#include "CargoParser.h"

namespace Marsy
{
    CargoParser::CargoParser()
    {

    }

    CargoModel CargoParser::parseCargo(const json &input)
    {
        CargoModel cargo;
        cargo.solarArray = parseIntNullable(input, strSolarArray);
        cargo.unpressurizedCargo = parseBoolNullable(input, strUnpressurizedCargo);

        return cargo;
    }
}
