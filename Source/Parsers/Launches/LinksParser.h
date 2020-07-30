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
#include "../../Const/Launches/LinksConst.h"

using json = nlohmann::json;
using Marsy::Models::Launch::LinksModel;
using Marsy::Models::Launch::FlickrModel;
using Marsy::Models::Launch::PatchModel;
using Marsy::Models::Launch::RedditModel;
using Marsy::Const::Launch::LinksConst;

namespace Marsy::Parsers::Launch
{
    class LinksParser : public Parser, private LinksConst
    {
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