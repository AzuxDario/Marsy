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

namespace Marsy::Parsers::Rocket
{
    class RocketParser : public Parser, public IParser<RocketModel>
    {
    private:
        const std::string strName = "name";
        const std::string strType = "type";
        const std::string strActive = "active";
        const std::string strStages = "stages";
        const std::string strBoosters = "boosters";
        const std::string strCostPerLaunch = "cost_per_launch";
        const std::string strSuccessRatePct = "success_rate_pct";
        const std::string strFirstFlight = "first_flight";
        const std::string strCountry = "country";
        const std::string strCompany = "company";
        const std::string strHeight = "height";
        const std::string strDiameter = "diameter";
        const std::string strMass = "mass";
        const std::string strPayloadWeights = "payload_weights";
        const std::string strFirstStage = "first_stage";
        const std::string strSecondStage = "second_stage";
        const std::string strEngines = "engines";
        const std::string strLandingLegs = "landing_legs";
        const std::string strFlickrImages = "flickr_images";
        const std::string strWikipedia = "wikipedia";
        const std::string strDescription = "description";
        const std::string strId = "id";
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