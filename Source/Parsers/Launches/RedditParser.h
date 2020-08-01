#ifndef MARSY_LAUNCHES_REDDITPARSER_H
#define MARSY_LAUNCHES_REDDITPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Launches/RedditModel.h"
#include "../../Const/Launches/RedditConst.h"

using json = nlohmann::json;
using Marsy::RedditModel;
using Marsy::RedditConst;

namespace Marsy
{
    class RedditParser : public Parser, private RedditConst
    {
    public:
        RedditParser();
        RedditModel parseReddit(const json &input);
    };
}

#endif