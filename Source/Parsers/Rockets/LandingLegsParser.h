#ifndef MARSY_ROCKETS_LANDINGLEGSPARSER_H
#define MARSY_ROCKETS_LANDINGLEGSPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Rockets/LandingLegsModel.h"
#include "../../Const/Rockets/LandingLegsConst.h"

using json = nlohmann::json;
using Marsy::Models::Rocket::LandingLegsModel;
using Marsy::Const::Rocket::LandingLegsConst;

namespace Marsy::Parsers::Rocket
{
    class LandingLegsParser : public Parser, private LandingLegsConst
    {
    public:
        LandingLegsParser();
        LandingLegsModel parseLandingLegs(const json &input);
    };
}

#endif