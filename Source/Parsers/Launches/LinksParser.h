#ifndef MARSY_DARGONS_TRUNKPARSER_H
#define MARSY_DARGONS_TRUNKPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "FlickrParser.h"
#include "PatchParser.h"
#include "RedditParser.h"
#include "../../Models/Launches/LinksModel.h"
#include "../../Models/Launches/FlickrModel.h"
#include "../../Models/Launches/PatchModel.h"
#include "../../Models/Launches/RedditModel.h"

using json = nlohmann::json;
using Marsy::Models::Launch::LinksModel;
using Marsy::Models::Launch::FlickrModel;
using Marsy::Models::Launch::PatchModel;
using Marsy::Models::Launch::RedditModel;

namespace Marsy::Parsers::Launch
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
        LinksModel parseLinks(const json &input);
    private:
        std::optional<FlickrModel> parseFlickr(const json &input, const std::string &name);
        std::optional<PatchModel> parsePatch(const json &input, const std::string &name);
        std::optional<RedditModel> parseReddit(const json &input, const std::string &name);
    };
}

#endif