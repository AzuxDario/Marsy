#include "LaunchpadParser.h"

namespace Marsy::Parsers::LaunchpadParser
{
    LaunchpadParser::LaunchpadParser()
    {

    }

    Launchpad LaunchpadParser::parseLaunchpad(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    std::vector<Launchpad> LaunchpadParser::parseLaunchpads(const std::string &input)
    {
        std::vector<Launchpad> launchpad;
        json j = json::parse(input);

        if(j.is_array())
        {
            for (json::iterator it = j.begin(); it != j.end(); ++it)
            {
                launchpad.push_back(parseObject(it.value()));
            }
        }

        return launchpad;
    }

    Launchpad LaunchpadParser::parseObject(const json &input)
    {
        Launchpad launchpad;
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
        else if(status == strStatusRetried)
        {
            return LaunchpadStatus::retried;
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
