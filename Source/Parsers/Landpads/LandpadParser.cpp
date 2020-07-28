#include "LandpadParser.h"

namespace Marsy::Parsers::Landpad
{
    LandpadParser::LandpadParser()
    {

    }

    LandpadModel LandpadParser::parseOne(const json &input)
    {
        LandpadModel landpad;
        landpad.name = parseStringNullable(input, strName);
        landpad.fullName = parseStringNullable(input, strFullName);
        landpad.status = parseLandpadStatus(input, strStatus);
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

    std::optional<LandpadStatus> LandpadParser::parseLandpadStatus(const json &input, const std::string &name)
    {
        std::string status = parseString(input, name);        
        if(status == strStatusActive)
        {
            return LandpadStatus::active;
        }
        else if(status == strStatusInactive)
        {
            return LandpadStatus::inactive;
        }
        else if(status == strStatusUnknown)
        {
            return LandpadStatus::unknown;
        }
        else if(status == strStatusRetired)
        {
            return LandpadStatus::retired;
        }
        else if(status == strStatusLost)
        {
            return LandpadStatus::lost;
        }
        else if(status == strStatusUnderConstuction)
        {
            return LandpadStatus::underConstruction;
        }
        else
        {
            return std::nullopt;
        }
        
    }

}
