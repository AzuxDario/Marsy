#ifndef MARSY_STARLINK_SPACETRACKPARSER_H
#define MARSY_STARLINK_SPACETRACKPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Starlink/SpaceTrackModel.h"
#include "../../Const/Starlink/SpaceTrackConst.h"

using json = nlohmann::json;
using Marsy::SpaceTrackModel;
using Marsy::SpaceTrackConst;

namespace Marsy
{
    class SpaceTrackParser : public Parser, private SpaceTrackConst
    {
    public:
        SpaceTrackParser();
        SpaceTrackModel parseSpaceTrack(const json &input);
    };
}

#endif