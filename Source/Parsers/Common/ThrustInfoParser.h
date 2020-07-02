#ifndef MARSY_COMMON_THRUSTINFOPARSER_H
#define MARSY_COMMON_THRUSTINFOPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Common/ThrustInfo.h"

using json = nlohmann::json;
using Marsy::Models::CommonModel::ThrustInfo;

namespace Marsy::Parsers::CommonParser
{
    class ThrustInfoParser : public Parser
    {
    private:
        const std::string strKn = "kN";
        const std::string strLbf = "lbf";
    public:
        ThrustInfoParser();
        ThrustInfo parseThrustInfo(const json &input);
    };
}

#endif