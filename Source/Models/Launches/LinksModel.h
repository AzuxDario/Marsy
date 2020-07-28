#ifndef MARSY_LAUNCHES_LINKS_H
#define MARSY_LAUNCHES_LINKS_H

#include <string>
#include <optional>

#include "PatchModel.h"
#include "RedditModel.h"
#include "FlickrModel.h"

namespace Marsy::Models::Launch
{
    struct LinksModel
    {
        std::optional<PatchModel> patch;
        std::optional<RedditModel> reddit;
        std::optional<FlickrModel> flickr;
        std::optional<std::string> presskit = std::nullopt;
        std::optional<std::string> webcast = std::nullopt;
        std::optional<std::string> youtubeId = std::nullopt;
        std::optional<std::string> article = std::nullopt;
        std::optional<std::string> wikipedia = std::nullopt;
    };
}

#endif