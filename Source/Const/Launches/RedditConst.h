#ifndef MARSY_LAUNCHES_REDDITCONST_H
#define MARSY_LAUNCHES_REDDITCONST_H

#include <string>

namespace Marsy::Const::Launch
{
    struct RedditConst
    {
        const std::string strCampaign = "campaign";
        const std::string strLaunch = "launch";
        const std::string strMedia = "media";
        const std::string strRecovery = "recovery";
    };
}

#endif