#ifndef MARSY_DARGONS_THRUSTERPARSER_H
#define MARSY_DARGONS_THRUSTERPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../Common/CommonInfoParser.h"
#include "../../Models/Dragons/ThrusterModel.h"
#include "../../Models/Common/ThrustInfoModel.h"

using json = nlohmann::json;
using Marsy::Models::Dragon::ThrusterModel;
using Marsy::Models::Common::ThrustInfoModel;
using Marsy::Parsers::Common::CommonInfoParser;

namespace Marsy::Parsers::Dragon
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
        std::vector<ThrusterModel> parseThrusterVector(const json &input);
    };
}

#endif