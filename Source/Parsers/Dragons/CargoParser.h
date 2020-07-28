#ifndef MARSY_DARGONS_CARGOPARSER_H
#define MARSY_DARGONS_CARGOPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Dragons/CargoModel.h"

using json = nlohmann::json;
using Marsy::Models::Dragon::CargoModel;

namespace Marsy::Parsers::Dragon
{
    class CargoParser : public Parser
    {
    private:
        const std::string strSolarArray = "solar_array";
        const std::string strUnpressurizedCargo = "unpressurized_cargo";
    public:
        CargoParser();
        CargoModel parseCargo(const json &input);
    };
}

#endif