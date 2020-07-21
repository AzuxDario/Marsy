#ifndef MARSY_SHIPS_SHIPPARSER_H
#define MARSY_SHIPS_SHIPPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "../../Models/Ships/Ship.h"

using json = nlohmann::json;
using Marsy::Models::ShipModel::Ship;

namespace Marsy::Parsers::ShipParser
{
    class ShipParser : public Parser, public IParser<Ship>
    {
    private:
        const std::string strName = "name";
        const std::string strLegacyId = "legacy_id";
        const std::string strModel = "model";
        const std::string strType = "type";
        const std::string strRoles = "roles";
        const std::string strActive = "active";
        const std::string strImo = "imo";
        const std::string strMmsi = "mmsi";
        const std::string strAbs = "abs";
        const std::string strClass = "class";
        const std::string strMassKg = "mass_kg";
        const std::string strMassLbs = "mass_lbs";
        const std::string strYearBuilt = "year_built";
        const std::string strHomePort = "home_port";
        const std::string strStatus = "status";
        const std::string strSpeedKn = "speed_kn";
        const std::string strCourseDeg = "course_deg";
        const std::string strLatitude = "latitude";
        const std::string strLongitude = "longitude";
        const std::string strLastAisUpdate= "last_ais_update";
        const std::string strLink = "link";
        const std::string strImage = "image";
        const std::string strLaunches = "launches";
        const std::string strId = "id";
    public:
        ShipParser();
    protected:
        Ship parseOne(const json &input) override;
    };
}

#endif