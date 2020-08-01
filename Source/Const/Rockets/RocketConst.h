#ifndef MARSY_ROCKETS_ROCKETCONST_H
#define MARSY_ROCKETS_ROCKETCONST_H

#include <string>

namespace Marsy
{
    struct RocketConst
    {
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
    };
}

#endif