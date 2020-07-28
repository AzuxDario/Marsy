#ifndef MARSY_DRAGON_DRAGONPARSER_H
#define MARSY_DRAGON_DRAGONPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Payloads/DragonModel.h"

using json = nlohmann::json;
using Marsy::Models::Payload::DragonModel;

namespace Marsy::Parsers::Payload
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
        DragonModel parseDragon(const json &input);
    };
}

#endif