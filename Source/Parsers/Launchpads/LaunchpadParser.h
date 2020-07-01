#ifndef MARSY_LAUNCHPADS_LAUNCHPADPARSER_H
#define MARSY_LAUNCHPADS_LAUNCHPADPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Launchpads/Launchpad.h"

using json = nlohmann::json;
using Marsy::Models::LaunchpadModel::Launchpad;
using Marsy::Models::LaunchpadModel::LaunchpadStatus;

namespace Marsy::Parsers::LaunchpadParser
{
    class LaunchpadParser : public Parser
    {
    private:
        const std::string strName = "name";
        const std::string strFullName = "full_name";
        const std::string strStatus = "status";
        const std::string strLocality = "locality";
        const std::string strRegion = "region";
        const std::string strTimezone = "timezone";
        const std::string strLatitude = "latitude";
        const std::string strLongitude = "longitude";
        const std::string strLaunchAttempts = "launch_attempts";
        const std::string strLaunchSuccesses = "launch_successes";
        const std::string strRockets = "rockets";
        const std::string strLaunches = "launches";
        const std::string strId = "id";
        const std::string strStatusActive = "active";
        const std::string strStatusInactive = "inactive";
        const std::string strStatusUnknown = "unknown";        
        const std::string strStatusRetired = "retired";
        const std::string strStatusLost = "lost";
        const std::string strStatusUnderConstuction = "under construction";
    public:
        LaunchpadParser();
        Launchpad parseLaunchpad(const std::string &input);
        std::vector<Launchpad> parseLaunchpadVector(const std::string &input);
    private:
        Launchpad parseObject(const json &input);
        std::optional<LaunchpadStatus> parseLaunchpadStatus(const json &input, const std::string &name);
    };
}

#endif