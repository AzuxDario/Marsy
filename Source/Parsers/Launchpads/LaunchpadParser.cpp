#include "LaunchpadParser.h"

namespace Marsy::Parsers::Launchpad
{
    LaunchpadParser::LaunchpadParser()
    {

    }

    LaunchpadModel LaunchpadParser::parseOne(const json &input)
    {
        LaunchpadModel launchpad;
        launchpad.name = parseStringNullable(input, strName);
        launchpad.fullName = parseStringNullable(input, strFullName);
        launchpad.status = parseLaunchpadStatus(input, strStatus);
        launchpad.locality = parseStringNullable(input, strLocality);
        launchpad.region = parseStringNullable(input, strRegion);
        launchpad.timezone = parseStringNullable(input, strTimezone);
        launchpad.latitude = parseDoubleNullable(input, strLatitude);
        launchpad.longitude = parseDoubleNullable(input, strLongitude);
        launchpad.launchAttempts = parseIntNullable(input, strLaunchAttempts).value_or(launchpad.launchAttempts.value());
        launchpad.launchSuccess = parseIntNullable(input, strLaunchSuccesses).value_or(launchpad.launchSuccess.value());
        launchpad.rockets = parseArrayOfStringNullable(input, strRockets);
        launchpad.launches = parseArrayOfStringNullable(input, strLaunches);
        launchpad.id = parseStringNullable(input, strId);

        return launchpad;
    }

    std::optional<LaunchpadStatus> LaunchpadParser::parseLaunchpadStatus(const json &input, const std::string &name)
    {
        std::string status = parseString(input, name);        
        if(status == strStatusActive)
        {
            return LaunchpadStatus::active;
        }
        else if(status == strStatusInactive)
        {
            return LaunchpadStatus::inactive;
        }
        else if(status == strStatusUnknown)
        {
            return LaunchpadStatus::unknown;
        }
        else if(status == strStatusRetired)
        {
            return LaunchpadStatus::retired;
        }
        else if(status == strStatusLost)
        {
            return LaunchpadStatus::lost;
        }
        else if(status == strStatusUnderConstuction)
        {
            return LaunchpadStatus::underConstruction;
        }
        else
        {
            return std::nullopt;
        }
        
    }
}
