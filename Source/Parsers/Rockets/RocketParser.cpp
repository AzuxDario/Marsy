#include "RocketParser.h"

namespace Marsy::Parsers::Rocket
{
    RocketParser::RocketParser()
    {

    }

    RocketModel RocketParser::parseOne(const json &input)
    {
        RocketModel rocket;
        CommonInfoParser commonInfoParser;
        rocket.name = parseStringNullable(input, strName);
        rocket.type = parseStringNullable(input, strType);
        rocket.active = parseBoolNullable(input, strActive);
        rocket.stages = parseIntNullable(input, strStages);
        rocket.boosters = parseIntNullable(input, strBoosters);
        rocket.costPerLaunch = parseLongLongNullable(input, strCostPerLaunch);
        rocket.successRatePct = parseDoubleNullable(input, strSuccessRatePct);
        rocket.firstFlight = parseStringNullable(input, strFirstFlight);
        rocket.country = parseStringNullable(input, strCountry);
        rocket.company = parseStringNullable(input, strCompany);
        rocket.height = commonInfoParser.parseSizeInfo(input, strHeight);
        rocket.diameter = commonInfoParser.parseSizeInfo(input, strDiameter);
        rocket.mass = commonInfoParser.parseMassInfo(input, strMass);
        rocket.payloadWeights = parsePayloadWeightsVector(input, strPayloadWeights);
        rocket.firstStage = parseFirstStage(input, strFirstStage);
        rocket.secondStage = parseSecondStage(input, strSecondStage);
        rocket.engines = parseEngines(input, strEngines);
        rocket.landingLegs = parseLandingLegs(input, strLandingLegs);
        rocket.flickrImages = parseArrayOfStringNullable(input, strFlickrImages);
        rocket.wikipedia = parseStringNullable(input, strWikipedia);
        rocket.description = parseStringNullable(input, strDescription);
        rocket.id = parseStringNullable(input, strId);

        return rocket;
    }

    std::optional<EnginesModel> RocketParser::parseEngines(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            EnginesParser enginesParser;
            return enginesParser.parseEngines(input[name]);
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<FirstStageModel> RocketParser::parseFirstStage(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            FirstStageParser firstStageParser;
            return firstStageParser.parseFirstStage(input[name]);
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<LandingLegsModel> RocketParser::parseLandingLegs(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            LandingLegsParser landingLegsParser;
            return landingLegsParser.parseLandingLegs(input[name]);
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<std::vector<PayloadWeightsModel>> RocketParser::parsePayloadWeightsVector(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_array())
        {
            PayloadWeightsParser payloadWeightsParser;
            return payloadWeightsParser.parsePayloadWeightsVector(input[name]);
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<SecondStageModel> RocketParser::parseSecondStage(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            SecondStageParser secondStageParser;
            return secondStageParser.parseSecondStage(input[name]);
        }
        else
        {
            return std::nullopt;
        }
    }

}
