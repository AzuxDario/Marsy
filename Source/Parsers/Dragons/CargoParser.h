#ifndef MARSY_DARGONS_CARGOPARSER_H
#define MARSY_DARGONS_CARGOPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Dragons/CargoModel.h"
#include "../../Const/Dragons/CargoConst.h"

using json = nlohmann::json;
using Marsy::Models::Dragon::CargoModel;
using Marsy::Const::Dragon::CargoConst;

namespace Marsy::Parsers::Dragon
{
    class CargoParser : public Parser, private CargoConst
    {
    public:
        CargoParser();
        CargoModel parseCargo(const json &input);
    };
}

#endif