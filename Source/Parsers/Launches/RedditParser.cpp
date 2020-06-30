#include "RedditParser.h"

namespace Marsy::Parsers::LaunchesParser
{
    RedditParser::RedditParser()
    {

    }

    Reddit RedditParser::parseReddit(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    Reddit RedditParser::parseObject(const json &input)
    {
        Reddit reddit;
        reddit.campaign = parseStringNullable(input, strCampaign);
        reddit.launch = parseStringNullable(input, strLaunch);
        reddit.media = parseStringNullable(input, strMedia);
        reddit.recovery = parseStringNullable(input, strRecovery);

        return reddit;
    }

}
