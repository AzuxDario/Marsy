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
using Marsy::Models::Launch::RedditModel;
using Marsy::Const::Launch::RedditConst;

namespace Marsy::Parsers::Launch
{
    class RedditParser : public Parser, private RedditConst
    {
    public:
        RedditParser();
        RedditModel parseReddit(const json &input);
    };
}

#endif