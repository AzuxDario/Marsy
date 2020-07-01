#ifndef MARSY_DARGONS_DRAGONPARSER_H
#define MARSY_DARGONS_DRAGONPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "HeatShieldParser.h"
#include "ThrusterParser.h"
#include "TrunkParser.h"
#include "PressurizedCapsuleParser.h"
#include "../Common/CommonInfoParser.h"
#include "../../Models/Dragons/Dragon.h"
#include "../../Models/Dragons/HeatShield.h"
#include "../../Models/Dragons/Thruster.h"
#include "../../Models/Dragons/Trunk.h"
#include "../../Models/Dragons/PressurizedCapsule.h"
#include "../../Models/Common/MassInfo.h"
#include "../../Models/Common/SizeInfo.h"
#include "../../Models/Common/VolumeInfo.h"

using json = nlohmann::json;
using Marsy::Models::DragonModel::Dragon;
using Marsy::Models::DragonModel::HeatShield;
using Marsy::Models::DragonModel::Thruster;
using Marsy::Models::DragonModel::PressurizedCapsule;
using Marsy::Models::CommonModel::MassInfo;
using Marsy::Models::CommonModel::SizeInfo;
using Marsy::Models::CommonModel::VolumeInfo;
using Marsy::Parsers::CommonParser::CommonInfoParser;

namespace Marsy::Parsers::DragonParser
{
    class DragonParser : public Parser
    {
    private:
        const std::string strName = "name";
        const std::string strType = "type";
        const std::string strActive = "active";
        const std::string strCrewCapacity = "crew_capacity";
        const std::string strSidewallAngleDeg = "sidewall_angle_deg";
        const std::string strOrbitDurationYr = "orbit_duration_yr";
        const std::string strDryMassKg = "dry_mass_kg";
        const std::string strDryMassLb = "dry_mass_lb";
        const std::string strFirstFlight = "first_flight";
        const std::string strHeatShield = "heat_shield";
        const std::string strThrusters = "thrusters";
        const std::string strLaunchPayloadMass = "launch_payload_mass";
        const std::string strLaunchPayloadVol = "launch_payload_vol";
        const std::string strReturnPayloadMass = "return_payload_mass";
        const std::string strReturnPayloadVol = "return_payload_vol";
        const std::string strPressurizedCapsule = "pressurized_capsule";
        const std::string strTrunk = "trunk";
        const std::string strHeightWTrunk = "height_w_trunk";
        const std::string strDiameter = "diameter";
        const std::string strFlickrImages = "flickr_images";
        const std::string strWikipedia = "wikipedia";
        const std::string strDescription = "description";
        const std::string strId = "id";
    public:
        DragonParser();
        Dragon parseDragon(const std::string &input);
        std::vector<Dragon> parseDragonVector(const std::string &input);
    private:
        Dragon parseObject(const json &input);
        std::optional<HeatShield> parseHeatShield(const json &input, const std::string &name);
        std::optional<std::vector<Thruster>> parseThrusterVector(const json &input, const std::string &name);
        std::optional<PressurizedCapsule> parsePressurizedCapsule(const json &input, const std::string &name);
        std::optional<Trunk> parseTrunk(const json &input, const std::string &name);
    };
}

#endif