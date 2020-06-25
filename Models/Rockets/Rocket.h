#ifndef MARSY_ROCKETS_ROCKET_H
#define MARSY_ROCKETS_ROCKET_H

#include <string>
#include <vector>
#include <optional>

#include "PayloadWeights.h"
#include "FirstStage.h"
#include "SecondStage.h"
#include "Engines.h"
#include "LandingLegs.h"
#include "../Common/SizeInfo.h"
#include "../Common/MassInfo.h"

namespace Marsy::Rockets
{
    struct Rocket
    {
        std::optional<std::string> name;
        std::optional<std::string> type;
        std::optional<bool> active;
        std::optional<int> stages;
        std::optional<int> boosters;
        std::optional<long long> costPerLaunch;
        std::optional<float> successRatePct;
        std::optional<std::string> firstFlight;
        std::optional<std::string> country;
        std::optional<std::string> company;
        std::optional<Common::SizeInfo> height;
        std::optional<Common::SizeInfo> diameter;
        std::optional<Common::MassInfo> mass;
        std::vector<PayloadWeights> payloadWeights;
        std::optional<FirstStage> firstStage;
        std::optional<SecondStage> secondStage;
        std::optional<Engines> engines;
        std::optional<LandingLegs> landingLegs;
        std::vector<std::string> flickrImages;
        std::optional<std::string> wikipedia;
        std::optional<std::string> description;
        std::optional<std::string> id;
    };
}

#endif