#include "LandpadParser.h"

namespace Marsy::Parsers::LandpadParser
{
    LandpadParser::LandpadParser()
    {

    }

    Landpad LandpadParser::parseLandpad(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    std::vector<Landpad> LandpadParser::parseLandpadVector(const std::string &input)
    {
        std::vector<Landpad> landpad;
        json j = json::parse(input);

        if(j.is_array())
        {
            for (json::iterator it = j.begin(); it != j.end(); ++it)
            {
                landpad.push_back(parseObject(it.value()));
            }
        }

        return landpad;
    }

    Landpad LandpadParser::parseObject(const json &input)
    {
        Landpad landpad;
        landpad.name = parseStringNullable(input, strName);
        landpad.fullName = parseStringNullable(input, strFullName);
        landpad.status = parseStringNullable(input, strStatus);
        landpad.type = parseStringNullable(input, strType);
        landpad.locality = parseStringNullable(input, strLocality);
        landpad.region = parseStringNullable(input, strRegion);
        landpad.latitude = parseDoubleNullable(input, strLatitude);
        landpad.longitude = parseDoubleNullable(input, strLongitude);
        landpad.landingAttempts = parseIntNullable(input, strLandingAttempts).value_or(landpad.landingAttempts.value());
        landpad.landingSuccess = parseIntNullable(input, strLandingSuccesses).value_or(landpad.landingSuccess.value());
        landpad.wikipedia = parseStringNullable(input, strWikipedia);
        landpad.details = parseStringNullable(input, strDetails);
        landpad.launches = parseArrayOfStringNullable(input, strLaunches);
        landpad.id = parseStringNullable(input, strId);

        return landpad;
    }

}
