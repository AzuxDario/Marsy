#ifndef MARSY_ROCKETS_ROCKET_H
#define MARSY_ROCKETS_ROCKET_H

#include <string>
#include <vector>
#include <optional>

#include "PayloadWeightsModel.h"
#include "FirstStageModel.h"
#include "SecondStageModel.h"
#include "EnginesModel.h"
#include "LandingLegsModel.h"
#include "../Common/SizeInfoModel.h"
#include "../Common/MassInfoModel.h"

using Marsy::MassInfoModel;
using Marsy::SizeInfoModel;

namespace Marsy
{
    struct RocketModel
    {
        std::optional<std::string> name;
        std::optional<std::string> type;
        std::optional<bool> active;
        std::optional<int> stages;
        std::optional<int> boosters;
        std::optional<long long> costPerLaunch;
        std::optional<double> successRatePct;
        std::optional<std::string> firstFlight;
        std::optional<std::string> country;
        std::optional<std::string> company;
        std::optional<SizeInfoModel> height;
        std::optional<SizeInfoModel> diameter;
        std::optional<MassInfoModel> mass;
        std::optional<std::vector<PayloadWeightsModel>> payloadWeights;
        std::optional<FirstStageModel> firstStage;
        std::optional<SecondStageModel> secondStage;
        std::optional<EnginesModel> engines;
        std::optional<LandingLegsModel> landingLegs;
        std::optional<std::vector<std::string>> flickrImages;
        std::optional<std::string> wikipedia;
        std::optional<std::string> description;
        std::optional<std::string> id;
    };
}

#endif