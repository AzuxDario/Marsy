#ifndef MARSY_DARGONS_CARGOPARSER_H
#define MARSY_DARGONS_CARGOPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Dragons/Cargo.h"

using json = nlohmann::json;
using Marsy::Models::DragonModel::Cargo;

namespace Marsy::Parsers::DragonParser
{
    class CargoParser : public Parser
    {
    private:
        const std::string strSolarArray = "solar_array";
        const std::string strUnpressurizedCargo = "unpressurized_cargo";
    public:
        CargoParser();
        Cargo parseCargo(const std::string &input);
    private:
        Cargo parseObject(const json &input);
    };
}

#endif