#include "ShipParser.h"

namespace Marsy
{
    ShipParser::ShipParser()
    {

    }

    ShipModel ShipParser::parseOne(const json &input)
    {
        ShipModel ship;
        ship.name = parseStringNullable(input, strName);
        ship.legacyId = parseStringNullable(input, strLegacyId);
        ship.model = parseStringNullable(input, strModel);
        ship.type = parseStringNullable(input, strType);
        ship.roles = parseArrayOfStringNullable(input, strRoles);
        ship.active = parseBoolNullable(input, strActive);
        ship.imo = parseIntNullable(input, strImo);
        ship.mmsi = parseIntNullable(input, strMmsi);
        ship.abs = parseIntNullable(input, strAbs);
        ship.clas = parseIntNullable(input, strClass);
        ship.massKilograms = parseDoubleNullable(input, strMassKg);
        ship.massPounds = parseDoubleNullable(input, strMassLbs);
        ship.yearBuilt = parseIntNullable(input, strYearBuilt);
        ship.homePort = parseStringNullable(input, strHomePort);
        ship.status = parseStringNullable(input, strStatus);
        ship.speedKnots = parseDoubleNullable(input, strSpeedKn);
        ship.courseDegrees = parseDoubleNullable(input, strCourseDeg);
        ship.latitude = parseDoubleNullable(input, strLatitude);
        ship.longitude = parseDoubleNullable(input, strLongitude);
        ship.lastAisUpdate = parseStringNullable(input, strLastAisUpdate);
        ship.link = parseStringNullable(input, strLink);
        ship.image = parseStringNullable(input, strImage);
        ship.launches = parseArrayOfStringNullable(input, strLaunches);
        ship.id = parseStringNullable(input, strId);

        return ship;
    }

}
