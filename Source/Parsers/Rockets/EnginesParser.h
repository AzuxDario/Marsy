#ifndef MARSY_ROCKETS_ENGINESPARSER_H
#define MARSY_ROCKETS_ENGINESPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "IspParser.h"
#include "../Common/ThrustInfoParser.h"
#include "../../Models/Rockets/Engines.h"
#include "../../Models/Rockets/Isp.h"
#include "../../Models/Common/ThrustInfo.h"

using json = nlohmann::json;
using Marsy::Models::RocketsModel::Engines;
using Marsy::Models::RocketsModel::Isp;
using Marsy::Models::CommonModel::ThrustInfo;
using Marsy::Parsers::CommonParser::ThrustInfoParser;

namespace Marsy::Parsers::RocketsParser
{
    class EnginesParser : public Parser
    {
    private:
        const std::string strNumber = "number";
        const std::string strType = "type";
        const std::string strVersion = "version";
        const std::string strLayout = "layout";
        const std::string strIsp = "isp";
        const std::string strEngineLossMax = "engine_loss_max";
        const std::string strPropellant1 = "propellant_1";
        const std::string strPropellant2 = "propellant_2";
        const std::string strThrustSeaLevel = "thrust_sea_level";
        const std::string strThrustVacuum = "thrust_vacuum";
        const std::string strThrustToWeight = "thrust_to_weight";
    public:
        EnginesParser();
        Engines parseEngines(const std::string &input);
    private:
        Engines parseObject(const json &input);
        std::optional<ThrustInfo> parseThrustInfo(const json &input, const std::string &name);
        std::optional<Isp> parseIsp(const json &input, const std::string &name);
    };
}

#endif