#ifndef MARSY_DRAGON_DRAGONPARSER_H
#define MARSY_DRAGON_DRAGONPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Payloads/Dragon.h"

using json = nlohmann::json;
using Marsy::Models::PayloadModel::Dragon;

namespace Marsy::Parsers::PayloadParser
{
    class DragonParser : public Parser
    {
    private:
        const std::string strCapsule = "capsule";
        const std::string strMassReturnedKg = "mass_returned_kg";
        const std::string strMassReturnedLbs = "mass_returned_lbs";
        const std::string strFlightTimeSec = "flight_time_sec";
        const std::string strManifest = "manifest";
        const std::string strWaterLanding = "water_landing";
        const std::string strLandLanding = "land_landing";
    public:
        DragonParser();
        Dragon parseDragon(const std::string &input);
    private:
        Dragon parseObject(const json &input);
    };
}

#endif