#include "RedditParser.h"

namespace Marsy::Parsers::Launch
{
    RedditParser::RedditParser()
    {

    }

    RedditModel RedditParser::parseReddit(const json &input)
    {
        RedditModel reddit;
        reddit.campaign = parseStringNullable(input, strCampaign);
        reddit.launch = parseStringNullable(input, strLaunch);
        reddit.media = parseStringNullable(input, strMedia);
        reddit.recovery = parseStringNullable(input, strRecovery);

        return reddit;
    }
}
