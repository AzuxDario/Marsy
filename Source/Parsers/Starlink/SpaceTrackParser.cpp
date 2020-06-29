#include "SpaceTrackParser.h"

namespace Marsy::Parsers::StarlinkParser
{
    SpaceTrackParser::SpaceTrackParser()
    {

    }

    SpaceTrack SpaceTrackParser::parseSpaceTrack(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    SpaceTrack SpaceTrackParser::parseObject(const json &input)
    {
        SpaceTrack spaceTrack;
        spaceTrack.ccsdsOmmVers = parseStringNullable(input, strCcsdsOmmVers);
        spaceTrack.comment = parseStringNullable(input, strComment);
        spaceTrack.creationDate = parseStringNullable(input, strCreationDate);
        spaceTrack.originator = parseStringNullable(input, strOriginator);
        spaceTrack.objectName = parseStringNullable(input, strObjectName);
        spaceTrack.objectId = parseStringNullable(input, strObjectId);
        spaceTrack.centerName = parseStringNullable(input, strCenterName);
        spaceTrack.refFrame = parseStringNullable(input, strRefFrame);
        spaceTrack.timeSystem = parseStringNullable(input, strTimeSystem);
        spaceTrack.meanElementTheory = parseStringNullable(input, strMeanElementTheory);
        spaceTrack.epoch = parseStringNullable(input, strEpoch);
        spaceTrack.meanMotion = parseDoubleNullable(input, strMeanMotion);
        spaceTrack.eccentricity = parseDoubleNullable(input, strEccentricy);
        spaceTrack.inclination = parseDoubleNullable(input, strInclination);
        spaceTrack.raOfAscNode = parseDoubleNullable(input, strRaOfAscNode);
        spaceTrack.ArgOfPericenter = parseDoubleNullable(input, strArgOfPericenter);
        spaceTrack.meanAnomaly = parseDoubleNullable(input, strMeanAnomaly);
        spaceTrack.ephemerisType = parseIntNullable(input, strEphemerisType);
        spaceTrack.classificationType = parseStringNullable(input, strClassificationType);
        spaceTrack.noradCatId = parseIntNullable(input, strNoradCatId);
        spaceTrack.elementSetNo = parseIntNullable(input, strElementSetNo);
        spaceTrack.revAtEpoch = parseIntNullable(input, strRevAtEpoch);
        spaceTrack.bstar = parseDoubleNullable(input, strBstar);
        spaceTrack.meanMotionDot = parseDoubleNullable(input, strMeanMotionDot);
        spaceTrack.meanMotionDdot = parseDoubleNullable(input, strMeanMotionDdot);
        spaceTrack.semimajorAxis = parseDoubleNullable(input, strSemimajorAxis);
        spaceTrack.period = parseDoubleNullable(input, strPeriod);
        spaceTrack.apoapsis = parseDoubleNullable(input, strApoapsis);
        spaceTrack.periapsis = parseDoubleNullable(input, strPeriapsis);
        spaceTrack.objectType = parseStringNullable(input, strObjectType);
        spaceTrack.rcsSize = parseStringNullable(input, strRcsSize);
        spaceTrack.countryCode = parseStringNullable(input, strCountryCode);
        spaceTrack.launchDate = parseStringNullable(input, strLaunchDate);
        spaceTrack.site = parseStringNullable(input, strSite);
        spaceTrack.decayDate = parseStringNullable(input, strDecayDate);
        spaceTrack.decayed = parseIntNullable(input, strDecayed);
        spaceTrack.file = parseIntNullable(input, strFile);
        spaceTrack.gpId = parseIntNullable(input, strGpId);
        spaceTrack.tleLine0 = parseStringNullable(input, strTleLine0);
        spaceTrack.tleLine1 = parseStringNullable(input, strTleLine1);
        spaceTrack.tleLine2 = parseStringNullable(input, strTleLine2);

        return spaceTrack;
    }

}
