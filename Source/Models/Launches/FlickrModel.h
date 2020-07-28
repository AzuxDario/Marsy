#ifndef MARSY_LAUNCHES_FLICKR_H
#define MARSY_LAUNCHES_FLICKR_H

#include <string>
#include <vector>
#include <optional>

namespace Marsy::Models::Launch
{
    struct FlickrModel
    {
        std::optional<std::vector<std::string>> small;
        std::optional<std::vector<std::string>> original;
    };
}

#endif