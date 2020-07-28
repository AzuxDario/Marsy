#ifndef MARSY_ROCKETS_LANDINGLEGSPARSER_H
#define MARSY_ROCKETS_LANDINGLEGSPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Rockets/LandingLegsModel.h"

using json = nlohmann::json;
using Marsy::Models::Rocket::LandingLegsModel;

namespace Marsy::Parsers::Rocket
{
    class LandingLegsParser : public Parser
    {
    private:
        const std::string strNumber = "number";
        const std::string strMaterial = "material";
    public:
        LandingLegsParser();
        LandingLegsModel parseLandingLegs(const json &input);
    };
}

#endif