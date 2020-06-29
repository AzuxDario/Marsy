#include "RoadsterParser.h"

namespace Marsy::Parsers::RoadsterParser
{
    RoadsterParser::RoadsterParser()
    {

    }

    Roadster RoadsterParser::parseRoadster(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    Roadster RoadsterParser::parseObject(const json &input)
    {
        Roadster roadster;
        roadster.name = parseStringNullable(input, strName);
        roadster.launchDateUtc = parseStringNullable(input, strLaunchDateUtc);
        roadster.launchDateUnix = parseStringNullable(input, strLaunchDateUnix);
        roadster.launchMassKilograms = parseDoubleNullable(input, strLaunchMassKg);
        roadster.launchMassPounds = parseDoubleNullable(input, strLaunchMassLbs);
        roadster.noradId = parseIntNullable(input, strNoradId);
        roadster.epochJd = parseDoubleNullable(input, strEpochJd);
        roadster.orbitType = parseStringNullable(input, strOrbitType);
        roadster.apopasisAu = parseDoubleNullable(input, strApoapsisAu);
        roadster.periapisAu = parseDoubleNullable(input, strPeriapsisAu);
        roadster.semiMajorAxisAu = parseDoubleNullable(input, strSemiMajorAxisAu);
        roadster.eccentricity = parseDoubleNullable(input, strEccentricity);
        roadster.inclination = parseDoubleNullable(input, strInclination);
        roadster.longitude = parseDoubleNullable(input, strLongitude);
        roadster.periapsisArg = parseDoubleNullable(input, strPeriapsisArg);
        roadster.periodDays = parseDoubleNullable(input, strPeriodDays);
        roadster.speedKph = parseDoubleNullable(input, strSpeedKph);
        roadster.speedMph = parseDoubleNullable(input, strSpeedMph);
        roadster.earthDistanceKilometers = parseDoubleNullable(input, strEarthDistanceKm);
        roadster.earthDistanceMiles = parseDoubleNullable(input, strEarthDistanceMi);
        roadster.marsDistanceKilometers = parseDoubleNullable(input, strMarsDistanceKm);
        roadster.marsDistanceMiles = parseDoubleNullable(input, strMarsDistanceMi);
        roadster.flickrImages = parseArrayOfStringNullable(input, strFlickrImages);
        roadster.wikipedia = parseStringNullable(input, strWikipedia);
        roadster.video = parseStringNullable(input, strVideo);
        roadster.details = parseStringNullable(input, strDetails);
        roadster.id = parseStringNullable(input, strId);

        return roadster;
    }
}
