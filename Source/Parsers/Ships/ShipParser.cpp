#include "ShipParser.h"

namespace Marsy::Parsers::ShipParser
{
    ShipParser::ShipParser()
    {

    }

    Ship ShipParser::parseObject(const std::string &input)
    {
        json j = json::parse(input);
        return parseOne(j);
    }

    std::vector<Ship> ShipParser::parseVector(const std::string &input)
    {
        std::vector<Ship> ship;
        json j = json::parse(input);

        if(j.is_array())
        {
            for (json::iterator it = j.begin(); it != j.end(); ++it)
            {
                ship.push_back(parseOne(it.value()));
            }
        }

        return ship;
    }

    Ship ShipParser::parseOne(const json &input)
    {
        Ship ship;
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
