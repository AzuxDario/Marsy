#ifndef MARSY_LAUNCHES_FLICKRPARSER_H
#define MARSY_LAUNCHES_FLICKRPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Launches/Flickr.h"

using json = nlohmann::json;
using Marsy::Models::LaunchModel::Flickr;

namespace Marsy::Parsers::LaunchesParser
{
    class FlickrParser : public Parser
    {
    private:
        const std::string strSmall = "small";
        const std::string strOriginal = "original";
    public:
        FlickrParser();
        Flickr parseFlickr(const json &input);
    };
}

#endif