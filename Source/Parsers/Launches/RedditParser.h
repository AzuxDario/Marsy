#ifndef MARSY_LAUNCHES_REDDITPARSER_H
#define MARSY_LAUNCHES_REDDITPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Launches/RedditModel.h"

using json = nlohmann::json;
using Marsy::Models::Launch::RedditModel;

namespace Marsy::Parsers::Launch
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
        RedditModel parseReddit(const json &input);
    };
}

#endif