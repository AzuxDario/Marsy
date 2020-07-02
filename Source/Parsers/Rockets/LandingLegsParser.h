#ifndef MARSY_ROCKETS_LANDINGLEGSPARSER_H
#define MARSY_ROCKETS_LANDINGLEGSPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Rockets/LandingLegs.h"

using json = nlohmann::json;
using Marsy::Models::RocketsModel::LandingLegs;

namespace Marsy::Parsers::RocketsParser
{
    class LandingLegsParser : public Parser
    {
    private:
        const std::string strNumber = "number";
        const std::string strMaterial = "material";
    public:
        LandingLegsParser();
        LandingLegs parseLandingLegs(const json &input);
    };
}

#endif