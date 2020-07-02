#ifndef MARSY_DARGONS_TRUNKPARSER_H
#define MARSY_DARGONS_TRUNKPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "FlickrParser.h"
#include "PatchParser.h"
#include "RedditParser.h"
#include "../../Models/Launches/Links.h"
#include "../../Models/Launches/Flickr.h"
#include "../../Models/Launches/Patch.h"
#include "../../Models/Launches/Reddit.h"

using json = nlohmann::json;
using Marsy::Models::LaunchModel::Links;
using Marsy::Models::LaunchModel::Flickr;
using Marsy::Models::LaunchModel::Patch;
using Marsy::Models::LaunchModel::Reddit;

namespace Marsy::Parsers::LaunchesParser
{
    class LinksParser : public Parser
    {
    private:
        const std::string strPatch = "patch";
        const std::string strReddit = "reddit";
        const std::string strFlickr = "flickr";
        const std::string strPresskit = "presskit";
        const std::string strWebcast = "webcast";
        const std::string strYoutubeId = "youtube_id";
        const std::string strArticle = "article";
        const std::string strWikipedia = "wikipedia";
    public:
        LinksParser();
        Links parseLinks(const json &input);
    private:
        std::optional<Flickr> parseFlickr(const json &input, const std::string &name);
        std::optional<Patch> parsePatch(const json &input, const std::string &name);
        std::optional<Reddit> parseReddit(const json &input, const std::string &name);
    };
}

#endif