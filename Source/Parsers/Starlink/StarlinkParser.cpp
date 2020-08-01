#include "StarlinkParser.h"

namespace Marsy
{
    StarlinkParser::StarlinkParser()
    {

    }

    StarlinkModel StarlinkParser::parseOne(const json &input)
    {
        StarlinkModel starlink;
        starlink.version = parseStringNullable(input, strVersion);
        starlink.launch = parseStringNullable(input, strLaunch);
        starlink.longitude = parseDoubleNullable(input, strLongitude);
        starlink.latitude = parseDoubleNullable(input, strLatitude);
        starlink.heightKilometers = parseDoubleNullable(input, strHeightKm);
        starlink.velocityKilometersPerSecond = parseDoubleNullable(input, strVelocityKms);
        starlink.spaceTrack = parseSpaceTrack(input, strSpaceTrack);
        starlink.id = parseStringNullable(input, strId);

        return starlink;
    }

    std::optional<SpaceTrackModel> StarlinkParser::parseSpaceTrack(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            SpaceTrackParser spaceTrackParser;
            return spaceTrackParser.parseSpaceTrack(input[name]);
        }
        else
        {
            return std::nullopt;
        }
    }

}
