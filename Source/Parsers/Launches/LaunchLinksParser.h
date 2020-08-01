#ifndef MARSY_LAUNCHES_LAUNCHLINKSPARSER_H
#define MARSY_LAUNCHES_LAUNCHLINKSPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "FlickrParser.h"
#include "PatchParser.h"
#include "RedditParser.h"
#include "../../Models/Launches/LaunchLinksModel.h"
#include "../../Models/Launches/FlickrModel.h"
#include "../../Models/Launches/PatchModel.h"
#include "../../Models/Launches/RedditModel.h"
#include "../../Const/Launches/LaunchLinksConst.h"

using json = nlohmann::json;
using Marsy::LaunchLinksModel;
using Marsy::FlickrModel;
using Marsy::PatchModel;
using Marsy::RedditModel;
using Marsy::LaunchLinksConst;

namespace Marsy
{
    class LaunchLinksParser : public Parser, private LaunchLinksConst
    {
    public:
        LaunchLinksParser();
        LaunchLinksModel parseLinks(const json &input);
    private:
        std::optional<FlickrModel> parseFlickr(const json &input, const std::string &name);
        std::optional<PatchModel> parsePatch(const json &input, const std::string &name);
        std::optional<RedditModel> parseReddit(const json &input, const std::string &name);
    };
}

#endif