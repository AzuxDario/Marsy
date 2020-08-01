#include "PayloadParser.h"

namespace Marsy
{
    PayloadParser::PayloadParser()
    {

    }

    PayloadModel PayloadParser::parseOne(const json &input)
    {
        PayloadModel payload;
        payload.name = parseStringNullable(input, strName);
        payload.type = parseStringNullable(input, strType);
        payload.reused = parseBoolNullable(input, strReused).value_or(payload.reused.value());
        payload.launch = parseStringNullable(input, strLaunch);
        payload.customers = parseArrayOfStringNullable(input, strCustomers);
        payload.noradIds = parseArrayOfIntNullable(input, strNoradId);
        payload.nationalities = parseArrayOfStringNullable(input, strNationalities);
        payload.manufacturers = parseArrayOfStringNullable(input, strManufacturers);
        payload.massKilograms = parseDoubleNullable(input, strMassKg);
        payload.massPounds = parseDoubleNullable(input, strMassLbs);
        payload.orbit = parseStringNullable(input, strOrbit);
        payload.referenceSystem = parseStringNullable(input, strReferenceSystem);
        payload.regtime = parseStringNullable(input, strRegtime);
        payload.longitude = parseDoubleNullable(input, strLongitude);
        payload.semiMajorAxisKilometers = parseDoubleNullable(input, strSemiMajorAxisKm);
        payload.eccentricity = parseDoubleNullable(input, strEccentricity);
        payload.periapsisKilometers = parseDoubleNullable(input, strPeriapsisKm);
        payload.apoapsisKilometers = parseDoubleNullable(input, strApoapsisKm);
        payload.inclinationDegrees = parseDoubleNullable(input, strInclinationDeg);
        payload.periodMin = parseDoubleNullable(input, strPeriodMin);
        payload.lifespanYears = parseIntNullable(input, strLifespanYears);
        payload.meanMotion = parseDoubleNullable(input, strMeanMotion);
        payload.raan = parseDoubleNullable(input, strRaan);
        payload.argOfPercenter = parseDoubleNullable(input, strArgOfPericenter);
        payload.meanAnomaly = parseDoubleNullable(input, strMeanAnomaly);
        payload.dragon = parseDragon(input, strDragon);
        payload.id = parseStringNullable(input, strId);

        return payload;
    }

    std::optional<PayloadDragonModel> PayloadParser::parseDragon(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            PayloadDragonParser dragonParser;
            return dragonParser.parseDragon(input[name]);
        }
        else
        {
            return std::nullopt;
        }
    }

}
