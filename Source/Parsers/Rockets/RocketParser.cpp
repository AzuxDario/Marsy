#include "RocketParser.h"

namespace Marsy::Parsers::RocketsParser
{
    RocketParser::RocketParser()
    {

    }

    Rocket RocketParser::parseRocket(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    std::vector<Rocket> RocketParser::parseRocketVector(const std::string &input)
    {
        std::vector<Rocket> rockets;
        json j = json::parse(input);

        if(j.is_array())
        {
            for (json::iterator it = j.begin(); it != j.end(); ++it)
            {
                rockets.push_back(parseObject(it.value()));
            }
        }

        return rockets;
    }

    Rocket RocketParser::parseObject(const json &input)
    {
        Rocket rocket;
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

    std::optional<Engines> RocketParser::parseEngines(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            EnginesParser enginesParser;
            return enginesParser.parseEngines(input);
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<FirstStage> RocketParser::parseFirstStage(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            FirstStageParser firstStageParser;
            return firstStageParser.parseFirstStage(input[name].dump());
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<LandingLegs> RocketParser::parseLandingLegs(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            LandingLegsParser landingLegsParser;
            return landingLegsParser.parseLandingLegs(input[name].dump());
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<std::vector<PayloadWeights>> RocketParser::parsePayloadWeightsVector(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_array())
        {
            PayloadWeightsParser payloadWeightsParser;
            return payloadWeightsParser.parsePayloadWeightsVector(input[name].dump());
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<SecondStage> RocketParser::parseSecondStage(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            SecondStageParser secondStageParser;
            return secondStageParser.parseSecondStage(input[name].dump());
        }
        else
        {
            return std::nullopt;
        }
    }

}
