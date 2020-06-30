#include "StarlinkParser.h"

namespace Marsy::Parsers::StarlinkParser
{
    StarlinkParser::StarlinkParser()
    {

    }

    Starlink StarlinkParser::parseStarlink(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    std::vector<Starlink> StarlinkParser::parseStarlinks(const std::string &input)
    {
        std::vector<Starlink> starlinks;
        json j = json::parse(input);

        if(j.is_array())
        {
            for (json::iterator it = j.begin(); it != j.end(); ++it)
            {
                starlinks.push_back(parseObject(it.value()));
            }
        }

        return starlinks;
    }

    Starlink StarlinkParser::parseObject(const json &input)
    {
        Starlink starlink;
        starlink.version = parseStringNullable(input, strVersion);
        starlink.launch = parseStringNullable(input, strlaunch);
        starlink.spaceTrack = parseSpaceTrack(input, strSpaceTrack);
        starlink.id = parseStringNullable(input, strId);

        return starlink;
    }

    std::optional<SpaceTrack> StarlinkParser::parseSpaceTrack(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            SpaceTrackParser spaceTrackParser;
            return spaceTrackParser.parseSpaceTrack(input);
        }
        else
        {
            return std::nullopt;
        }
    }

}