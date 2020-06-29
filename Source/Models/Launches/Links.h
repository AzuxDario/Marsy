#ifndef MARSY_LAUNCHES_LINKS_H
#define MARSY_LAUNCHES_LINKS_H

#include <string>
#include <optional>

#include "Patch.h"
#include "Reddit.h"
#include "Flickr.h"

namespace Marsy::Models::LaunchModel
{
    struct Links
    {
        std::optional<Patch> patch;
        std::optional<Reddit> reddit;
        std::optional<Flickr> flickr;
        std::optional<std::string> presskit = std::nullopt;
        std::optional<std::string> webcast = std::nullopt;
        std::optional<std::string> youtubeId = std::nullopt;
        std::optional<std::string> article = std::nullopt;
        std::optional<std::string> wikipedia = std::nullopt;
    };
}

#endif