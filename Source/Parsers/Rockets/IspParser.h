#ifndef MARSY_ROCKETS_ISPPARSER_H
#define MARSY_ROCKETS_ISPPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Rockets/Isp.h"

using json = nlohmann::json;
using Marsy::Models::RocketsModel::Isp;

namespace Marsy::Parsers::RocketsParser
{
    class IspParser : public Parser
    {
    private:
        const std::string strSeaLevel = "sea_level";
        const std::string strVacuum = "vacuum";
    public:
        IspParser();
        Isp parseIsp(const std::string &input);
    private:
        Isp parseObject(const json &input);
    };
}

#endif