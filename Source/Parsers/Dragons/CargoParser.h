#ifndef MARSY_DARGONS_CARGOPARSER_H
#define MARSY_DARGONS_CARGOPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Dragons/CargoModel.h"
#include "../../Const/Dragons/CargoConst.h"

using json = nlohmann::json;
using Marsy::CargoModel;
using Marsy::CargoConst;

namespace Marsy
{
    class CargoParser : public Parser, private CargoConst
    {
    public:
        CargoParser();
        CargoModel parseCargo(const json &input);
    };
}

#endif