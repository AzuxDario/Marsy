#ifndef MARSY_LAUNCHES_FLICKR_H
#define MARSY_LAUNCHES_FLICKR_H

#include <string>
#include <vector>
#include <optional>

#include "Patch.h"
#include "Reddit.h"

namespace Marsy::Models::LaunchModel
{
    struct Flickr
    {
        std::optional<std::vector<std::string>> small;
        std::optional<std::vector<std::string>> original;
    };
}

#endif