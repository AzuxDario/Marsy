#include "CargoParser.h"

namespace Marsy::Parsers::DragonParser
{
    CargoParser::CargoParser()
    {

    }

    Cargo CargoParser::parseCargo(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    Cargo CargoParser::parseObject(const json &input)
    {
        Cargo cargo;
        cargo.solarArray = parseIntNullable(input, strSolarArray);
        cargo.unpressurizedCargo = parseBoolNullable(input, strUnpressurizedCargo);

        return cargo;
    }

}
