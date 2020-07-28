#ifndef MARSY_ROCKETS_ISPPARSER_H
#define MARSY_ROCKETS_ISPPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Rockets/IspModel.h"

using json = nlohmann::json;
using Marsy::Models::Rocket::IspModel;

namespace Marsy::Parsers::Rocket
{
    class IspParser : public Parser
    {
    private:
        const std::string strSeaLevel = "sea_level";
        const std::string strVacuum = "vacuum";
    public:
        IspParser();
        IspModel parseIsp(const json &input);
    };
}

#endif