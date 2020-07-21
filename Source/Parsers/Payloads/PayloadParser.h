#ifndef MARSY_PAYLOAD_PAYLOADPARSER_H
#define MARSY_PAYLOAD_PAYLOADPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "DragonParser.h"
#include "../../Models/Payloads/Payload.h"
#include "../../Models/Payloads/Dragon.h"

using json = nlohmann::json;
using Marsy::Models::PayloadModel::Payload;
using Marsy::Models::PayloadModel::Dragon;
using Marsy::Parsers::PayloadParser::DragonParser;

namespace Marsy::Parsers::PayloadParser
{
    class PayloadParser : public Parser, public IParser<Payload>
    {
    private:
        const std::string strName = "name";
        const std::string strType = "type";
        const std::string strReused = "reused";
        const std::string strLaunch = "launch";
        const std::string strCustomers = "customers";
        const std::string strNoradId = "norad_ids";
        const std::string strNationalities = "nationalities";
        const std::string strManufacturers = "manufacturers";
        const std::string strMassKg = "mass_kg";
        const std::string strMassLbs = "mass_lbs";
        const std::string strOrbit = "orbit";
        const std::string strReferenceSystem = "reference_system";
        const std::string strRegtime = "regime";
        const std::string strLongitude = "longitude";
        const std::string strSemiMajorAxisKm = "semi_major_axis_km";
        const std::string strEccentricity = "eccentricity";
        const std::string strPeriapsisKm = "periapsis_km";
        const std::string strApoapsisKm = "apoapsis_km";
        const std::string strInclinationDeg = "inclination_deg";
        const std::string strPeriodMin = "period_min";
        const std::string strLifespanYears = "lifespan_years";
        const std::string strEpoch = "epoch";
        const std::string strMeanMotion = "mean_motion";
        const std::string strRaan = "raan";
        const std::string strArgOfPericenter = "arg_of_pericenter";
        const std::string strMeanAnomaly = "mean_anomaly";
        const std::string strDragon = "dragon";
        const std::string strId = "id";
    public:
        PayloadParser();
    protected:
        Payload parseOne(const json &input) override;
    private:
        std::optional<Dragon> parseDragon(const json &input, const std::string &name);
    };
}

#endif