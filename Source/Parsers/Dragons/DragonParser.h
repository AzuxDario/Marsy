#ifndef MARSY_DARGONS_DRAGONPARSER_H
#define MARSY_DARGONS_DRAGONPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "HeatShieldParser.h"
#include "ThrusterParser.h"
#include "TrunkParser.h"
#include "PressurizedCapsuleParser.h"
#include "../Common/CommonInfoParser.h"
#include "../../Models/Dragons/DragonModel.h"
#include "../../Models/Dragons/HeatShieldModel.h"
#include "../../Models/Dragons/ThrusterModel.h"
#include "../../Models/Dragons/TrunkModel.h"
#include "../../Models/Dragons/PressurizedCapsuleModel.h"
#include "../../Models/Common/MassInfoModel.h"
#include "../../Models/Common/SizeInfoModel.h"
#include "../../Models/Common/VolumeInfoModel.h"

using json = nlohmann::json;
using Marsy::Models::Dragon::DragonModel;
using Marsy::Models::Dragon::HeatShieldModel;
using Marsy::Models::Dragon::ThrusterModel;
using Marsy::Models::Dragon::PressurizedCapsuleModel;
using Marsy::Models::Common::MassInfoModel;
using Marsy::Models::Common::SizeInfoModel;
using Marsy::Models::Common::VolumeInfoModel;
using Marsy::Parsers::Common::CommonInfoParser;

namespace Marsy::Parsers::Dragon
{
    class DragonParser : public Parser, public IParser<DragonModel>
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
    protected:
        DragonModel parseOne(const json &input) override;
    private:
        std::optional<HeatShieldModel> parseHeatShield(const json &input, const std::string &name);
        std::optional<std::vector<ThrusterModel>> parseThrusterVector(const json &input, const std::string &name);
        std::optional<PressurizedCapsuleModel> parsePressurizedCapsule(const json &input, const std::string &name);
        std::optional<TrunkModel> parseTrunk(const json &input, const std::string &name);
    };
}

#endif