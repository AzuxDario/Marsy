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
using Marsy::Models::Starlink::Starlink;
using Marsy::Models::Starlink::SpaceTrack;
using Marsy::Parsers::StarlinkParser::SpaceTrackParser;

namespace Marsy::Parsers::StarlinkParser
{
    class StarlinkParser : public Parser
    {
    private:
        const std::string strVersion = "version";
        const std::string strlaunch = "launch";
        const std::string strSpaceTrack = "spaceTrack";
        const std::string strId = "id";
    public:
        StarlinkParser();
        Starlink parseStarlink(const std::string &input);
        std::vector<Starlink> parseStarlinks(const std::string &input);
    private:
        Starlink parseObject(const json &input);
        std::optional<SpaceTrack> parseSpaceTrack(const json &input, const std::string &name);
    };
}

#endif