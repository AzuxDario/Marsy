#ifndef MARSY_DARGONS_THRUSTERPARSER_H
#define MARSY_DARGONS_THRUSTERPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../Common/ThrustInfoParser.h"
#include "../../Models/Dragons/Thruster.h"
#include "../../Models/Common/ThrustInfo.h"

using json = nlohmann::json;
using Marsy::Models::DragonModel::Thruster;
using Marsy::Models::CommonModel::ThrustInfo;
using Marsy::Parsers::Common::ThrustInfoParser;

namespace Marsy::Parsers::DragonParser
{
    class ThrusterParser : public Parser
    {
    private:
        const std::string strType = "type";
        const std::string strAmount = "amount";
        const std::string strPods = "pods";
        const std::string strFuel1 = "fuel_1";
        const std::string strFuel2 = "fuel_2";
        const std::string strIsp = "isp";
        const std::string strThrust = "thrust";
    public:
        ThrusterParser();
        std::vector<Thruster> parseThrusters(const std::string &input);
    private:
        Thruster parseObject(const json &input);
        std::optional<ThrustInfo> parseThrustInfo(const json &input, const std::string &name);
    };
}

#endif