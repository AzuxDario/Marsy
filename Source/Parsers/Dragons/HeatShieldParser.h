#ifndef MARSY_DARGONS_HEATSHIELDPARSER_H
#define MARSY_DARGONS_HEATSHIELDPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Dragons/HeatShieldModel.h"
#include "../../Const/Dragons/HeatShieldConst.h"

using json = nlohmann::json;
using Marsy::HeatShieldModel;
using Marsy::HeatShieldConst;

namespace Marsy
{
    class HeatShieldParser : public Parser, private HeatShieldConst
    {
    public:
        HeatShieldParser();
        HeatShieldModel parseHeatShield(const json &input);
    };
}

#endif