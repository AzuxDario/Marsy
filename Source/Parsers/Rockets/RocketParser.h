#ifndef MARSY_ROCKETS_ROCKETPARSER_H
#define MARSY_ROCKETS_ROCKETPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "EnginesParser.h"
#include "FirstStageParser.h"
#include "LandingLegsParser.h"
#include "PayloadWeightsParser.h"
#include "SecondStageParser.h"
#include "../Common/CommonInfoParser.h"
#include "../../Models/Rockets/RocketModel.h"
#include "../../Models/Rockets/EnginesModel.h"
#include "../../Models/Rockets/FirstStageModel.h"
#include "../../Models/Rockets/LandingLegsModel.h"
#include "../../Models/Rockets/PayloadWeightsModel.h"
#include "../../Models/Rockets/SecondStageModel.h"
#include "../../Models/Common/MassInfoModel.h"
#include "../../Models/Common/SizeInfoModel.h"
#include "../../Const/Rockets/RocketConst.h"

using json = nlohmann::json;
using Marsy::Models::Rocket::RocketModel;
using Marsy::Models::Rocket::EnginesModel;
using Marsy::Models::Rocket::FirstStageModel;
using Marsy::Models::Rocket::LandingLegsModel;
using Marsy::Models::Rocket::PayloadWeightsModel;
using Marsy::Models::Rocket::SecondStageModel;
using Marsy::Models::Common::MassInfoModel;
using Marsy::Models::Common::SizeInfoModel;
using Marsy::Parsers::Common::CommonInfoParser;
using Marsy::Const::Rocket::RocketConst;

namespace Marsy::Parsers::Rocket
{
    class RocketParser : public Parser, public IParser<RocketModel>, private RocketConst
    {
    public:
        RocketParser();
    protected:
        RocketModel parseOne(const json &input) override;
    private:
        std::optional<EnginesModel> parseEngines(const json &input, const std::string &name);
        std::optional<FirstStageModel> parseFirstStage(const json &input, const std::string &name);
        std::optional<LandingLegsModel> parseLandingLegs(const json &input, const std::string &name);
        std::optional<std::vector<PayloadWeightsModel>> parsePayloadWeightsVector(const json &input, const std::string &name);
        std::optional<SecondStageModel> parseSecondStage(const json &input, const std::string &name);
    };
}

#endif