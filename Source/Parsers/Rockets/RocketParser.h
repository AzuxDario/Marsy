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
using Marsy::RocketModel;
using Marsy::EnginesModel;
using Marsy::FirstStageModel;
using Marsy::LandingLegsModel;
using Marsy::PayloadWeightsModel;
using Marsy::SecondStageModel;
using Marsy::MassInfoModel;
using Marsy::SizeInfoModel;
using Marsy::CommonInfoParser;
using Marsy::RocketConst;

namespace Marsy
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