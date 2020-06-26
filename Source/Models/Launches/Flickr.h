#ifndef MARSY_LAUNCHES_FLICKR_H
#define MARSY_LAUNCHES_FLICKR_H

#include <string>
#include <vector>

#include "Patch.h"
#include "Reddit.h"

namespace Marsy::Models::Launches
{
    struct Flickr
    {
        std::vector<std::string> small;
        std::vector<std::string> original;
    };
}

#endif