#include "RedditParser.h"

namespace Marsy::Parsers::LaunchesParser
{
    RedditParser::RedditParser()
    {

    }

    Reddit RedditParser::parseReddit(const json &input)
    {
        Reddit reddit;
        reddit.campaign = parseStringNullable(input, strCampaign);
        reddit.launch = parseStringNullable(input, strLaunch);
        reddit.media = parseStringNullable(input, strMedia);
        reddit.recovery = parseStringNullable(input, strRecovery);

        return reddit;
    }
}
