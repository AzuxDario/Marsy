#ifndef MARSY_ROCKETS_ENGINESPARSER_H
#define MARSY_ROCKETS_ENGINESPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "IspParser.h"
#include "../Common/CommonInfoParser.h"
#include "../../Models/Rockets/EnginesModel.h"
#include "../../Models/Rockets/IspModel.h"
#include "../../Models/Common/ThrustInfoModel.h"

using json = nlohmann::json;
using Marsy::Models::Rocket::EnginesModel;
using Marsy::Models::Rocket::IspModel;
using Marsy::Models::Common::ThrustInfoModel;
using Marsy::Parsers::Common::CommonInfoParser;

namespace Marsy::Parsers::Rocket
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
        EnginesModel parseEngines(const json &input);
    private:
        std::optional<IspModel> parseIsp(const json &input, const std::string &name);
    };
}

#endif