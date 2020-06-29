#ifndef MARSY_COMMON_THRUSTINFOPARSER_H
#define MARSY_COMMON_THRUSTINFOPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Common/ThrustInfo.h"

using json = nlohmann::json;
using Marsy::Models::Common::ThrustInfo;

namespace Marsy::Parsers::Common
{
    class ThrustInfoParser : public Parser
    {
    private:
        const std::string strKn = "kN";
        const std::string strLbf = "lbf";
    public:
        ThrustInfoParser();
        ThrustInfo parseThrustInfo(const std::string &input);
    private:
        ThrustInfo parseObject(const json &input);
    };
}

#endif