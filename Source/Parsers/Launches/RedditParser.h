#ifndef MARSY_LAUNCHES_REDDITPARSER_H
#define MARSY_LAUNCHES_REDDITPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Launches/Reddit.h"

using json = nlohmann::json;
using Marsy::Models::LaunchModel::Reddit;

namespace Marsy::Parsers::LaunchesParser
{
    class RedditParser : public Parser
    {
    private:
        const std::string strCampaign = "campaign";
        const std::string strLaunch = "launch";
        const std::string strMedia = "media";
        const std::string strRecovery = "recovery";
    public:
        RedditParser();
        Reddit parseReddit(const json &input);
    };
}

#endif