#ifndef MARSY_LAUNCHES_FLICKRPARSER_H
#define MARSY_LAUNCHES_FLICKRPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Launches/FlickrModel.h"
#include "../../Const/Launches/FlickrConst.h"

using json = nlohmann::json;
using Marsy::Models::Launch::FlickrModel;
using Marsy::Const::Launch::FlickrConst;

namespace Marsy::Parsers::Launch
{
    class FlickrParser : public Parser, private FlickrConst
    {
    public:
        FlickrParser();
        FlickrModel parseFlickr(const json &input);
    };
}

#endif