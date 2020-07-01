#ifndef MARSY_STARLINK_STARLINKPARSER_H
#define MARSY_STARLINK_STARLINKPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "SpaceTrackParser.h"
#include "../../Models/Starlink/Starlink.h"
#include "../../Models/Starlink/SpaceTrack.h"

using json = nlohmann::json;
using Marsy::Models::StarlinkModel::Starlink;
using Marsy::Models::StarlinkModel::SpaceTrack;
using Marsy::Parsers::StarlinkParser::SpaceTrackParser;

namespace Marsy::Parsers::StarlinkParser
{
    class StarlinkParser : public Parser
    {
    private:
        const std::string strVersion = "version";
        const std::string strLaunch = "launch";
        const std::string strLongitude = "longitude";
        const std::string strLatitude = "latitude";
        const std::string strHeightKm = "height_km";
        const std::string strVelocityKms = "velocity_kms";
        const std::string strSpaceTrack = "spaceTrack";
        const std::string strId = "id";
    public:
        StarlinkParser();
        Starlink parseStarlink(const std::string &input);
        std::vector<Starlink> parseStarlinkVector(const std::string &input);
    private:
        Starlink parseObject(const json &input);
        std::optional<SpaceTrack> parseSpaceTrack(const json &input, const std::string &name);
    };
}

#endif