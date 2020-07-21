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
#include "../../Models/Rockets/Rocket.h"
#include "../../Models/Rockets/Engines.h"
#include "../../Models/Rockets/FirstStage.h"
#include "../../Models/Rockets/LandingLegs.h"
#include "../../Models/Rockets/PayloadWeights.h"
#include "../../Models/Rockets/SecondStage.h"
#include "../../Models/Common/MassInfo.h"
#include "../../Models/Common/SizeInfo.h"

using json = nlohmann::json;
using Marsy::Models::RocketsModel::Rocket;
using Marsy::Models::RocketsModel::Engines;
using Marsy::Models::RocketsModel::FirstStage;
using Marsy::Models::RocketsModel::LandingLegs;
using Marsy::Models::RocketsModel::PayloadWeights;
using Marsy::Models::RocketsModel::SecondStage;
using Marsy::Models::CommonModel::MassInfo;
using Marsy::Models::CommonModel::SizeInfo;
using Marsy::Parsers::CommonParser::CommonInfoParser;

namespace Marsy::Parsers::RocketsParser
{
    class RocketParser : public Parser, public IParser<Rocket>
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
        Rocket parseOne(const json &input) override;
    private:
        std::optional<Engines> parseEngines(const json &input, const std::string &name);
        std::optional<FirstStage> parseFirstStage(const json &input, const std::string &name);
        std::optional<LandingLegs> parseLandingLegs(const json &input, const std::string &name);
        std::optional<std::vector<PayloadWeights>> parsePayloadWeightsVector(const json &input, const std::string &name);
        std::optional<SecondStage> parseSecondStage(const json &input, const std::string &name);
    };
}

#endif